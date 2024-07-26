# Implementation

This is a Main GUI, which allows to:
- Play / Pause / Seek synchronized Video and estimated data (UWB, Pixel-to-Real, Optical)
- Data Analysis
- Data visualization (distances, coordinates)
- Data export

**Requarnments**:
- Linux operating system
    - tested on Ubuntu 22.04 LTS
    - Monitor resolution: 1920x1080 or more.
- [eXtream Gradient Boost](https://github.com/dmlc/xgboost)
- [OpenCV v4.7.0](https://opencv.org/)
- [Qt6 Framework v6.6.1](https://www.qt.io/product/framework)
- [YoloV4](https://github.com/AlexeyAB/darknet)

Installation process of the requirements is detailed in [Wiki]()

**Expected input files in GUI**:

In the toolbar when GUI is opened:
- "File->Open video and UWB data":
    - Select one of the experiments available in `[Data for Indoor Positioning System (GUI)/](/Data%20for%20Indoor%20Positioning%20System%20(GUI)/)`
    - The following files should be opened as a signle package:
        - `video.avi` or `video.mp4`
        - `video_timestamps.txt`
        - `UWB_timestamps.txt`

- "File->Load human detection model weights":
    - Load [yolov4-tiny.weights](https://github.com/AlexeyAB/darknet/releases/download/darknet_yolo_v4_pre/yolov4-tiny.weights) and [yolov4-tiny.cfg](https://raw.githubusercontent.com/AlexeyAB/darknet/master/cfg/yolov4-tiny.cfg) as a single package

- "File->Load pixel to real model params":
    - Load model from `[PixelToReal/](/Implementation/PixelToReal/)`:
        - `PixeltoReal_model_to_be_used_in_GUI.json`

- "File->Load Camera intrinsic params":
    - Load camera parameters from `[Camera Intrinsic Calibration (Optical)/](/Implementation/Camera%20Intrinsic%20Calibration%20(Optical)/)`:
        - `intrinsic_parameters_to_be_used_in_GUI.xml`
