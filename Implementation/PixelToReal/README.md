# Pixel-to-Real model training

Contains the code for training the Pixel-to-Real model.

- `data_to_train_model_experiment_109.txt` - export of synchronized (aligned) pairs consisting of UWB coordinates and pixel coordinates; export from Indoor Positioning System (GUI)
    - File schema:
        ```
        { Frame ID } { UWB X Coordinate } { UWB Y Coordinate } { Pixel x Coordinate } { Pixel y Coordinate } 
        ```
    - Note: Pixel means real pixel in image, not PixelToReal model

- `PixeltoReal_model_to_be_used_in_GUI.json` - prepared (trained) Pixel-to-Real model to use in Indoor Positioning System (GUI)

**Requirements**:
- eXtream Gradient Boost
- python 3.8 or newer

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
      
      - **Install XGBoost:**
         ```sh
         git clone --recursive https://github.com/dmlc/xgboost
         cd xgboost
         mkdir build && cd build
         cmake ..
         cmake --build .
         cd ../..
         sudo mkdir -p /opt/xgboost
         sudo mv xgboost/* /opt/xgboost # make available everywhere
         export XGBOOST_INCLUDE_PATH=/opt/xgboost/include # set environment variables
         export XGBOOST_LIB_PATH=/opt/xgboost/lib
         ```

      - **Set other environment variables**
         ```sh
         export LD_LIBRARY_PATH=$XGBOOST_LIB_PATH:$LD_LIBRARY_PATH
         export CPATH=$XGBOOST_INCLUDE_PATH:$CPATH
         export LIBRARY_PATH=$XGBOOST_LIB_PATH:$LIBRARY_PATH
         ```

      - **Make environment variables permanent**
         - To make all the above environment variables permanent:
            - write all exports into the ~/.bashrc 
            - run `source ~/.bashrc`

   4. **Build and run the application:**
      
      Use python to compile the `train_PixeltoReal_model.py`:

      ```sh
      python train_PixeltoReal_model.py
      ```

## Structure of the folder
```
.
├── data_to_train_model_experiment_109.txt      # Data export that is used to train the Pixel-to-Real model
├── PixeltoReal_model_to_be_used_in_GUI.json    # Trained Pixel-to-Real model
├── README.md
└── train_PixeltoReal_model.py                  # Code for training the Pixel-to-Real model
```
