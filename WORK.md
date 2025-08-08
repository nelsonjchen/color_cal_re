# Color Calibration Reverse Engineering Work Log

This document tracks the reverse engineering process for the `color_cal` file format.

## Initial Data (from README.md)

- **Hex String (from QR Code):** `4b3d9e388b29b1184333273a9f2645320032c63b003cf53d92430000000024`
- **Text Data (from Sticker):**
    - Gamma: 1.32
    - CCM:
        - 0.58 0.04 0.
        - 0.23 0.77 0.03
        - 0.2 0.19 0.97
    - WB gains:
        - 1.00 1.49 3.78
    - Timestamp: 2025-03-10 09:24:40

## Analysis Steps & Findings

1.  **Decode Hex:** The hex string `4b3d9e388b29b1184333273a9f2645320032c63b003cf53d92430000000024` decodes to 31 bytes: `b"K=\x9e8\x8b)\xb1\x18C3':\x9f&E2\x002\xc6;\x00<\xf5=\x92C\x00\x00\x00\x00$"`.
2.  **Interpret Data Types:** Initial attempts with single-precision floats failed. Testing with half-precision floats (binary16, little-endian) was successful.
3.  **Correlate Values:** The first 26 bytes correspond to the 13 known calibration values in the order presented on the sticker:
    *   Bytes 0-1: Gamma (1.32)
    *   Bytes 2-3: CCM[0,0] (0.58)
    *   Bytes 4-5: CCM[0,1] (0.04)
    *   Bytes 6-7: CCM[0,2] (0.0)
    *   Bytes 8-9: CCM[1,0] (0.23)
    *   Bytes 10-11: CCM[1,1] (0.77)
    *   Bytes 12-13: CCM[1,2] (0.03)
    *   Bytes 14-15: CCM[2,0] (0.2)
    *   Bytes 16-17: CCM[2,1] (0.19)
    *   Bytes 18-19: CCM[2,2] (0.97)
    *   Bytes 20-21: WB gains[0] (R) (1.00)
    *   Bytes 22-23: WB gains[1] (G) (1.49)
    *   Bytes 24-25: WB gains[2] (B) (3.78)
    *   All values are stored as **little-endian half-precision floats (binary16)**.

4.  **Remaining Bytes:** The last 5 bytes are `b'\x00\x00\x00\x00$'` (hex: `0000000024`).
    *   Bytes 26-29: `0x00000000` - Purpose unknown (Padding? Reserved?).
    *   Byte 30: `0x24` (ASCII '$') - Purpose unknown (Checksum? Version? Delimiter?). Unlikely related to the sticker timestamp.

## Next Steps & Findings (cont.)

5.  **Checksum Test:** A simple checksum (sum of the first 26 bytes modulo 256) was calculated.
    *   Sum = 2148
    *   Sum mod 256 = 100
    *   Last byte = 36 (0x24)
    *   **Result:** The checksum does **not** match. The purpose of the final byte `0x24` remains unknown. It is not a simple sum checksum.

## Current Understanding of Format (31 bytes total)

## Sample 2: Erich's C3X (`samples/erich/color_cal`)

Analysis performed using the updated `analyze_cal.py` script.

- **File Size:** 31 bytes
- **Hex Data:** `853b6c392e2a25219033e23aa928812ddb2da13b003c7c3c2b400000000064`
- **Unpacked Values (13 half-floats):**
    - Gamma: 0.9399
    - CCM: [0.6777, 0.0483, 0.0100], [0.2363, 0.8604, 0.0364], [0.0860, 0.0915, 0.9536]
    - WB Gains: [R=1.0000, G=1.1211, B=2.0840]
- **Remaining Bytes (5 bytes):** `b'\x00\x00\x00\x00d'` (hex: `0000000064`)
- **Checksum Test (Simple Sum Mod 256):** Failed (Sum mod 256 = 164, Last byte = 100 (0x64)).

**Observations:**
- Consistent 31-byte structure.
- First 26 bytes are calibration data (13 half-floats).
- Next 4 bytes are consistently null (`0x00000000`).
- Final byte varies between samples (`0x24` vs `0x64`), ruling out a fixed delimiter and simple sum checksum. Its purpose remains unknown.


*   **Bytes 0-25 (26 bytes):** Calibration Data
    *   13 x little-endian half-precision floats (binary16)
    *   Order: Gamma (1), CCM (9), WB Gains (3)
*   **Bytes 26-29 (4 bytes):** Unknown (`0x00000000`)
    *   Likely padding or reserved.
*   **Byte 30 (1 byte):** Unknown (`0x24`)
    *   Not a simple checksum. Could be version, display type ID, delimiter, etc.

## Further Investigation Ideas

## Shader Logic and Simulation

Analysis of the `color_correction_get_shader` function in the decompiled code revealed how the calibration values are used:

1.  **Half-Float Decoding:** The `uint16_t` values are manually decoded into standard floats.
2.  **GLSL Generation:** A GLSL fragment shader snippet is dynamically generated, hardcoding the calibration values (or derived values like inverse WB gains and gamma factor).
3.  **Correction Steps (in GLSL):**
    a.  Linearize input color (inverse EOTF using `pow(..., 2.2)`).
    b.  Apply White Balance correction (multiply by inverse gains).
    c.  Apply Color Correction Matrix (CCM) via matrix multiplication.
    d.  Apply Gamma correction and forward EOTF (`pow(..., gamma_cal / 2.2)`).

**Simulation Tool:**
A Python script `simulate_correction.py` has been created to replicate this process. It reads a `color_cal` file and applies the same sequence of transformations to input RGB values, allowing for testing and verification of the correction effect.


*   ~~Obtain more `color_cal` examples (different devices/batches) to see how the last 5 bytes vary.~~ (Still useful for understanding *generation*, but not *usage* by weston).
*   **Analyze the `weston` binary:** Done via decompiled `gl-renderer-src/comma-modified-decompiled.c`.
*   ~~Check if the timestamp `2025-03-10 09:24:40` relates to the data in any non-obvious way (unlikely given the remaining bytes).~~

## Final Findings from Decompiled Code (`gl-renderer-src/comma-modified-decompiled.c`)

Analysis of the `read_correction_values` function (responsible for loading the calibration data) revealed the following:

1.  **Structure Definition:** The code uses a `struct color_correction_values` defined as:
    ```c
    struct color_correction_values {
        uint16_t gamma;         // 2 bytes
        uint16_t ccm[9];        // 18 bytes
        uint16_t rgb_color_gains[3]; // 6 bytes
    }; // Total: 26 bytes
    ```
    This matches the 13 half-float values identified earlier. The `uint16_t` values are treated as half-float bit patterns.

2.  **Memory Allocation & Reading:** The function allocates exactly 26 bytes (`malloc(0x1a)`) for this structure and reads exactly 26 bytes from the `color_cal` file using `fread(ptr, 0x1a, 1, stream)`.

3.  **Ignored Bytes:** The code **does not read or use any data beyond the first 26 bytes**.

**Conclusion:** The final 5 bytes (`00000000` + `XX`) present in the `color_cal` files are **ignored** by the `weston` gl-renderer component responsible for applying the color calibration. Their purpose might relate to the manufacturing/calibration process or other tools, but they do not affect the runtime color correction performed by `weston` based on this code.
## Color Adaptation

The primary goal of this reverse engineering effort was to create a method to make a new screen display colors as if it were an old screen. This was achieved by creating an `adapt.py` script that generates a new `color_cal` file.

### Theory

The color transformation pipeline is a series of mathematical operations. To make the new screen look like the old one, we need to apply a transformation that is equivalent to applying the old screen's calibration and undoing the new screen's calibration.

The transformation `T_adapt` is calculated as: `T_adapt = T_old * T_new^-1`

This is broken down for each component:

*   **Gamma:** The adapted gamma is simply the old gamma value. `gamma_adapted = gamma_old`
*   **White Balance (WB):** The adapted gains are the old gains divided by the new gains. `gains_adapted = gains_old / gains_new`
*   **Color Correction Matrix (CCM):** The adapted CCM is the old CCM multiplied by the inverse of the new CCM. `CCM_adapted = CCM_old * inverse(CCM_new)`

### Implementation

The `adapt.py` script implements this theory. It reads the two calibration files, calculates the new adapted values, and generates a new `color_cal` file.
