#!/bin/bash

# Update and install basic dependencies
mkdir ~/libs
cd ~/libs

PATH_PROJECT=$PWD
sudo apt-get update
sudo apt-get install -y build-essential cmake g++ wget unzip git libeigen3-dev \
    pkg-config libgtk-3-dev \
    libavcodec-dev libavformat-dev libswscale-dev libv4l-dev \
    libxvidcore-dev libx264-dev libjpeg-dev libpng-dev libtiff-dev \
    gfortran openexr libatlas-base-dev python3-dev python3-numpy \
    libtbb2 libtbb-dev libdc1394-22-dev

# Install XGBoost
echo "Installing XGBoost..."
git clone https://github.com/dmlc/xgboost.git
cd xgboost
mkdir build && cd build
cmake ..
cmake --build .
echo "Need to move xgboost to /usr/local/... to make it available globally..."
cd ../..

# Install OpenCV
# echo "Installing OpenCV..."
# wget -O opencv.zip https://github.com/opencv/opencv/archive/4.x.zip
# wget -O opencv_contrib.zip https://github.com/opencv/opencv_contrib/archive/4.x.zip
# unzip opencv.zip
# unzip opencv_contrib.zip
# mkdir -p build && cd build
# cmake -DOPENCV_EXTRA_MODULES_PATH=../opencv_contrib-4.x/modules ../opencv-4.x
# cmake --build .
# cd ..


git clone https://github.com/opencv/opencv.git
git clone https://github.com/opencv/opencv_contrib.git

cd /opencv
mkdir build
cd build

cmake -D CMAKE_BUILD_TYPE=Release \
      -D CMAKE_INSTALL_PREFIX=$PATH_PROJECT/opencv4 \
      -D OPENCV_EXTRA_MODULES_PATH=../opencv_contrib/modules \
      -D ENABLE_PRECOMPILED_HEADERS=OFF ..

make -j4

sudo make install
sudo ldconfig
cd ../..
rm -rf opencv
rm -rf opencv_contrib

# Install Qt6 Framework
echo "Installing Qt6 Framework..."
# sudo apt-get install -y qt6-base-dev qt6-tools-dev
sudo wget https://download.qt.io/official_releases/online_installers/qt-unified-linux-x64-online.run
sudo chmod +x qt-unified-linux-x64-online.run
./qt-unified-linux-x64-online.run --root $PATH_PROJECT/Qt --accept-licenses --default-answer --confirm-command install qt6.7.2-full

# Download YoloV4 configuration files
echo "Downloading YoloV4 configuration files..."
wget https://github.com/AlexeyAB/darknet/releases/download/darknet_yolo_v4_pre/yolov4-tiny.weights
wget https://raw.githubusercontent.com/AlexeyAB/darknet/master/cfg/yolov4-tiny.cfg

# OpenCV
# export OPENCV_INCLUDE_PATH=/usr/local/libs/opencv/usr/local/include/opencv4
# export OPENCV_LIB_PATH=/usr/local/libs/opencv/usr/local/lib

# XGBoost
# export XGBOOST_INCLUDE_PATH=/usr/local/libs/xgboost/include
# export XGBOOST_LIB_PATH=/usr/local/libs/xgboost/lib

# Add the library paths to LD_LIBRARY_PATH
# export LD_LIBRARY_PATH=$OPENCV_LIB_PATH:$XGBOOST_LIB_PATH:$LD_LIBRARY_PATH

# Add the include paths to CPATH
# export CPATH=$OPENCV_INCLUDE_PATH:$XGBOOST_INCLUDE_PATH:$CPATH

# Add the library paths to LIBRARY_PATH
# export LIBRARY_PATH=$OPENCV_LIB_PATH:$XGBOOST_LIB_PATH:$LIBRARY_PATH

#export OpenCV_DIR=/home/home/libs/build

#export CMAKE_PREFIX_PATH=/opt/Qt/6.7.2/gcc_64/lib/cmake:OpenCV_DIR:$CMAKE_PREFIX_PATH

echo "Installation completed successfully!"