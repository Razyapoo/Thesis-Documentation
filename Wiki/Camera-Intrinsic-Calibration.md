## Overview

Calibration is performed to determine the following intrinsic parameters of a camera:
  - Focal length
  - Optical center
  - Distortion coefficients

This process is essential for building the Optical method, as it provides camera instrinsic parameters the are used to calculate people's coordinates and undistort the image for better people detection.

For camera calibration we use Chessboard pattern with known dimensions and coordinates of corners. The output calibration parameters are calculated by matching the estimated coordinates of the chessboard corners with the known corners.

Chessboard pattern can be found in the official OpenCV [repository](https://github.com/opencv/opencv/blob/4.x/doc/pattern.png) on the GitHub.

**Output**

`intrinsic_parameters_to_be_used_in_GUI.xml` - prepared intrinsic parameters to use in Indoor Positioning System (GUI)

## Installation

Installation process is detailed in the [folder](/Implementation/Camera%20Intrinsic%20Calibration%20(Optical)/) containing this application on GitHub.

## Usage

### Calibration initialization 

```sh
# Assuming that we are in the build folder
./Calibration
```

> [!Warning]
> This will enter the initial (IDLE) stage, which is intended for preparation.


### Management of calibration process

> [!Note]
> At the beginning, we collect the images that will be used for camera calibration

The management of the calibration can be performed by using keyboard keys as follows:

- c: skip the image and do not save it for calibration
- s: save the image to use it for calibration
- n: continue to the next step
- x: exit the calibration

> [!Warning]
> If you are in the IDLE stage and want to start detecting the chessboard corners, please press "n".

### Corners detection

In this stage, if the Chessboard if successfully detected, it will show the detection in the image window (cv::imshow).

You can either save the image by pressing "s" or skip (do not save) the image by pressing "c".
  - Rotate and tilt the pattern in different dimensions to make diverse collection.
  - It is recommended to move the pattern closer and further away from the camera. 
    - However, the pattern should take up at least 25 percent of the space in the image.
    - Otherwise, detection will be bad, and might affect the result of the calibration.

Once you have collected enough samples, you can press "n" to continue to the next step of calibration process.
  - Recommended number of collected samples is around 15 different images.

An example of the board detection is shown below:

![Camera calibration](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/chessboard_detection.png)

### Intrinsic Calibration

The next step is the calibration itself, which is performed on the images (detections) collected during the previous stage.

Once the calibration is successfully finished, it will show the results in the terminal and save them to the output file in the `build/` folder.


