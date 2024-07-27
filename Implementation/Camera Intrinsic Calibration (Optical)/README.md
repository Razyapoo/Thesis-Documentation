# Camera Intrinsic Calibration

Contains the implementation of the calibrator for performing camera intrinsic calibration.

The calibrator determines the intrinsic parameters of a camera:
  - Focal length
  - Optical center
  - Distortion coefficients

These parameters are used to calculate people coordinates using Optical method and undistort the image for better people detection.

**Output**

  `intrinsic_parameters_to_be_used_in_GUI.xml` - prepared intrinsic parameters to use in Indoor Positioning System (GUI). XML format!!!

## Requirements

- **Linux operating system**
  - Tested on Ubuntu 22.04 LTS
- **OpenCV v4.7.0**

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

    - **Set other environment variables**
        ```sh
        export LD_LIBRARY_PATH=$OPENCV_LIB_PATH:$LD_LIBRARY_PATH
        export CPATH=$OPENCV_INCLUDE_PATH:$CPATH
        export LIBRARY_PATH=$OPENCV_LIB_PATH:$LIBRARY_PATH
        ```
    - **Make environment variables permanent**
        - To make all the above environment variables permanent:
          - write all exports into the ~/.bashrc 
          - run `source ~/.bashrc`

  4. **Build and run the application:**
    ```sh
      # Assuming we are in Camera Intrinsic Calibration (Optical)/ folder
      mkdir build && cd build
      cmake ..
      make
      # Run the application
      ./Calibration
    ```

## Structure of the folder
```
.
├── Calibrator                                  
│   ├── build                                   # Build folder for cmake
│   ├── Calibrator.cpp                          # Perfroms calibration
│   ├── Calibrator.h                             
│   ├── Camera.cpp                              # Provides access to the camera
│   ├── Camera.h                                
│   ├── CMakeLists.txt                          
│   └── main.cpp                                # Init Calibrator and Camera
├── intrinsic_parameters_to_be_used_in_GUI.xml  # Intrinsic Parameters ready to use in IPS (GUI)
└── README.md
```
