## Overview

Training of the Pixel-to-Real model.

**Input:**

  - `data_to_train_model_experiment_109.txt` - export of synchronized (aligned) pairs consisting of UWB coordinates and pixel coordinates; export from Indoor Positioning System (GUI)
      - File schema:
          ```
          { Frame ID } { UWB X Coordinate } { UWB Y Coordinate } { Pixel x Coordinate } { Pixel y Coordinate } 
          ```
      - Note: Pixel means real pixel in image, not PixelToReal model

**Output**

  - `PixeltoReal_model_to_be_used_in_GUI.json` - prepared (trained) Pixel-to-Real model to use in Indoor Positioning System (GUI)

## Usage

Use python to compile the `train_PixeltoReal_model.py`:

```sh
python train_PixeltoReal_model.py
```