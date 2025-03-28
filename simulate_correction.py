import math
import numpy as np
import struct
import binascii
import sys
import os

def read_calibration_values_from_file(file_path):
    """Reads 13 half-floats from a color_cal binary file."""
    if not os.path.exists(file_path):
        print(f"Error: File not found at {file_path}")
        return None

    try:
        with open(file_path, 'rb') as f:
            binary_data = f.read(26) # Read only the first 26 bytes
    except IOError as e:
        print(f"Error reading file: {e}")
        return None

    if len(binary_data) < 26:
        print(f"Error: File too short ({len(binary_data)} bytes), expected 26.")
        return None

    try:
        # '<' for little-endian, '13e' for 13 half-precision floats
        half_floats = struct.unpack('<13e', binary_data)
        gamma = half_floats[0]
        ccm = list(half_floats[1:10]) # 9 values
        wb_gains = list(half_floats[10:13]) # 3 values
        return gamma, ccm, wb_gains
    except struct.error as e:
        print(f"Could not unpack as half-floats: {e}")
        return None
    except Exception as e:
        print(f"An error occurred during half-float unpacking: {e}")
        return None


def apply_color_correction_simulation(rgb_in, gamma_cal, ccm_values, wb_gains):
    """
    Simulates the color correction shader logic in Python.
    rgb_in: list/tuple/array of [r, g, b] floats (0.0 to 1.0)
    gamma_cal: float gamma value from color_cal
    ccm_values: list of 9 float CCM values from color_cal (row-major)
    wb_gains: list of 3 float WB gains [R, G, B] from color_cal
    """

    # Ensure input is numpy array for vectorized operations
    rgb = np.array(rgb_in, dtype=float)

    # --- Clamp input to avoid issues with pow ---
    rgb = np.clip(rgb, 0.0, 1.0)

    # 1. Apply inverse EOTF (Linearize from approx. sRGB gamma 2.2)
    # Avoid pow(0, x) issues if component is 0
    rgb = np.power(rgb + 1e-9, 2.2) # Add small epsilon

    # 2. Calculate and apply inverse WB gains
    # Avoid division by zero if gains are zero
    inv_gains = np.array([1.0 / g if g != 0 else 0 for g in wb_gains])
    rgb *= inv_gains

    # 3. Apply CCM
    # Reshape CCM values into a 3x3 matrix (row-major)
    ccm_matrix = np.array(ccm_values).reshape((3, 3))
    # Perform matrix multiplication: Corrected_RGB = CCM * WB_Corrected_RGB
    rgb = np.dot(ccm_matrix, rgb)

    # Clamp negative values resulting from CCM
    rgb = np.maximum(rgb, 0.0)

    # 4. Apply Gamma correction and forward EOTF
    # Avoid division by zero if 2.2 is somehow zero
    gamma_factor = gamma_cal / 2.2 if 2.2 != 0 else 1.0
    # Avoid issues if gamma_factor is zero or negative, or if rgb components are zero
    if gamma_factor > 0:
         rgb = np.power(rgb + 1e-9, gamma_factor) # Add small epsilon
    else:
         # If gamma factor is invalid, maybe return linear rgb clamped?
         rgb = np.clip(rgb, 0.0, 1.0) # Return linear clamped value as fallback

    # Clamp final result to [0.0, 1.0]
    rgb = np.clip(rgb, 0.0, 1.0)

    return rgb.tolist()

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python simulate_correction.py <path_to_color_cal_file>")
        sys.exit(1)

    cal_file_path = sys.argv[1]
    calibration_data = read_calibration_values_from_file(cal_file_path)

    if calibration_data:
        gamma, ccm, wb = calibration_data
        print(f"Read calibration data from: {cal_file_path}")
        print(f"  Gamma: {gamma:.4f}")
        print(f"  CCM: {ccm}")
        print(f"  WB Gains: {wb}")

        # --- Example Simulations ---
        print("\n--- Simulation Examples ---")

        # Test with pure red
        input_color_red = [1.0, 0.0, 0.0]
        corrected_red = apply_color_correction_simulation(input_color_red, gamma, ccm, wb)
        print(f"Input Red: {input_color_red}")
        print(f"Corrected Red: [{corrected_red[0]:.4f}, {corrected_red[1]:.4f}, {corrected_red[2]:.4f}]")

        # Test with pure green
        input_color_green = [0.0, 1.0, 0.0]
        corrected_green = apply_color_correction_simulation(input_color_green, gamma, ccm, wb)
        print(f"\nInput Green: {input_color_green}")
        print(f"Corrected Green: [{corrected_green[0]:.4f}, {corrected_green[1]:.4f}, {corrected_green[2]:.4f}]")

        # Test with pure blue
        input_color_blue = [0.0, 0.0, 1.0]
        corrected_blue = apply_color_correction_simulation(input_color_blue, gamma, ccm, wb)
        print(f"\nInput Blue: {input_color_blue}")
        print(f"Corrected Blue: [{corrected_blue[0]:.4f}, {corrected_blue[1]:.4f}, {corrected_blue[2]:.4f}]")

        # Test with white
        input_color_white = [1.0, 1.0, 1.0]
        corrected_white = apply_color_correction_simulation(input_color_white, gamma, ccm, wb)
        print(f"\nInput White: {input_color_white}")
        print(f"Corrected White: [{corrected_white[0]:.4f}, {corrected_white[1]:.4f}, {corrected_white[2]:.4f}]")

        # Test with gray (0.5)
        input_color_gray = [0.5, 0.5, 0.5]
        corrected_gray = apply_color_correction_simulation(input_color_gray, gamma, ccm, wb)
        print(f"\nInput Gray (0.5): {input_color_gray}")
        print(f"Corrected Gray (0.5): [{corrected_gray[0]:.4f}, {corrected_gray[1]:.4f}, {corrected_gray[2]:.4f}]")

    else:
        print(f"Failed to read or parse calibration data from {cal_file_path}")
        sys.exit(1)