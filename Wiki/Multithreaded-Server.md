## Overview

This is a Server which allows to collect video and UWB data. 

**Responsibilities:**
- *Video processing*: handles video recording
- *Server*: communicates with tags and collects distance measurements from them
- *Activity watchdog*: monitors tag responses and detects if communication between anchor and tag is blocked

Each work is initiated simultaneously in a dedicated thread for better optimization

**!!! IMPORTANT !!!**
- These data are not yet synchornized; synchronization is performed later in Indoor Positioning System (GUI)

**Output:**
- Separatelly: 
    - `video.avi`
    - `video_timestamps.txt`
    - `UWB_timestamps.txt`

## Requirements

- **Linux operating system**
  - Tested on Ubuntu 22.04.4 LTS
- **OpenCV v4.7.0**

## Installation

To install the Server, follow these steps:

1. **Install the required dependencies (if not yet installed):**
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

3. **Run the Server:**

```
./Server # assuming we are in the build folder
```

4. 