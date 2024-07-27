# Camera Intrinsic Calibration

Contains the implementation of the Asymmetric Double-Sided Two-Way Ranging protocol.

# How to upload the firmware

The code for both anchors and tags is uploaded in the same way:

1. Connect the board to the laptop


## Structure
```
.
├── anchorArduino               # Firmware for Anchor
│   ├── anchorArduino.ino
│   └── arduino.h
├── README.md
└── tagArduino                  # Firmware for Tag
    ├── arduino.h
    └── tagArduino.ino
```