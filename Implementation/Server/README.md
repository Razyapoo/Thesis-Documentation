# Server (Centralized)

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

## Structure
```
.
├── build
├── Camera.cpp               # Camera
├── Camera.h
├── CMakeLists.txt
├── README.md
├── Server.cpp               # UWB Server + Activity Watchdog
├── Server.h
├── Server_Multithreaded.cpp # Main
├── SharedData.h             # Communication between threads 
├── VideoManager.cpp         # Video Manager
└── VideoManager.h

```