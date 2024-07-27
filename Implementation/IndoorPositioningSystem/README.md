# Overview

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

## Installation

To install the Main GUI application either use the [install.sh](/Implementation/install.sh) to automatically install all the requirement dependencies, or follow these steps:

1. **Install the required dependencies:**
   - Create a temporary folder where all dependencies will be installed:
      ```sh
      mkdir -p libs
      cd libs
      ```
   - Install basic dependencies:
      ```sh
      sudo apt-get update
      sudo apt-get install -y build-essential cmake g++ wget unzip git libeigen3-dev \
         pkg-config libgtk-3-dev \
         libavcodec-dev libavformat-dev libswscale-dev libv4l-dev \
         libxvidcore-dev libx264-dev libjpeg-dev libpng-dev libtiff-dev \
         gfortran openexr libatlas-base-dev python3-dev python3-numpy \
         libtbb2 libtbb-dev libxcb-xinerama0 libxcb-cursor0
      ```
   - **Install Qt6 Framework:**
      ```sh
      wget https://download.qt.io/official_releases/online_installers/qt-unified-linux-x64-online.run
      sudo chmod +x qt-unified-linux-x64-online.run
      sudo ./qt-unified-linux-x64-online.run --root ./Qt --accept-licenses --default-answer --confirm-command install qt6.7.2-full # assuming that the folder "libs" is the current folder
      sudo mkdir -p /opt/Qt
      sudo mv Qt/* /opt/Qt # make available everywhere
      export CMAKE_PREFIX_PATH=/opt/Qt/6.7.2/gcc_64/lib/cmake:$CMAKE_PREFIX_PATH # set environment variables
      ```

   - **Install XGBoost:**
      ```sh
      git clone --recursive https://github.com/dmlc/xgboost
      cd xgboost
      mkdir build && cd build
      cmake ..
      cmake --build .
      cd ../..
      sudo mkdir -p /opt/xgboost
      sudo mv xgboost/* /opt/xgboost # make available everywhere
      export XGBOOST_INCLUDE_PATH=/opt/xgboost/include # set environment variables
      export XGBOOST_LIB_PATH=/opt/xgboost/lib
      ```

   - **Install OpenCV:**
      ```sh
      wget -O opencv.zip https://github.com/opencv/opencv/archive/4.x.zip
      wget -O opencv_contrib.zip https://github.com/opencv/opencv_contrib/archive/4.x.zip
      unzip opencv.zip
      unzip opencv_contrib.zip
      mkdir -p opencv4 && cd opencv4
      cmake -DOPENCV_EXTRA_MODULES_PATH=../opencv_contrib-4.x/modules ../opencv-4.x
      make -j4
      sudo make install
      sudo ldconfig
      cd ..
      rm -rf opencv-4.x opencv_contrib-4.x opencv.zip opencv_contrib.zip
      sudo mkdir -p /opt/opencv4
      sudo mv opencv4/* /opt/opencv4
      export OPENCV_INCLUDE_PATH=/usr/local/include/opencv4 # set environment variables
      export OPENCV_LIB_PATH=/opt/opencv4/lib
      export OpenCV_DIR=/opt/opencv4
      ```

   - **Download YoloV4 configuration files:**
      ```sh
      wget https://github.com/AlexeyAB/darknet/releases/download/darknet_yolo_v4_pre/yolov4-tiny.weights
      wget https://raw.githubusercontent.com/AlexeyAB/darknet/master/cfg/yolov4-tiny.cfg
      ```

   - **Set other environment variables**
      ```sh
      export LD_LIBRARY_PATH=$OPENCV_LIB_PATH:$XGBOOST_LIB_PATH:$LD_LIBRARY_PATH
      export CPATH=$OPENCV_INCLUDE_PATH:$XGBOOST_INCLUDE_PATH:$CPATH
      export LIBRARY_PATH=$OPENCV_LIB_PATH:$XGBOOST_LIB_PATH:$LIBRARY_PATH
      ```
   - **Make environment variables permanent**
      - To make all the above environment variables permanent:
         - write all exports into the ~/.bashrc 
         - run `source ~/.bashrc`

4. **Build and run the application:**
```sh
    # Assuming we are in IndoorPositioningSystem/ folder
    mkdir build && cd build
    cmake ..
    make
    # Run the application
    ./IndoorPositioningSystem
   ```