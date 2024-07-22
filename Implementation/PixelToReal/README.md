# Pixel-to-Real model training

Contains the code for training the Pixel-to-Real model.

- `data_to_train_model_experiment_109.txt` - export of synchronized (aligned) pairs consisting of UWB coordinates and pixel coordinates; export from Indoor Positioning System (GUI)
    - File schema:
        ```
        { Frame ID } { UWB X Coordinate } { UWB Y Coordinate } { Pixel x Coordinate } { Pixel y Coordinate } 
        ```
    - note: Pixel means real pixel in image, not PixelToReal model
- `PixeltoReal_model_to_be_used_in_GUI.json` - prepared (trained) Pixel-to-Real model to use in Indoor Positioning System (GUI)

**Requirements**:
- eXtream Gradient Boost:
    ``` 
    git clone --recursive https://github.com/dmlc/xgboost
    cd xgboost
    mkdir build
    cd build
    cmake ..
    cmake --build .
    mv include/xgboost /usr/local/include/
    mv lib/libxgboost.so /usr/local/lib/
    ```


## Structure
```
.
├── data_to_train_model_experiment_109.txt      # Data export
├── PixeltoReal_model_to_be_used_in_GUI.json    # Trained model
├── README.md
└── train_PixeltoReal_model.py                  # Code for training the model
```
