import binascii
import struct
import sys
import os

def analyze_color_cal(file_path):
    """Analyzes a color_cal binary file."""
    if not os.path.exists(file_path):
        print(f"Error: File not found at {file_path}")
        return

    print(f"--- Analyzing file: {file_path} ---")
    try:
        with open(file_path, 'rb') as f:
            binary_data = f.read()
    except IOError as e:
        print(f"Error reading file: {e}")
        return

    file_size = len(binary_data)
    print(f"File Size: {file_size} bytes")
    print(f"Binary Data (hex): {binascii.hexlify(binary_data).decode()}")

    if file_size != 31:
        print(f"\nWarning: Expected file size of 31 bytes, but got {file_size}. Analysis assumes 31-byte structure.")
        # Continue analysis, but results might be unreliable if size differs

    # --- Analysis Logic ---
    num_expected_halfs = 13
    bytes_for_halfs = num_expected_halfs * 2 # 26 bytes

    print(f"\nAttempting to unpack first {bytes_for_halfs} bytes as {num_expected_halfs} half-precision floats (little-endian, format 'e'):")
    if file_size >= bytes_for_halfs:
        try:
            calibration_data_bytes = binary_data[:bytes_for_halfs]
            half_floats = struct.unpack(f'<{num_expected_halfs}e', calibration_data_bytes)

            print("Unpacked Calibration Values (Half-Floats):")
            gamma = half_floats[0]
            ccm = list(half_floats[1:10]) # 9 values
            wb_gains = list(half_floats[10:13]) # 3 values

            print(f"  Gamma: {gamma:.4f}")
            print("  CCM (Color Correction Matrix):")
            print(f"    [{ccm[0]:.4f}, {ccm[1]:.4f}, {ccm[2]:.4f}]")
            print(f"    [{ccm[3]:.4f}, {ccm[4]:.4f}, {ccm[5]:.4f}]")
            print(f"    [{ccm[6]:.4f}, {ccm[7]:.4f}, {ccm[8]:.4f}]")
            print("  WB Gains (White Balance):")
            print(f"    [R={wb_gains[0]:.4f}, G={wb_gains[1]:.4f}, B={wb_gains[2]:.4f}]")

        except struct.error as e:
            print(f"Could not unpack as half-floats: {e}")
        except Exception as e:
            print(f"An error occurred during half-float unpacking: {e}")
    else:
        print(f"Binary data is too short ({file_size} bytes) to unpack {num_expected_halfs} half-floats.")

    # Analyze remaining bytes
    if file_size > bytes_for_halfs:
        remaining_bytes = binary_data[bytes_for_halfs:]
        num_remaining = len(remaining_bytes)
        print(f"\nRemaining {num_remaining} bytes: {remaining_bytes}")
        print(f"Hex representation: {binascii.hexlify(remaining_bytes).decode()}")

        # Checksum hypothesis test (only if file size is exactly 31)
        if file_size == 31 and num_remaining == 5:
            calculated_checksum = sum(calibration_data_bytes) % 256
            last_byte = remaining_bytes[-1]
            print(f"\nChecksum Test (Simple Sum Mod 256):")
            print(f"  Sum of first {bytes_for_halfs} bytes: {sum(calibration_data_bytes)}")
            print(f"  Sum mod 256: {calculated_checksum}")
            print(f"  Last byte of data: {last_byte} (0x{last_byte:02x})")
            if calculated_checksum == last_byte:
                print("  Checksum matches!")
            else:
                print("  Checksum does NOT match.")
        elif file_size == 31: # Should have 5 remaining bytes if size is 31
             print("\nCould not perform checksum test: Incorrect number of remaining bytes for a 31-byte file.")
    elif file_size == bytes_for_halfs:
         print("\nNo remaining bytes after unpacking floats.")
    else: # file_size < bytes_for_halfs
         print("\nNo remaining bytes to analyze (file too short).")

    print(f"\n--- Analysis complete for: {file_path} ---")


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python analyze_cal.py <path_to_color_cal_file>")
        sys.exit(1)

    input_file = sys.argv[1]
    analyze_color_cal(input_file)