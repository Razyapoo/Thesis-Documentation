## Overview

The Server simulates a real CCTV camera system and allows to collect video and UWB data. 


It is podsible to Pause / Continue / Stop recording of data streams

**Responsibilities:**
- *Video processing*: handles video recording
- *Server for UWB*: communicates with UWB tags and collects distance measurements from them
- *Activity watchdog*: monitors tag responses and detects if communication between anchor and tag is blocked

Each work is performed simultaneously in a dedicated thread for better optimization

> [!Warning]
> These data are not yet synchornized; synchronization is performed later in Indoor Positioning System (GUI)

**Output:**
  - `video.avi`
    - video recording
  - `video_timestamps.txt`
    - index file for lookup in video
  - `UWB_timestamps.txt`
    - UWB measurements together with their timestamps

## Requirements

- **Linux operating system**
  - Tested on Ubuntu 22.04.4 LTS
- **OpenCV v4.7.0**

## Installation

To install the Server, follow these steps:

1. **Install the OpenCV library (if not yet installed):**

Either use [`install.sh`](../Implementation/install.sh) for automatic installation or install manually as follows:

```
# Install OpenCV
mkdir temp && cd temp # create temp folder for opencv compiling
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
rm -rf opencv-4.x
rm -rf opencv_contrib-4.x
rm opencv.zip
rm opencv_contrib.zip

export OPENCV_INCLUDE_PATH=/usr/local/include/opencv4
export OPENCV_LIB_PATH=$PATH_PROJECT/opencv4/lib
export OpenCV_DIR=$PATH_PROJECT/opencv4
export CMAKE_PREFIX_PATH=$CMAKE_PREFIX_PATH:$OpenCV_DIR
```

2. **Compile the Server:**

```
mkdir build && cd build
cmake ..
make
```

## Usage

### Server initialization 

```
./Server # assuming we are in the build folder
```

- This will automatically start the UWB server to listen for incoming requests from UWB tags and spawn a watchdog to track activity of tags.
- It will also start video recording.

### Pause / continue / stop recording

The management of the recording can be performed by using keyboard keys as follows:

- p: pause recording
- c: continue recording
- s: stop and save recording

> [!Warning]
> Once "s" is pressed, it is needed to wait untill the video will safe correctly. Once the video is saved successfully, the program will notify about it. 

### Activity watchdog

Allows to monitor tags' activity by detecting whether the communication between an anchor and a tag has been blocked

Example of blocked connection:

![IndoorPositioningSystem](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/server_not_active.png)

Example of the normal (non-blocked) connection:

![IndoorPositioningSystem](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/server_is_active.png)
