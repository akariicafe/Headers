@interface CoreOC.CaptureManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ factors;
    void /* unknown type, empty encoding */ poseGraph;
    void /* unknown type, empty encoding */ numShotsAttempted;
    void /* unknown type, empty encoding */ numShotsCaptured;
    void /* unknown type, empty encoding */ numInvalidPose;
    void /* unknown type, empty encoding */ workingQueue;
    void /* unknown type, empty encoding */ cancelShotRequest;
    void /* unknown type, empty encoding */ cameraControl;
    void /* unknown type, empty encoding */ referenceTime;
    void /* unknown type, empty encoding */ captureRequestWaitTime;
    void /* unknown type, empty encoding */ allowToTakeNextShot;
    void /* unknown type, empty encoding */ nextShotWaitTimeIfAccepted;
    void /* unknown type, empty encoding */ nextShotWaitTimeIfNotAccepted;
    void /* unknown type, empty encoding */ addToPoseGraphEnabled;
    void /* unknown type, empty encoding */ objectInFOVRatioThreshold;
    void /* unknown type, empty encoding */ sphereAngleConfusionIntervalUpperBound;
    void /* unknown type, empty encoding */ sphereAngleConfusionIntervalLowerBound;
    void /* unknown type, empty encoding */ baselineThreshold;
    void /* unknown type, empty encoding */ enablePostCaptureCheck;
    void /* unknown type, empty encoding */ pointOfInterest;
    void /* unknown type, empty encoding */ preCheckPassedReferenceTimestamp;
    void /* unknown type, empty encoding */ rollingShutterSkewUpperBound;
    void /* unknown type, empty encoding */ depthWarpBuffer;
    void /* unknown type, empty encoding */ depthWarpUpdateInterval;
    void /* unknown type, empty encoding */ depthWarpCacheInterval;
    void /* unknown type, empty encoding */ lastVideoFrameMetadata;
    void /* unknown type, empty encoding */ currentVideoFrameDepthWarpMotionScore;
    void /* unknown type, empty encoding */ preCheckPassedDepthWarpMotionScore;
    void /* unknown type, empty encoding */ postCheckPassedDepthWarpMotionScore;
    void /* unknown type, empty encoding */ depthWarpMotionBlurThreshold;
    void /* unknown type, empty encoding */ minJasperPointCount;
    void /* unknown type, empty encoding */ minJasperDepth;
    void /* unknown type, empty encoding */ maxJasperDepth;
    void /* unknown type, empty encoding */ motionManager;
    void /* unknown type, empty encoding */ preCheckPassedIMUMaxAngularSpeed;
    void /* unknown type, empty encoding */ postCheckPassedIMUMaxAngularSpeed;
    void /* unknown type, empty encoding */ imuTimestampAtCapture;
    void /* unknown type, empty encoding */ focusPixelBlurScore;
    void /* unknown type, empty encoding */ focusPixelBlurScoreThreshold;
    void /* unknown type, empty encoding */ geoDebugData;
}

@end
