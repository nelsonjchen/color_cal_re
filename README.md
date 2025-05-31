# comma Color Calibration Reverse Engineering

comma devices have a `color_cal` file in `/persist/commma`. It is responsible for the color calibration of the display. The file is a binary file that contains the color calibration data for the display.

It is read by `weston`, which is a currently the closed source compositor in AGNOS, the operating system used by comma devices.

The format is undocumented. This repository contains a reverse engineering effort to document the format and provide tools for working with the `color_cal` file.

The goal is to understand the format of the `color_cal` file for the purpose of creating a custom color calibration file for the display in the future.

Much of this work was done by Roo Code with Gemini 2 backing it. See the rules files for the prompt. 

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

### Samples

Erich provided a sample of the `color_cal` file from his c3x. It is located in `samples/erich/color_cal`. This is from a finished c3x so there's no sticker data to correlate it to.

#### gl-renderer-src

`gl-renderer.so` has the log strings for the color calibration data with comma's modifications. This is linked by `weston`.

`gl-renderer-src/comma-modified-decompiled.c` is the decompiled with Ghidra's decompiler.

`gl-renderer-src/upstream.c` is the upstream version of the file from [weston's project](https://gitlab.freedesktop.org/wayland/weston/-/raw/master/libweston/renderer-gl/gl-renderer.c). It's unknown how closely this matches the version used in AGNOS. It's there for reference.
