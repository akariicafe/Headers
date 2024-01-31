@interface HMIVideoFrameTrackerDelegateAdapter : HMFObject <HMIVideoFrameTrackerDelegate>

@property (copy) id /* block */ frameTrackerDidTrackFrame;

- (void).cxx_destruct;
- (void)frameTracker:(id)a0 didTrackFrame:(struct opaqueCMSampleBuffer { } *)a1 background:(struct opaqueCMSampleBuffer { } *)a2 motionDetections:(id)a3 tracks:(id)a4;

@end
