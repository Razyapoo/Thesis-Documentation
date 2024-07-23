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
> [!NOTE]   
> Same steps as written in the README.md in the PixelToReal folder

To install the XGBoost, follow these steps:

``` 
git clone https://github.com/dmlc/xgboost.git
cd xgboost
mkdir build
cd build
cmake ..
cmake --build .
# mv include/xgboost /usr/local/include/
# mv lib/libxgboost.so /usr/local/lib/
```

## Usage

Use python to compile the `train_PixeltoReal_model.py`:

```
python3 train_PixeltoReal_model.py
```

It takes the pairs of pixel and UWB coordinates exported from Indoor Positioning System (GUI) and trains the model:

- Input: `data_to_train_model_experiment_109.txt`
- Output: `PixeltoReal_model_to_be_used_in_GUI.json`