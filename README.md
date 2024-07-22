# Smart extensions to regular cameras in the industrial environment

## Author
**Name:** Oskar Razyapov\
**Email:** oskarrazyapov@gmail.com  

## Abstract
> purpose of the project and its overview 


**Keywords:** Repeatable Experiments, CCTV Cameras, Localization, Ultra-Wide band, Machine learning

## Institute
**Institute Name:** Charles University\
**Department:** Department of Software Engineering

## Documentation

For detailed documentation, including the installation process and application usage, please refer to our [Wiki]().
  
## Workflow of the system

A detailed workflow how to use the system. More detailed workflow of each part is detailed in the decription of their corresponding folders.

### Working with video and UWB 
- Video and UWB data are recorded using the [Server](./Server/).
    - The server [collects](./Implementation/Server/VideoManager.h) video data and [communicates](./Implementation/Server/Server.h) with [ESP32 UWB devices](./ESP32%20UWB/).
    - After the data is recorded, they should be formatted for opening in GUI, as described in [Recorded Experiments](../Recorded%20Experiments/).
- After correction, the recorded data should be opened in [Indoor Positioning System (GUI)](./Implementation/IndoorPositioningSystem/).

### Camera calibration for Optical method
- The camera calibration is performed using [Calibrator](./Implementation/Camera%20Intrinsic%20Calibration%20(Optical)/Calibrator/).

### Pixel-to-Real model training
- The model is trained using [`train_PixeltoReal_model.py`](./Implementation/PixelToReal/train_PixeltoReal_model.py)



## Project structure
```
.
├── Archive                                      # Contains archived documents and papers
│   ├── Documentation                            # Documentation related to the project
│   │   ├── Images for wiki                      # Images for wiki 
│   │   ├── Main Documentation                   # Thesis
│   │   ├── Technical Documentation              # Detailed technical documentation
│   │   └── User documentation                   # User guides and manuals
│   ├── Journal                                  # Notes collected during experiments and development of the project
│   └── Papers                                   # Research papers and articles (Motivation for the project)
├── Data for Indoor Positioning System (GUI)     # Data files prepared to open in the IPS (GUI) application
│   ├── Ground truth data                        # Ground truth distances and coordinates for experiments (used for correction of UWB measurements)
│   │   ├── Experiment 109                       # Ground truth data for Experiment 109
│   │   ├── Experiment 113                       # Ground truth data for Experiment 113
│   │   ├── Experiment 118                       # Ground truth data for Experiment 118
│   │   └── Experiment 124                       # Ground truth data for Experiment 124
│   ├── Test - Experiment 113                    # Test data for PixelToReal model from Experiment 113
│   ├── Test - Experiment 118                    # Test data for PixelToReal model from Experiment 118
│   ├── Test - Experiment 124                    # Test data for PixelToReal model from Experiment 124
│   └── Train - Experiment 109                   # Train data for PixelToReal model from Experiment 124
├── Implementation                               # Source code files
│   ├── ESP32 UWB                                # Firmware for ESP32 UWB devices
│   │   ├── anchorArduino                        # Firmware for Anchor
│   │   └── tagArduino                           # Firmware for Tag
│   ├── IndoorPositioningSystem                  # Main GUI
│   ├── Camera Intrinsic Calibration (Optical)   # Intrinsic camera calibration
│   │   └── Calibrator                           # Source code for calibration 
│   ├── PixelToReal                              # Source code and data for PixelToReal training
│   └── Server                                   # Centralized server for recording UWB and video data
├── PixelToReal, Optical and UWB evaluation      # Evaluation data and results
│   ├── Data for evaluation                      # Data prepared for evaluating the system (export from GUI)
│   │   ├── For Experiment 109                   # Evaluation data for Experiment 109
│   │   ├── For Experiment 113                   # Evaluation data for Experiment 113
│   │   ├── For Experiment 118                   # Evaluation data for Experiment 118
│   │   └── For Experiment 124                   # Evaluation data for Experiment 124
│   └── Relusts of evaluation (Plots, Statistics) # Evaluation results, including plots and statistics
│       ├── Plots                                # Plot files for evaluation results
│       └── Statistics                           # Statistical analysis of evaluation results
└── Recorded Experiments                         # Raw data and recordings from experiments (Not prepared to open in GUI)
```
