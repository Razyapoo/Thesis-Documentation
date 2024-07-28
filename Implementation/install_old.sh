#!/bin/bash

# Create directories and set path variables
mkdir -p libs
cd libs
PATH_PROJECT=$PWD

# Install Qt6 Framework at the beginning to check credentials
echo "Installing Qt6 Framework..."
sudo wget https://download.qt.io/official_releases/online_installers/qt-unified-linux-x64-online.run
sudo chmod +x qt-unified-linux-x64-online.run


# Create an expect script to handle the installation process
cat << EOF > qt_installer_expect.sh
#!/usr/bin/expect -f
set timeout -1

log_file qt_installer.log

spawn sudo ./qt-unified-linux-x64-online.run --root $PATH_PROJECT/Qt --accept-licenses --default-answer --confirm-command install qt6.7.2-full

expect {
    "Login" {
        send_user "Prompting for login...\n"
        exp_continue
    }
    "Password" {
        send_user "Prompting for password...\n"
        exp_continue
    }
    "Error" {
        send_user "Login failed. Please check your username and password.\n"
        exit 1
    }
    "Welcome" {
        send_user "Login successful.\n"
    }
}

expect "Welcome"
send "\r"
expect "Select Components"
send " \r"
expect "Select Configuration"
send " \r"
expect "Installation Finished"
send "\r"
expect eof
EOF

chmod +x qt_installer_expect.sh
sudo ./qt_installer_expect.sh
QT_INSTALL_PATH=/opt/Qt
sudo mkdir -p $QT_INSTALL_PATH
sudo mv $PATH_PROJECT/Qt/* $QT_INSTALL_PATH
echo "Qt was installed to $QT_INSTALL_PATH"

# Remove the expect script
rm qt_installer_expect.sh
rm qt-unified-linux-x64-online.run

# Update and install basic dependencies
sudo apt-get update
sudo apt-get install -y build-essential cmake g++ wget unzip git libeigen3-dev \
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
XGBOOST_INSTALL_PATH=/opt/xgboost
sudo mkdir -p $XGBOOST_INSTALL_PATH
sudo mv $PATH_PROJECT/xgboost/* $XGBOOST_INSTALL_PATH
sudo ln -s /opt/xgboost/lib/libxgboost.so /opt/xgboost/lib/libxgboost.so.0
echo "XGBoost was installed to $XGBOOST_INSTALL_PATH"

# Install OpenCV
echo "Installing OpenCV..."
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
OPENCV_INSTALL_PATH=/opt/opencv4
sudo mkdir -p $OPENCV_INSTALL_PATH
sudo mv $PATH_PROJECT/opencv4/* $OPENCV_INSTALL_PATH
echo "OpenCV was installed to $OPENCV_INSTALL_PATH"

# Download YoloV4 configuration files
echo "Downloading YoloV4 configuration files..."
mkdir weights && cd weights
wget https://github.com/AlexeyAB/darknet/releases/download/darknet_yolo_v4_pre/yolov4-tiny.weights
wget https://raw.githubusercontent.com/AlexeyAB/darknet/master/cfg/yolov4-tiny.cfg
cd ..

# Set environment variables in shell configuration

{
  echo "# Qt"
  echo "export CMAKE_PREFIX_PATH=$QT_INSTALL_PATH/6.7.2/gcc_64/lib/cmake:\$CMAKE_PREFIX_PATH"
  echo "# OpenCV"
  echo "export OPENCV_INCLUDE_PATH=/usr/local/include/opencv4"
  echo "export OPENCV_LIB_PATH=$OPENCV_INSTALL_PATH/lib"
  echo "export OpenCV_DIR=$OPENCV_INSTALL_PATH"
  echo "# XGBoost"
  echo "export XGBOOST_INCLUDE_PATH=$XGBOOST_INSTALL_PATH/include"
  echo "export XGBOOST_LIB_PATH=$XGBOOST_INSTALL_PATH/lib"
  echo "# Library Paths"
  echo "export LD_LIBRARY_PATH=\$OPENCV_LIB_PATH:\$XGBOOST_LIB_PATH:\$LD_LIBRARY_PATH"
  echo "export CPATH=\$OPENCV_INCLUDE_PATH:\$XGBOOST_INCLUDE_PATH:\$CPATH"
  echo "export LIBRARY_PATH=\$OPENCV_LIB_PATH:\$XGBOOST_LIB_PATH:\$LIBRARY_PATH"
} >> $HOME/.bashrc

source $HOME/.bashrc

# Clean up temporary folders
rm -rf $PATH_PROJECT/xgboost/build
rm -rf $PATH_PROJECT/opencv-4.x
rm -rf $PATH_PROJECT/opencv_contrib-4.x

echo "Installation completed successfully!"
