## Overview

Calibration is performed to determine the following intrinsic parameters of a camera:
  - Focal length
  - Optical center
  - Distortion coefficients

This process is essential for building the Optical method, as it provides camera instrinsic parameters the are used to calculate people's coordinates and undistort the image for better people detection.

For camera calibration we use Chessboard pattern with known dimensions and coordinates of corners. The output calibration parameters are calculated by matching the estimated coordinates of the chessboard corners with the known corners.

Chessboard pattern can be found in the official OpenCV [repository](https://github.com/opencv/opencv/blob/4.x/doc/pattern.png) on the GitHub.

**Output**

  `intrinsic_parameters_to_be_used_in_GUI.xml` - prepared intrinsic parameters to use in Indoor Positioning System (GUI). XML format!!!

## Installation

  Installation process is detailed in the [folder](/Implementation/Camera%20Intrinsic%20Calibration%20(Optical)/) containing this application on GitHub.

## Usage

### Calibration initialization 

  ```sh
  # Assuming that we are in the build folder
  ./Calibration [options]
  ```

  **Options**
  - `--input_camera{id}`: the linux identifier of the camera to use (*video{id}*), which can be found under the `/dev` directory (default: 2)
  - `--intrinsic_file_path`: the path where to save resulting cailbration parameters (defualt: `parameters/intrinsic_parameters.xml`)

  > [!Warning]
  > This will enter the initial (IDLE) stage, which is intended for preparation. No chessboard detection is performed yet.


### Management of calibration process

  > [!Note]
  > The entire calibration process assumes to first collect the "best" detections of chessboard and then calibrate the camera based on the collected detections. This allows to achieve as accurate as possible calibration parameters.

  The management of the calibration can be performed by using keyboard keys as follows:

  - `c`: skip the image and do not save it for calibration
  - `s`: save the image to use it for calibration
  - `n`: continue to the next step
  - `x`: exit the calibration


  If you are in the IDLE stage and want to start detecting the chessboard corners, please press "n".

### Detection of corners

  If the Chessboard is successfully detected, the detection will be shown in the image window (cv::imshow).
  - Rotate and tilt the pattern in different dimensions to make diverse collection.
    - It is recommended to move the pattern closer and further away from the camera. 
      - However, the pattern should take up at least 25 percent of the space in the image.
      - Otherwise, detection will be bad, and might affect the result of the calibration.

  You can either save the image by pressing "s" or skip (do not save) the image by pressing "c".
    
  Once you have collected enough samples, press "n" to continue to the next step of calibration process.
    - Recommended number of collected samples is around 15 different images.

  An example of the board detection is shown below:

  ![Camera calibration](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/chessboard_detection.png)

### Intrinsic Calibration

  The next step is the calibration itself. It is performed on the images (detections) collected during the previous stage.

  Once the calibration is successfully finished, it will show the results in the terminal and save them to the output `build/parameters/intrinsic_parameters.xml` XML file.


