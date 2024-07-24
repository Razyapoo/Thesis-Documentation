#!/bin/bash

mkdir ~/libs
cd ~/libs
PATH_PROJECT=$PWD

# Update and install basic dependencies
sudo apt-get update
sudo apt-get install -y build-essential cmake g++ wget unzip git \
    pkg-config libgtk-3-dev \
    libavcodec-dev libavformat-dev libswscale-dev libv4l-dev \
    libxvidcore-dev libx264-dev libjpeg-dev libpng-dev libtiff-dev \
    gfortran openexr libatlas-base-dev python3-dev python3-numpy \
    libtbb2 libtbb-dev libxcb-xinerama0 libxcb-cursor0

# Install XGBoost
echo "Installing XGBoost..."
git clone --recursive https://github.com/dmlc/xgboost
cd xgboost
mkdir build && cd build
cmake ..
cmake --build .
cd ../..

# Install OpenCV
wget -O opencv.zip https://github.com/opencv/opencv/archive/4.x.zip
wget -O opencv_contrib.zip https://github.com/opencv/opencv_contrib/archive/4.x.zip
unzip opencv.zip
unzip opencv_contrib.zip
mkdir -p opencv4 && cd opencv4
cmake -DOPENCV_EXTRA_MODULES_PATH=../opencv_contrib-4.x/modules ../opencv-4.x
make -j4
sudo make install
sudo ldconfig
rm -rf opencv-4.x
rm -rf opencv_contrib-4.x
rm opencv.zip
rm opencv_contrib.zip
cd ../..

# Install Qt6 Framework
echo "Installing Qt6 Framework..."
sudo wget https://download.qt.io/official_releases/online_installers/qt-unified-linux-x64-online.run
sudo chmod +x qt-unified-linux-x64-online.run
./qt-unified-linux-x64-online.run --root $PATH_PROJECT/Qt --accept-licenses --default-answer --confirm-command install qt6.7.2-full

# Download YoloV4 configuration files
echo "Downloading YoloV4 configuration files..."
wget https://github.com/AlexeyAB/darknet/releases/download/darknet_yolo_v4_pre/yolov4-tiny.weights
wget https://raw.githubusercontent.com/AlexeyAB/darknet/master/cfg/yolov4-tiny.cfg

# OpenCV
export OPENCV_INCLUDE_PATH=/usr/local/include/opencv4
export OPENCV_LIB_PATH=$PATH_PROJECT/opencv4/lib

# XGBoost
export XGBOOST_INCLUDE_PATH=$PATH_PROJECT/xgboost/include
export XGBOOST_LIB_PATH=$PATH_PROJECT/xgboost/lib

# Add the library paths to LD_LIBRARY_PATH
export LD_LIBRARY_PATH=$OPENCV_LIB_PATH:$XGBOOST_LIB_PATH:$LD_LIBRARY_PATH

# Add the include paths to CPATH
export CPATH=$OPENCV_INCLUDE_PATH:$XGBOOST_INCLUDE_PATH:$CPATH

# Add the library paths to LIBRARY_PATH
export LIBRARY_PATH=$OPENCV_LIB_PATH:$XGBOOST_LIB_PATH:$LIBRARY_PATH

# Add the OpenCV path
export OpenCV_DIR=$PATH_PROJECT/opencv4

# Add the 
export CMAKE_PREFIX_PATH=$PATH_PROJECT/Qt/6.7.2/gcc_64/lib/cmake:$OpenCV_DIR

echo "Installation completed successfully!"