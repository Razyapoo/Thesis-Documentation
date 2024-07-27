# Recorded Experiments

Each experiment consists of the following files (produced by [Server](/Implementation/Server/Server_Multithreaded.cpp)):
- `video.avi` - video recording of the experiment.
- `video_timestamps.txt` - index file to read the video frame-by-frame.
- `UWB_timestamps.txt` - UWB measurements.

These data are **not prepared** to be openned in IPS (GUI) because `UWB_timestamps.txt` contains an incompatible data format:
- **Format used in these recordings (per record ID)**:
  ```
  { Record ID } { Timestamp } { Tag ID } { Anchor 1 ID } { Anchor 1 Distance } { Anchor 2 ID } { Anchor 2 Distance } 
  Request time: { timestamp } 
  Response time: { timestamp } 
  Overall time of the request (response time - request time): { measurement_time }
  ```

- **Correct format to open in GUI (per record ID)**:
  ```
  { Record ID } { Timestamp } { Tag ID } { Anchor 1 ID } { Anchor 1 Distance } { Anchor 2 ID } { Anchor 2 Distance } { measurement_time }
  ```

During the experiments, I have been writing notes in a journal. These notes are available in the following directory: [Journal](../Archive/Journal/)