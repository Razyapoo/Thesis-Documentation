## Overview

This is a Server, which simulates real CCTV camera system and allows to collect video and UWB data. 

**Responsibilities:**
- *Video processing*: handles video recording
- *Server for UWB*: communicates with UWB tags and collects distance measurements from them
- *Activity watchdog*: monitors tag responses and detects if communication between anchor and tag is blocked
- It is podsible to Pause / Continue / Stop recording of data streams

Each work is performed simultaneously in a dedicated thread for better optimization

**!!! IMPORTANT !!!**
- These data are not yet synchornized; synchronization is performed later in Indoor Positioning System (GUI)

**Output:**
- Separatelly: 
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
```
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
# cd ../..
# rm -rf opencv
# rm -rf opencv_contrib
```

2. **Compile the Server:**

```
mkdir build && cd build
cmake ..
make
```

## Usage

### Server initialization 

1. **Run the Server:**

```
./Server # assuming we are in the build folder
```

- This will automatically start the UWB server to listen for incoming requests from UWB tags.
- It will also start video recording

### Pause / continue / stop recording

The management of the recording can be performed by usimg keyboard as follows:

- 


2. 