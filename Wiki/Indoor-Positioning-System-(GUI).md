## Overview

This is a main GUI of our system. It solely serves as a tool, which enables to work offline with the collected data. It facilitates the user's interaction with our developed system, allowing for:

- Aligning (synchronizing) and visualizing video and UWB data streams recorded by [Server](/Implementation/Server/Server.h)
- Using the Pixel-To-Real and Optical methods for people localization
- Performing data analysis
- Exporting the data, e.g., for model training, but not restricted to it
- Loading / Playing / Pausing / Seeking the data streams

![IndoorPositioningSystem](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/main_window_gui.png)

The application is built using the Qt 6.6.1 framework.

## Installation 

Installation process is detailed in the [folder](/Implementation/IndoorPositioningSystem/) containing this application on GitHub.

## Usage

### Run the GUI and load the data

1. **Open the Indoor Positioning System application:**
   - Run the executable `./IndoorPositioningSystem` in the `build/` folder.

2. **Navigate to the "File" in the top menu:**

    ![Select the folder with video and UWB data](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/options.png)

- This will provide you with four different options:
   - **"Open video and UWB data":** Select the folder with the video and UWB data as a single project / package from [Data for Indoor Positioning System (GUI)](https://github.com/Razyapoo/Master-Thesis/tree/master/Data%20for%20Indoor%20Positioning%20System%20(GUI)). 
      - For example, select [Train - Experiment 109](https://github.com/Razyapoo/Master-Thesis/tree/master/Data%20for%20Indoor%20Positioning%20System%20(GUI)/Train%20-%20Experiment%20109). In the rest of this tutorial, this experiment will be used as an example.   
   - Other options are not mandatory as for now. They will be detailed later in this tutorial.




### When video and UWB data are selected:

- **Enter the anchors' positions:**
    
    ![Input for anchors' positions](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/anchors_input.png)

    - The GUI will require you to enter the anchors' positions
    - These positions can be found in the description in [Data for Indoor Positioning System (GUI)](https://github.com/Razyapoo/Master-Thesis/tree/master/Data%20for%20Indoor%20Positioning%20System%20(GUI)).
    - The GUI requires to set the **origin** anchor, which represents the origin of the UWB coordinate system.
      - This allows to extend the UWB coordinate system to match the actual size of the environmental area.
    - It is possible to add as many anchors as you wish. 
    - It is **allowed to overwrite** an already existing anchor by writing its ID again with new coordinates.
    - Once all positions of anchors are entered, close the input window by pressing "**Finish adding**". 
      - After this the GUI will start playing the data stream.


### Main view of the GUI
<a id="main-view"></a>

![Main view](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/main_view.png)

- **Area 1**: Represents the stream of video data, consisting of Frame ID and its timestamp
- **Area 2**: Represents the UWB data stream. Both Video and UWB streams are synchronized by looking for the closest timestamps.
- **Area 3**: Dedicated to the UWB data. It allows for correcting the data by analyzing them and showing the UWB top-down schema and estimated UWB coordinates.
- **Area 4**: Allows to navigate through the video. Frame seeking.
- **Area 5**: Play / pause data stream
- **Area 6**: Intended to run Pixel-to-Real and Optical methods and show their results.
- **Area 7**: Responsible for exporting the data. Note that this export process is very time-consuming. There is another option to export the data, which can be performed in the Data Analysis window, as detailed later.


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
- Then, standing periods are determined and mean value for each period is calculated.
- These mean values are then used to train plynomial regression capable of correcting the original UWB meaurements.
- **IMPORTANT:** this analysis is intended only for tags, and only in pair with one anchor
- This allows for more detailed examination of measurements

The main process of analysis:
    
1. Set the time range of interest, then press "Set Time Range" button.

![Time range](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_window.png)

2. Select a tag and anchor pair

**NOTE:** In the current example, there will be only 1 tag and 2 anchors to choose from. In general, there can be more tags and anchors.

- Tag

![Tag selection E109](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_tag_selection_e109.png)

- Anchor

![Anchor selection E109](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_anchor_selection_e109.png)

This is how the choice will looks like in the common case:

- Tag

![Tag selection](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_tag_selection.png)

- Anchor

![Anchor selection](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_anchor_selection.png)



3. Input the rolling window size to determine standing periods

![STD Rolling deviation](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_rolling_window.png)

**NOTE:** Diagrams are interactive. Use the following combinations:
   - **ctrl + left mouse + "mouse move"**: allows to pan a diagram view
   - **ctrl + mouse wheel**: allows to zoom in / out a diagram
   - **hovering the mouse over the lines**: shows timestamp (in hour:min:sec for better analysis) + UWB measurement recorded at that time  

4. Set a threshold to split the dataset into standing periods

![Threshold](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_threshold.png)
   
   - When "Calculate" is pressed, the mean values (segment / period representatives) are calculated for each standing period.

5. Assign each period with corresponding Ground Truth distance

![GT mapping](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_reference_values.png)

   - Ground Truth values are used to train polynomial regression function
      - There are two possibilities to enter the Ground Truth values:
         - (1.) Upload batch file containing GT values for all standing periods
         - (2.) Set Ground Truth for each standing period


6. Calculate the polynomial regression to correct distance measurements for the entire range of tag-anchor pair

![Polynomial regression](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_calculate_polyn_regres.png)


7. Update UWB distances with corrected ones
<a id="segment-export"></a>

![Segment representatives export](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/data_analysis_export.png)

   - (1.) Update (adjust) UWB measuremtns "on-the-go" (in the main UWB stream in GUI) with correct ones using trained polynomial function. Subsequently, it will correct the UWB coordinates.
   - (2.) Export segments' (standing periods) representatives for the selected tag-anchor pair. 
      - This only exports the segment representatives from the defined range, and not the entire range of values one-by-one.
      - Export of segment representatives helps to reduce data export time and collect more diverse coordinates for machine learning training.

### Run Pixel-to-Real and Optical methods


- These methods require additional configuration files to run. These files could be loaded either:

1. Using the "File" in the top menu:
- **"Load pixel to real model params":** Select the folder with the parameters for the Pixel-To-Real model (.json file).
- **"Load camera intrinsic params":** Select the folder with the intrinsic parameters for the camera (.xml file). 
- **"Load human detection model weights":** Select the folder with the weights (both .weights and .cfg together as a single package) for the YOLOv4 people detection model. 

**NOTE:** "Load human detection model weights" can be loaded only from "File" in the top menu for safety reasons.

2. Directly by running the methods (pressing buttons). It will show pop-up window and require to load configuration files.

![Run P2R and Opt methods](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/run_opt_p2r_methods.png)

   This will start people detection and show dedicated windows with coordinates for each method

   ![Run P2R and Opt methods result](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/run_methods_result.png)

### Export coordinates

- This feature allows to export "pixel coordinates - coordinates estimated by method" pairs. Methods: UWB, Pixel-to-Real, Optical. 
- It is usefull for model training and further analysis, but not restricted to it. 

- The export can be performed by two ways:
  1. Frame-by-Frame: exports all frames within the defined time range (detailed in [Area 7](#main-view)).

  2. Segment representatives: export only segment representatives (detailed in [segment export](#segment-export)).