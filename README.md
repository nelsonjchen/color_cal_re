# comma Color Calibration Reverse Engineering

comma devices have a `color_cal` file in `/persist/commma`. It is responsible for the color calibration of the display. The file is a binary file that contains the color calibration data for the display.

It is read by `weston`, which is a currently the closed source compositor in AGNOS, the operating system used by comma devices.

The format is undocumented. This repository contains a reverse engineering effort to document the format and provide tools for working with the `color_cal` file.

## Notes

Repair displays directly from [comma's shop](https://comma.ai/shop) come with this sticker.

![Image](https://github.com/user-attachments/assets/74c5acc8-50a3-4e76-96f9-dbd0521a09c0)

It has a QR Code which appears to have the contents of the `color_cal` file in hexadecimal format.

4b3d9e388b29b1184333273a9f2645320032c63b003cf53d92430000000024

The following text is on the sticker as well, next to the QR Code:

```
Gamma: 1.32
CCM:
0.58 0.04 0.
0.23 0.77 0.03
0.2 0.19 0.97
WB gains:
1.00 1.49 3.78

2025-03-10 09:24:40
```

