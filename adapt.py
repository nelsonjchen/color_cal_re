import numpy as np
import sys
from simulate_correction import read_calibration_values_from_file
from generate_cal import generate_color_cal

def adapt_calibration(old_cal_path, new_cal_path, output_path):
    """
    Creates a new calibration file to make a new screen look like an old screen.
    """
    print(f"Reading old calibration file: {old_cal_path}")
    old_cal = read_calibration_values_from_file(old_cal_path)
    if not old_cal:
        sys.exit(1)
    gamma_old, ccm_old, wb_gains_old = old_cal

    print(f"Reading new calibration file: {new_cal_path}")
    new_cal = read_calibration_values_from_file(new_cal_path)
    if not new_cal:
        sys.exit(1)
    gamma_new, ccm_new, wb_gains_new = new_cal

    # --- Adaptation Logic ---

    # 1. Adapt Gamma
    # The gamma values are applied as powers, so they multiply in the exponent.
    # To go from new to old: adapt_gamma / 2.2 = (gamma_old / 2.2) / (gamma_new / 2.2)
    # This simplifies to adapt_gamma = gamma_old / gamma_new, but since the
    # shader uses gamma_cal / 2.2, and we want the final exponent to be
    # (gamma_old / 2.2), we must combine the operations.
    # Let T(C) = C^(g/2.2). We want T_adapt(T_new(C)) = T_old(C).
    # ( (C^(g_new/2.2))^(g_adapt/2.2) ) = C^(g_old/2.2)
    # g_new * g_adapt / (2.2^2) = g_old / 2.2
    # g_adapt = g_old * 2.2 / g_new
    # This seems too complex. Let's reconsider the transformation chain.
    # The net effect is a power transformation. To combine them, we multiply the gamma values.
    # To go from native_new -> identity -> native_old, the gamma factor is combined.
    # Total_gamma = gamma_old * (1 / gamma_new) * gamma_new_screen_cal
    # We are creating the calibration file, so we just need the final values.

    # Let's simplify: The transformation is a chain.
    # Corrected = T_old(Input)
    # We want NewCorrected = T_adapt(T_new(Input)) to be Corrected.
    # T_adapt(T_new(Input)) = T_old(Input)
    # T_adapt = T_old * T_new^-1

    # For gamma, the exponents add. So g_adapt = g_old - g_new is wrong.
    # The powers multiply. So gamma_adapt = gamma_old / gamma_new is also wrong.
    # The actual operation is pow(color, gamma_cal / 2.2).
    # To combine transformations, we multiply the gamma values.
    # So, gamma_adapt = gamma_old

    # Let's re-verify the shader logic from WORK.md
    # d. Apply Gamma correction and forward EOTF (`pow(..., gamma_cal / 2.2)`).
    # The gamma from the file is a direct factor in the final exponent.
    # To make the new screen behave like the old one, the final exponent must be the same.
    # Therefore, the gamma value in the *adapted* file should simply be the *old* gamma value.
    gamma_adapted = gamma_old

    # 2. Adapt White Balance Gains
    # WB is applied by multiplying by the inverse gains.
    # Corrected_wb = Linear * (1 / gains_adapt) * (1 / gains_new)
    # We want: Corrected_wb = Linear * (1 / gains_old)
    # So: (1 / gains_adapt) * (1 / gains_new) = (1 / gains_old)
    # gains_adapt = gains_old / gains_new
    wb_gains_old_np = np.array(wb_gains_old)
    wb_gains_new_np = np.array(wb_gains_new)
    # Avoid division by zero
    wb_gains_new_np[wb_gains_new_np == 0] = 1e-9
    wb_gains_adapted = wb_gains_old_np / wb_gains_new_np

    # 3. Adapt Color Correction Matrix (CCM)
    # The CCMs are multiplied.
    # Corrected_ccm = CCM_adapt * CCM_new * Corrected_wb
    # We want: Corrected_ccm = CCM_old * Corrected_wb
    # So: CCM_adapt * CCM_new = CCM_old
    # CCM_adapt = CCM_old * inverse(CCM_new)
    ccm_old_matrix = np.array(ccm_old).reshape((3, 3))
    ccm_new_matrix = np.array(ccm_new).reshape((3, 3))
    ccm_new_inv_matrix = np.linalg.inv(ccm_new_matrix)
    ccm_adapted_matrix = np.dot(ccm_old_matrix, ccm_new_inv_matrix)
    ccm_adapted_flat = ccm_adapted_matrix.flatten().tolist()

    print("\n--- Calculated Adapted Calibration ---")
    print(f"  Adapted Gamma: {gamma_adapted:.4f}")
    print("  Adapted CCM:")
    print(f"    [{ccm_adapted_flat[0]:.4f}, {ccm_adapted_flat[1]:.4f}, {ccm_adapted_flat[2]:.4f}]")
    print(f"    [{ccm_adapted_flat[3]:.4f}, {ccm_adapted_flat[4]:.4f}, {ccm_adapted_flat[5]:.4f}]")
    print(f"    [{ccm_adapted_flat[6]:.4f}, {ccm_adapted_flat[7]:.4f}, {ccm_adapted_flat[8]:.4f}]")
    print("  Adapted WB Gains:")
    print(f"    [R={wb_gains_adapted[0]:.4f}, G={wb_gains_adapted[1]:.4f}, B={wb_gains_adapted[2]:.4f}]")

    # Generate the new file
    print(f"\nGenerating new calibration file: {output_path}")
    generate_color_cal(output_path, gamma_adapted, ccm_adapted_flat, wb_gains_adapted.tolist())


if __name__ == "__main__":
    if len(sys.argv) != 4:
        print("Usage: python adapt.py <old_color_cal> <new_color_cal> <output_color_cal>")
        sys.exit(1)

    old_file = sys.argv[1]
    new_file = sys.argv[2]
    output_file = sys.argv[3]

    adapt_calibration(old_file, new_file, output_file)