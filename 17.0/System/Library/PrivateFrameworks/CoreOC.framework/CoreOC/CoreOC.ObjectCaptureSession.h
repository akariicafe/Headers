@interface CoreOC.ObjectCaptureSession : NSObject <ARReplaySensorDelegate, ARInternalSessionObserver> {
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ observingPublishers;
    void /* unknown type, empty encoding */ writingPublishers;
    void /* unknown type, empty encoding */ spi;
    void /* unknown type, empty encoding */ estimatedReconstructionTime;
    void /* unknown type, empty encoding */ objectFlippable;
    void /* unknown type, empty encoding */ isOverCaptureEnabled;
    void /* unknown type, empty encoding */ sessionQueue;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ arSession;
    void /* unknown type, empty encoding */ stateOnPause;
    void /* unknown type, empty encoding */ stateAfterFinishing;
    void /* unknown type, empty encoding */ currentFrame;
    void /* unknown type, empty encoding */ planeMap;
    void /* unknown type, empty encoding */ objectTransform;
    void /* unknown type, empty encoding */ metadataMap;
    void /* unknown type, empty encoding */ frameIndex;
    void /* unknown type, empty encoding */ referenceTimestamp;
    void /* unknown type, empty encoding */ needToStopMotionManager;
    void /* unknown type, empty encoding */ isHighQualityMacroModeSupported;
    void /* unknown type, empty encoding */ isToFSensorTypePeridot;
    void /* unknown type, empty encoding */ snapshotURL;
    void /* unknown type, empty encoding */ mobileSfMUserDefaultValue;
    void /* unknown type, empty encoding */ isClosed;
    void /* unknown type, empty encoding */ objectInFOVRatio;
    void /* unknown type, empty encoding */ centerOfObjectInFOV;
    void /* unknown type, empty encoding */ uuidToShotAnchorsMap;
    void /* unknown type, empty encoding */ shotUUIDToIDMap;
    void /* unknown type, empty encoding */ shotIDToUUIDMap;
    void /* unknown type, empty encoding */ shotFlippableMap;
    void /* unknown type, empty encoding */ numInitialShotsBeforeFlippableDecision;
    void /* unknown type, empty encoding */ isPoseCorrectionUsingMobileSfMEnabled;
    void /* unknown type, empty encoding */ numPoseUpdatesToCheckForConsistency;
    void /* unknown type, empty encoding */ mobileSfMPoseUpdateRotationDiffThreshold;
    void /* unknown type, empty encoding */ mobileSfMPoseUpdateTranslationDiffThreshold;
    void /* unknown type, empty encoding */ waitTimeThresholdForPoseCorrectionInSec;
    void /* unknown type, empty encoding */ poseCorrectionTimerWorkItem;
    void /* unknown type, empty encoding */ worldToMobileSfMTransform;
    void /* unknown type, empty encoding */ consecutiveObjectFlippabilityCount;
    void /* unknown type, empty encoding */ minConsecutiveObjectFlippabilityCount;
    void /* unknown type, empty encoding */ minShotFlippableMapSize;
    void /* unknown type, empty encoding */ tapPosition;
    void /* unknown type, empty encoding */ plane;
    void /* unknown type, empty encoding */ prevPlane;
    void /* unknown type, empty encoding */ yDistanceThresholdBetweenPrevAndCurrPlanes;
    void /* unknown type, empty encoding */ initialCameraTransform;
    void /* unknown type, empty encoding */ boundingBoxFailCurCount;
    void /* unknown type, empty encoding */ boundingBoxFailMaxCount;
    void /* unknown type, empty encoding */ boundingBox;
    void /* unknown type, empty encoding */ maskingVoxelCloud;
    void /* unknown type, empty encoding */ boundingBoxAnchor;
    void /* unknown type, empty encoding */ coverage;
    void /* unknown type, empty encoding */ staticSegmentID;
    void /* unknown type, empty encoding */ shotsInCurrentSegment;
    void /* unknown type, empty encoding */ temporalDepthPointCloudCircularBuffer;
    void /* unknown type, empty encoding */ temporalDepthPointCloudUpdateInterval;
    void /* unknown type, empty encoding */ temporalDepthPointCloudCacheInterval;
    void /* unknown type, empty encoding */ proxySurface;
    void /* unknown type, empty encoding */ proxySurfaceObjectOrigin;
    void /* unknown type, empty encoding */ proxySurfaceInputType;
    void /* unknown type, empty encoding */ proxySurfaceDebugVoxelCloud;
    void /* unknown type, empty encoding */ pointCloud;
    void /* unknown type, empty encoding */ worldToObjectTransformFromMobileSfM;
    void /* unknown type, empty encoding */ initialWorldToMobileSfMTransform;
    void /* unknown type, empty encoding */ shouldWaitForPoseCorrectionUsingMobileSfM;
    void /* unknown type, empty encoding */ pauseTimeForPoseCorrection;
    void /* unknown type, empty encoding */ shouldWaitForNewPlane;
    void /* unknown type, empty encoding */ voxelIntegrationManager;
    void /* unknown type, empty encoding */ maskingManager;
    void /* unknown type, empty encoding */ explicitFeedbackManager;
    void /* unknown type, empty encoding */ imageScaler;
    void /* unknown type, empty encoding */ motionManager;
    void /* unknown type, empty encoding */ internalMotionManager;
    void /* unknown type, empty encoding */ pgManager;
    void /* unknown type, empty encoding */ isPgManagerTornDown;
    void /* unknown type, empty encoding */ cameraControl;
    void /* unknown type, empty encoding */ captureManager;
    void /* unknown type, empty encoding */ traceDebugId;
    void /* unknown type, empty encoding */ _debugTapPosition;
    void /* unknown type, empty encoding */ _debugPlaneDetection;
    void /* unknown type, empty encoding */ _debugMaskingVoxel;
    void /* unknown type, empty encoding */ _debugCameraControl;
    void /* unknown type, empty encoding */ _debugDebugVoxels;
    void /* unknown type, empty encoding */ _debugTsdfDepth;
    void /* unknown type, empty encoding */ _debugSurfaceSampling;
    void /* unknown type, empty encoding */ _debugCoverageGuideVoxels;
    void /* unknown type, empty encoding */ _debugExplicitFeedbackEnabled;
    void /* unknown type, empty encoding */ _debugAutoCaptureEnabled;
    void /* unknown type, empty encoding */ _debugWriteAllFramesData;
    void /* unknown type, empty encoding */ _debugOCBundleWriteDisabled;
    void /* unknown type, empty encoding */ _bypassAllAlgos;
    void /* unknown type, empty encoding */ _voxelIntegrationEnabled;
    void /* unknown type, empty encoding */ _explicitFeedbackEnabled;
    void /* unknown type, empty encoding */ _coverageEnabled;
    void /* unknown type, empty encoding */ _autoCaptureEnabled;
    void /* unknown type, empty encoding */ _mobileSfMEnabled;
    void /* unknown type, empty encoding */ _mobileSfMiPhoneOverride;
    void /* unknown type, empty encoding */ _captureRateControlEnabled;
    void /* unknown type, empty encoding */ _mobileSfMPointCloudBuffer;
    void /* unknown type, empty encoding */ _scaleWorldToObjectTransform;
    void /* unknown type, empty encoding */ _replayVideoURL;
    void /* unknown type, empty encoding */ _recordVideoURL;
    void /* unknown type, empty encoding */ _skippedFramesTimeStamps;
}

- (void)sessionInterruptionEnded:(id)a0;
- (void)session:(id)a0 didUpdateAnchors:(id)a1;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (void)session:(id)a0 didFailWithError:(id)a1;
- (void)sessionWasInterrupted:(id)a0;
- (void)session:(id)a0 didUpdateFrame:(id)a1;
- (void)session:(id)a0 cameraDidChangeTrackingState:(id)a1;
- (void)session:(id)a0 didAddAnchors:(id)a1;
- (void)session:(id)a0 didRemoveAnchors:(id)a1;
- (BOOL)sessionShouldAttemptRelocalization:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)logThermalStateChange;

@end
