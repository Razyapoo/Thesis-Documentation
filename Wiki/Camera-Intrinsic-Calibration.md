## Overview

Calibration is performed to determine the following intrinsic parameters of a camera:
  - Focal length
  - Optical center
  - Distortion coefficients

These parameters are used to calculate people coordinates using Optical method and undistort the image for better people detection.

**Output**

`intrinsic_parameters_to_be_used_in_GUI.xml` - prepared intrinsic parameters to use in Indoor Positioning System (GUI)

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