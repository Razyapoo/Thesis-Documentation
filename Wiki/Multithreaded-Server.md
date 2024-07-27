## Overview

The Server simulates a real CCTV camera system, allowing to collect video and UWB data. 
It is podsible to Pause / Continue / Stop recording of data streams

**Responsibilities:**
- *Video recording*: handles video recording
- *(Centralized) Server for UWB*: communicates with UWB tags and collects distance measurements from them
- *Activity watchdog*: monitors tag responses and detects if the communication between an anchor and tag is blocked

Each work (responsibility) is performed simultaneously in a dedicated thread for better optimization

> [!Warning]
> The video and UWB data streams are not yet synchornized; synchronization is performed later in Indoor Positioning System (GUI)

**Output:**
  - `video.avi`: Video recording
  - `video_timestamps.txt`: Index file containing frames' timestamps
  - `UWB_timestamps.txt`: UWB measurements together with their timestamps

## Installation 

Installation process is detailed in the [folder](/Implementation/Server/) contatining this application on GitHub.

## Usage

### Server initialization 

```sh
# Assuming that we are in the build folder
./Server 
```

- This will automatically start the UWB server, the watchdog to track activity of tags, and the video recording.

### Pause / continue / stop recording

The management of the recording can be performed by using keyboard keys as follows:

- p: pause recording
- c: continue recording
- s: stop and save recording

> [!Warning]
> These keys are pinned to video stram window (cv::imshow). Therefore, the keys should only be pressed when video recording window is active. 

> [!Warning]
> After pressing "s", you need to wait until the video is saved correctly. As soon as the video is successfully saved, the program will notify about it.

### Activity watchdog

Allows to monitor activity of the tag by detecting whether the communication between an anchor and a tag has been blocked

Example of blocked connection (the window is red):

![IndoorPositioningSystem](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/server_not_active.png)

Example of the normal (non-blocked) connection (the window is green):

![IndoorPositioningSystem](https://github.com/Razyapoo/Thesis-Documentation/blob/master/Archive/Documentation/Images%20for%20wiki/server_is_active.png)
