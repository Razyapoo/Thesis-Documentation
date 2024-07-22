#!/bin/bash

# Update and install basic dependencies
sudo apt-get update
sudo apt-get install -y build-essential cmake g++ wget unzip git


# Install XGBoost
echo "Installing XGBoost..."
git clone --recursive https://github.com/dmlc/xgboost
cd xgboost
mkdir build && cd build
cmake ..
cmake --build .
echo "Need to move xgboost to /usr/local/... to make it available globally..."
cd ../..

# Install OpenCV
echo "Installing OpenCV..."
wget -O opencv.zip https://github.com/opencv/opencv/archive/4.x.zip
wget -O opencv_contrib.zip https://github.com/opencv/opencv_contrib/archive/4.x.zip
unzip opencv.zip
unzip opencv_contrib.zip
mkdir -p build && cd build
cmake -DOPENCV_EXTRA_MODULES_PATH=../opencv_contrib-4.x/modules ../opencv-4.x
cmake --build .
cd ..

# Install Qt6 Framework
echo "Installing Qt6 Framework..."
# sudo apt-get install -y qt6-base-dev qt6-tools-dev
sudo wget https://download.qt.io/official_releases/online_installers/qt-unified-linux-x64-online.run
sudo chmod +x qt-unified-linux-x64-online.run
./qt-unified-linux-x64-online.run --root . --accept-licenses --default-answer --confirm-command install qt.qt6.670.gcc_64

# Download YoloV4 configuration files
echo "Downloading YoloV4 configuration files..."
wget https://github.com/AlexeyAB/darknet/releases/download/darknet_yolo_v4_pre/yolov4-tiny.weights
wget https://raw.githubusercontent.com/AlexeyAB/darknet/master/cfg/yolov4-tiny.cfg

# OpenCV
export OPENCV_INCLUDE_PATH=/usr/local/libs/opencv/usr/local/include/opencv4
export OPENCV_LIB_PATH=/usr/local/libs/opencv/usr/local/lib

# XGBoost
export XGBOOST_INCLUDE_PATH=/usr/local/libs/xgboost/include
export XGBOOST_LIB_PATH=/usr/local/libs/xgboost/lib

# Add the library paths to LD_LIBRARY_PATH
export LD_LIBRARY_PATH=$OPENCV_LIB_PATH:$XGBOOST_LIB_PATH:$LD_LIBRARY_PATH

# Add the include paths to CPATH
export CPATH=$OPENCV_INCLUDE_PATH:$XGBOOST_INCLUDE_PATH:$CPATH

# Add the library paths to LIBRARY_PATH
export LIBRARY_PATH=$OPENCV_LIB_PATH:$XGBOOST_LIB_PATH:$LIBRARY_PATH

echo "Installation completed successfully!"
