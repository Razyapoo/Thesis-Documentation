# Server

The Server simulates a real CCTV camera system, allowing to collect video and UWB data. 
It is podsible to Pause / Continue / Stop recording of data streams

**Responsibilities:**
- *Video recording*: handles video recording
- *(Centralized) Server for UWB*: communicates with UWB tags and collects distance measurements from them
- *Activity watchdog*: monitors tag responses and detects if the communication between an anchor and tag is blocked

Each work (responsibility) is performed simultaneously in a dedicated thread for better optimization

> [!Warning]
> The video and UWB data streams are not yet synchornized; synchronization is performed later in Indoor Positioning System (GUI)

**Output:**
  - `video.avi`: Video recording
  - `video_timestamps.txt`: Index file containing frames' timestamps
  - `UWB_timestamps.txt`: UWB measurements together with their timestamps

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
      # Assuming we are in Server/ folder
      mkdir build && cd build
      cmake ..
      make
      # Run the application
      ./Server
    ```

  - This will automatically start the UWB server, the watchdog to track activity of tags, and the video recording.

## Structure of the folder
```
.
├── build
├── Camera.cpp               # Accessing Camera 
├── Camera.h
├── CMakeLists.txt           # Building the Server
├── README.md
├── Server.cpp               # UWB Server + Activity Watchdog
├── Server.h
├── Server_Multithreaded.cpp # Main part initiating all workers
├── SharedData.h             # Communication between workers (threads)
├── VideoManager.cpp         # Recording video stream
└── VideoManager.h

```