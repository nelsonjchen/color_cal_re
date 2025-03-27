import binascii
import struct

# Hex string from the QR code in README.md
hex_string = "4b3d9e388b29b1184333273a9f2645320032c63b003cf53d92430000000024"

# Decode the hex string into bytes
try:
    binary_data = binascii.unhexlify(hex_string)
    print(f"Successfully decoded hex string.")
    print(f"Hex String: {hex_string}")
    print(f"Length of Hex String: {len(hex_string)}")
    print(f"Binary Data (raw bytes): {binary_data}")
    print(f"Length of Binary Data (bytes): {len(binary_data)}") # Correct length is 31 bytes

    # Next steps: Try interpreting these bytes as different data types
    # Assuming little-endian based on common architectures

    # Total number of bytes is 31.
    # Let's examine the known values:
    # Gamma: 1.32 (float)
    # CCM: 9 floats (0.58, 0.04, 0.0, 0.23, 0.77, 0.03, 0.2, 0.19, 0.97)
    # WB gains: 3 floats (1.00, 1.49, 3.78)
    # Total known floats: 1 + 9 + 3 = 13 floats.
    # If they are 4-byte floats, that would be 13 * 4 = 52 bytes. This doesn't match the 39 bytes.
    # If they are 2-byte floats (half-precision), that would be 13 * 2 = 26 bytes. This leaves 39 - 26 = 13 bytes unaccounted for.
    # If they are a mix, or some other encoding is used, it needs investigation.

    # Let's try unpacking assuming 4-byte floats (single precision) from the start
    num_floats_possible = len(binary_data) // 4
    print(f"\nAttempting to unpack as {num_floats_possible} single-precision floats (little-endian):")
    try:
        floats = struct.unpack(f'<{num_floats_possible}f', binary_data[:num_floats_possible*4])
        for i, f in enumerate(floats):
            print(f"Float {i}: {f:.4f}")
    except struct.error as e:
        print(f"Could not unpack as floats: {e}")

    # Let's try unpacking assuming 2-byte floats (half precision) from the start
    # We expect 13 values (Gamma + 9 CCM + 3 WB) = 26 bytes
    num_expected_halfs = 13
    bytes_for_halfs = num_expected_halfs * 2
    print(f"\nAttempting to unpack first {bytes_for_halfs} bytes as {num_expected_halfs} half-precision floats (little-endian, format 'e'):")
    if len(binary_data) >= bytes_for_halfs:
        try:
            # '<' for little-endian, '13e' for 13 half-precision floats
            # '<' for little-endian, '13e' for 13 half-precision floats
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


            # Compare with known values (already done, but keep for verification)
            # ... comparison code remains the same ...
            print("\nComparing with known values from sticker:")
            known_gamma = 1.32
            known_ccm = [0.58, 0.04, 0.0, 0.23, 0.77, 0.03, 0.2, 0.19, 0.97]
            known_wb = [1.00, 1.49, 3.78]
            all_known = [known_gamma] + known_ccm + known_wb

            match = True
            for i in range(num_expected_halfs):
                if not abs(half_floats[i] - all_known[i]) < 0.01:
                    print(f"Mismatch at index {i}: Unpacked={half_floats[i]:.4f}, Known={all_known[i]:.2f}")
                    match = False

            if match:
                print("All unpacked values match the known sticker values (within tolerance)!")
            else:
                print("Unpacked values do NOT perfectly match known sticker values.")


        except struct.error as e:
            print(f"Could not unpack as half-floats: {e}")
        except Exception as e:
            print(f"An error occurred during half-float unpacking: {e}")
    else:
        print(f"Binary data is too short ({len(binary_data)} bytes) to unpack {num_expected_halfs} half-floats.")

    # Analyze remaining bytes
    if len(binary_data) > bytes_for_halfs:
        remaining_bytes = binary_data[bytes_for_halfs:]
        print(f"\nRemaining {len(remaining_bytes)} bytes: {remaining_bytes}")
        print(f"Hex representation: {binascii.hexlify(remaining_bytes).decode()}")
        # Expected: b'\x00\x00\x00\x00$' (hex: 0000000024) - 5 bytes

        # Checksum hypothesis: Sum of first 26 bytes mod 256 == last byte?
        if len(remaining_bytes) == 5:
            calculated_checksum = sum(calibration_data_bytes) % 256
            last_byte = remaining_bytes[-1]
            print(f"\nChecksum Test:")
            print(f"  Sum of first {bytes_for_halfs} bytes: {sum(calibration_data_bytes)}")
            print(f"  Sum mod 256: {calculated_checksum}")
            print(f"  Last byte of data: {last_byte} (0x{last_byte:02x})")
            if calculated_checksum == last_byte:
                print("  Checksum matches!")
            else:
                print("  Checksum does NOT match.")
        else:
             print("\nCould not perform checksum test: Unexpected number of remaining bytes.")


except binascii.Error as e:
    print(f"Error decoding hex string: {e}")