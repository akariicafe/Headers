@interface DockKitCore.FilterFaceTracker : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ filter;
    void /* unknown type, empty encoding */ personId;
    void /* unknown type, empty encoding */ objectId;
    void /* unknown type, empty encoding */ ispFaceId;
    void /* unknown type, empty encoding */ ispBodyId;
    void /* unknown type, empty encoding */ latestFaceStamp;
    void /* unknown type, empty encoding */ latestBodyStamp;
    void /* unknown type, empty encoding */ latestObjectStamp;
    void /* unknown type, empty encoding */ isActive;
    void /* unknown type, empty encoding */ lastBodyRect;
    void /* unknown type, empty encoding */ lastFaceRect;
    void /* unknown type, empty encoding */ motionModel;
    void /* unknown type, empty encoding */ averageSubjectBuffer;
    void /* unknown type, empty encoding */ averageSubjectBufferLong;
    void /* unknown type, empty encoding */ cameraFOV;
    void /* unknown type, empty encoding */ adjustedCameraFOV;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ lastPitch;
    void /* unknown type, empty encoding */ lastYawState;
    void /* unknown type, empty encoding */ timeout;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ maxVAzimuth;
    void /* unknown type, empty encoding */ maxVElevation;
    void /* unknown type, empty encoding */ faceYawThreshold;
    void /* unknown type, empty encoding */ walkingSpeedThreshold;
    void /* unknown type, empty encoding */ stationarySpeedThreshold;
    void /* unknown type, empty encoding */ stationaryPosThreshold;
    void /* unknown type, empty encoding */ depthConstant;
    void /* unknown type, empty encoding */ yawSearchMargin;
    void /* unknown type, empty encoding */ pitchSearchMargin;
    void /* unknown type, empty encoding */ yawPredictionHorizon;
    void /* unknown type, empty encoding */ pitchPredictionHorizon;
    void /* unknown type, empty encoding */ humanHeight;
    void /* unknown type, empty encoding */ standHeight;
    void /* unknown type, empty encoding */ topOfHeadScale;
    void /* unknown type, empty encoding */ topOfHeadThreshold;
    void /* unknown type, empty encoding */ minPredictionPitch;
    void /* unknown type, empty encoding */ closeBodyWidth;
    void /* unknown type, empty encoding */ defaultFaceBox;
    void /* unknown type, empty encoding */ minBodyPrintConfidence;
    void /* unknown type, empty encoding */ falseFaceIOUThreshold;
    void /* unknown type, empty encoding */ falseBodyIOUThreshold;
    void /* unknown type, empty encoding */ uncertaintyRangeMultiplier;
    void /* unknown type, empty encoding */ lastIdSwitchTime;
    void /* unknown type, empty encoding */ idSwitchTimeout;
    void /* unknown type, empty encoding */ lastFaceRectInBody;
    void /* unknown type, empty encoding */ imu;
}

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;

@end
