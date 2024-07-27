# Server (Centralized)

The Server simulates a real CCTV camera system, allowing to collect video and UWB data. 
It is podsible to Pause / Continue / Stop recording of data streams

**Responsibilities:**
- *Video recording*: handles video recording
- *Server for UWB*: communicates with UWB tags and collects distance measurements from them
- *Activity watchdog*: monitors tag responses and detects if the communication between an anchor and tag is blocked

Each work (responsibility) is performed simultaneously in a dedicated thread for better optimization

> [!Warning]
> The video and UWB data streams are not yet synchornized; synchronization is performed later in Indoor Positioning System (GUI)

**Output:**
  - `video.avi`: Video recording
  - `video_timestamps.txt`: Index file containing frames' timestamps
  - `UWB_timestamps.txt`: UWB measurements together with their timestamps

## Structure
```
.
├── build
├── Camera.cpp               # Accessing Camera 
├── Camera.h
├── CMakeLists.txt           # Building the Server
├── README.md
├── Server.cpp               # UWB Server + Activity Watchdog
├── Server.h
├── Server_Multithreaded.cpp # Main part initiating all workers
├── SharedData.h             # Communication between workers (threads)
├── VideoManager.cpp         # Recording video stream
└── VideoManager.h

```