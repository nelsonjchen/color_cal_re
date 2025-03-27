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

*   **Bytes 0-25 (26 bytes):** Calibration Data
    *   13 x little-endian half-precision floats (binary16)
    *   Order: Gamma (1), CCM (9), WB Gains (3)
*   **Bytes 26-29 (4 bytes):** Unknown (`0x00000000`)
    *   Likely padding or reserved.
*   **Byte 30 (1 byte):** Unknown (`0x24`)
    *   Not a simple checksum. Could be version, display type ID, delimiter, etc.

## Further Investigation Ideas

*   Obtain more `color_cal` examples (different devices/batches) to see how the last 5 bytes vary.
*   Analyze the `weston` binary (if possible, though it's closed source) to see how it reads and interprets this file.
*   Check if the timestamp `2025-03-10 09:24:40` relates to the data in any non-obvious way (unlikely given the remaining bytes).