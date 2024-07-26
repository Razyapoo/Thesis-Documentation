## Overview

This is a main GUI of our system. It solely serves as a tool, which enables to work offline with the collected data. It facilitates the user's interaction with our developed system, allowing for:

- Aligning (synchronizing) and visualizing video and UWB data streams recorded by [Server](/Implementation/Server/Server.h)
- Using the Pixel-To-Real and Optical methods for people localization
- Performing data analysis
- Exporting the data, e.g., for model training, but not restricted to it
- Loading / Playing / Pausing / Seeking the data streams

![IndoorPositioningSystem](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/main_window_gui.png)

The application is built using the Qt 6.6.1 framework.

## Requirements

- **Linux operating system**
  - Tested on Ubuntu 22.04.4 LTS
  - Monitor resolution: 1920x1080 or more.
- **Qt6 Framework v6.6.1 or newer**
- **YoloV4** (.weights, .cfg)
- **OpenCV v4.7.0**
- **eXtream Gradient Boost**

## Installation

To install the Main GUI application, follow these steps:

1. **Install the required dependencies:**
   - **Install XGBoost:**
        - Follow the [Installation Guide](https://github.com/dmlc/xgboost)
   - **Install OpenCV:**
        - Follow the [OpenCV installation guide](https://docs.opencv.org/4.x/d7/d9f/tutorial_linux_install.html).
   - **Install Qt6 Framework:**
        - Follow the [Qt6 installation guide](https://www.qt.io/download-qt-installer-oss?hsCtaTracking=99d9dd4f-5681-48d2-b096-470725510d34%7C074ddad0-fdef-4e53-8aa8-5e8a876d6ab4).
   - **Download YoloV4 configuration files:**
    ```sh
    wget https://github.com/AlexeyAB/darknet/releases/download/darknet_yolo_v4_pre/yolov4-tiny.weights
    wget https://raw.githubusercontent.com/AlexeyAB/darknet/master/cfg/yolov4-tiny.cfg
    ```

 
3. **Clone the repository:**
   ```sh
   git clone https://github.com/Razyapoo/Master-Thesis.git

3. **Navigate to the `IndoorPositioningSystem` directory:**
```sh
   cd Master-Thesis/Implementation/IndoorPositioningSystem/
```

4. **Build and run the application:**
```sh
   export CMAKE_PREFIX_PATH=/opt/Qt/{version_of_Qt}/gcc_64/lib/cmake:$CMAKE_PREFIX_PATH # change version_of_Qt with your version
   cd Implementation/IndoorPositioningSystem # enter the main folder of the application if not yet there
   mkdir build && cd build
   cmake ..
   make
   ```

## Usage

### Run the GUI and load the data

1. **Open the Indoor Positioning System application:**
   - Run the executable `./IndoorPositioningSystem`.

2. **Navigate to the "File" in the top menu:**

    ![Select the folder with video and UWB data](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/options.png)

- This will provide you with four different options:
    - **"Open video and UWB data":** Select the folder with the video and UWB data as a single project / package, which corresponds to the Experiment folder that you want to analyze. The sample experiments are located at [Data for Indoor Positioning System (GUI)](https://github.com/Razyapoo/Master-Thesis/tree/master/Data%20for%20Indoor%20Positioning%20System%20(GUI)). 

- For example, we can select [Train - Experiment 109](https://github.com/Razyapoo/Master-Thesis/tree/master/Data%20for%20Indoor%20Positioning%20System%20(GUI)/Train%20-%20Experiment%20109). In the following tutorial, this experiment will be used as an example.
---

### When video and UWB data are selected:

- **Enter the anchors' positions:**
    
    ![Input for anchors' positions](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/anchors_input.png)

    - The GUI will require you to enter the anchors' positions
    - These positions can be found in the description in [Data for Indoor Positioning System (GUI)](https://github.com/Razyapoo/Master-Thesis/tree/master/Data%20for%20Indoor%20Positioning%20System%20(GUI)).
    - The GUI requires to set the **origin** anchor, which represents the origin of the UWB coordinate system. This allows to extend the UWB coordinate system to match the actual size of the environmental area.
    - It is possible to add as many anchors as you wish. 
    - It is **allowed to overwrite** an already existing anchor by writing its ID again with new coordinates.
    - Once all positions of anchors are entered, it is possible to close the input window by pressing "**Finish adding**". After this the GUI will start playing the data stream.
---

### Main view of the GUI
<a id="main-view"></a>

![Main view](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/main_view.png)

- **Area 1**: represents the stream of video data, consisting of Frame ID and its timestamp
- **Area 2**: represents the UWB data stream. Both Video and UWB streams are synchronized using the closest timestamps.
- **Area 3**: dedicated to the UWB data. It allows for correcting the data by analyzing them and showing the estimated UWB coordinates.
- **Area 4**: allows to navigate through the video; seek frame
- **Area 5**: play / pause data stream
- **Area 6**: intended to run Pixel-to-Real and Optical methods and show their results.
- **Area 7**: responsible for exporting the data. Note that this export process is very time-consuming. There is another option to export the data, which can be performed in the Data Analysis window.
---

### Show UWB coordinates

- Coordinate window is shown automatically, once video and UWB data are loaded

![UWB coordinates window](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/uwb_coordinates_window.png)

- Top-down view (Localization schema)

![UWB localization schema](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/uwb_localization_schema.png)

   - Schema allows to **hover the mouse over the shapes** to see their coordinates!

### How to analyze UWB data (for its correction)

![Main view](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis.png)

- Allows to correct the descripancies in UWB distance measurements
- First, the time rage should be set
- Then, the pair of interest (tag and anchor) should be selected
- **IMPORTANT:** this analysis is intended only for tags, and only in pair with one anchor
- This allows for more detailed examination of measurements

The main process of analysis:
    
1. Set the time range of interest, then press 

![Time range](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_window.png)

2. Select a tag and an anchor pair

Common case:

- Tag

![Tag selection](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_tag_selection.png)

- Anchor

![Anchor selection](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_anchor_selection.png)

**NOTE:** In the current example, there will be only 1 tag and 2 anchors to choose from. In general, there can be more tags and anchors to choose from.

- Tag

![Tag selection E109](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_tag_selection_e109.png)

- Anchor

![Anchor selection E109](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_anchor_selection_e109.png)

3. Split the dataset using rolling window (for standard rolling deviation)

![STD Rolling deviation](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_rolling_window.png)

**NOTE:** Diagrams are interactive. Use the following shortcuts:
   - ctrl + left mouse + "mouse move" - allows to pan a diagram view
   - ctrl + mouse wheel - allows to zoom in / out a diagram
   - hovering the mouse over the lines: shows timestamp (in hour:min:sec for better analysis) + UWB measurement recorded at that time  

4. Set a threshold to identify **standing periods**

![Threshold](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_threshold.png)

5. Assign each period with corresponding Ground Truth distance

![GT mapping](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_reference_values.png)
   
   - Ground Truth values are used to train polynomial regression function
   - There are two possibilities to enter the Ground Truth values:
      1. (1.) Upload batch file containing GT values for all standing periods
      2. (2.) Set Ground Truth for each standing period


6. Calculate the polynomial regression to correct distance measurements for the entire range of tag-anchor pair

![Polynomial regression](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_calculate_polyn_regres.png)


7. Update UWB distances with corrected ones and export them for model training
<a id="segment-export"></a>

![Segment representatives export](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_export.png)

   - (1.) Update (adjust) UWB measuremtns "on-the-go" with correct ones using trained polynomial function. Subsequently, it will correct the UWB coordinates.
   - (2.) Export segments' (standing periods) representatives for the selected tag-anchor pair. 
      - This only exports the segment representatives, and not the entire range of values
      - Export of segment representatives helps to reduce data export time and collect more distinc coordinates for machine learning training.

### Run Pixel-to-Real and Optical methods


- These methods require additional configuration files to run. These files could be loaded either:

1. Using the "File" in the top menu:
- **"Load pixel to real model params":** Select the folder with the parameters for the Pixel-To-Real model.
- **"Load camera intrinsic params":** Select the folder with the intrinsic parameters for the camera. 
- **"Load human detection model weights":** Select the folder with the weights (both .weights and .cfg together as a single package) for the human detection model. 

**NOTE:** "Load human detection model weights" can be loaded only from "File" in the top menu. For safety reasons.

2. Directly by running the methods. It will show pop-up window and require to load configuration files.

![Run P2R and Opt methods](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/run_opt_p2r_methods.png)

   - this will to start people detection and show dedicated windows with coordinates for each method

   ![Run P2R and Opt methods result](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/run_methods_result.png)

### Export coordinates

- This feature allows to export "pixel coordinates - coordinates estimated by method" pairs. Methods: UWB, Pixel-to-Real, Optical. 
- It is usefull for model training and further analysis, but not restricted to it. 

- The export can be performed by two ways:
  1. Frame-by-Frame: exports all frames within the defined time range (viz [Area 7](#main-view)).

  2. Segment representatives: export only segment representatives (viz [segment export](#segment-export)).