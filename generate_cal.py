import struct
import sys
import binascii

def generate_color_cal(output_path, gamma, ccm_values, wb_gains):
    """
    Generates a 31-byte color_cal file from calibration values.

    Args:
        output_path: Path to save the generated binary file.
        gamma: Float gamma value.
        ccm_values: List of 9 float CCM values (row-major).
        wb_gains: List of 3 float WB gains [R, G, B].
    """
    if len(ccm_values) != 9:
        raise ValueError("ccm_values must contain exactly 9 floats.")
    if len(wb_gains) != 3:
        raise ValueError("wb_gains must contain exactly 3 floats.")

    all_values = [gamma] + ccm_values + wb_gains

    if len(all_values) != 13:
        # This should not happen with the checks above, but as a safeguard
        raise ValueError("Internal error: Expected 13 values total.")

    try:
        # Pack the 13 floats as little-endian half-precision floats
        packed_data = struct.pack('<13e', *all_values) # Use '<' for little-endian

        # Add the 5 ignored bytes (using null bytes as a default)
        # The actual value doesn't matter to weston based on decompiled code
        ignored_bytes = b'\x00\x00\x00\x00\x00'
        final_data = packed_data + ignored_bytes

        if len(final_data) != 31:
             raise RuntimeError(f"Internal error: Generated data length is {len(final_data)}, expected 31.")

        with open(output_path, 'wb') as f:
            f.write(final_data)

        print(f"Successfully generated {output_path} ({len(final_data)} bytes)")
        print(f"Hex: {binascii.hexlify(final_data).decode()}")

    except struct.error as e:
        print(f"Error packing data: {e}")
    except IOError as e:
        print(f"Error writing file: {e}")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

if __name__ == "__main__":
    # --- Generate Identity Calibration File ---
    print("Generating identity color_cal file (identity.bin)...")
    identity_gamma = 1.0
    identity_ccm = [1.0, 0.0, 0.0,
                    0.0, 1.0, 0.0,
                    0.0, 0.0, 1.0]
    identity_wb = [1.0, 1.0, 1.0]
    generate_color_cal("identity.bin", identity_gamma, identity_ccm, identity_wb)

    # --- Example: Generate file from Erich's sample values (for verification) ---
    # print("\nGenerating file from Erich's sample values (erich_regen.bin)...")
    # erich_gamma = 0.9399
    # erich_ccm = [0.6777, 0.0483, 0.0100, 0.2363, 0.8604, 0.0364, 0.0860, 0.0915, 0.9536]
    # erich_wb = [1.0000, 1.1211, 2.0840]
    # generate_color_cal("erich_regen.bin", erich_gamma, erich_ccm, erich_wb)

    # --- How to use for custom values ---
    # You would call generate_color_cal() with your desired values, e.g.:
    # my_gamma = 1.2
    # my_ccm = [ ... your 9 values ... ]
    # my_wb = [ ... your 3 values ... ]
    # generate_color_cal("my_custom_cal.bin", my_gamma, my_ccm, my_wb)