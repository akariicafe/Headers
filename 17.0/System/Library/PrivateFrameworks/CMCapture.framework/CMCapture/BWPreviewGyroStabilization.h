@class BWPreviewGyroStabilizationTripodDetection, BWPreviewGyroStabilizationPanningDetection;

@interface BWPreviewGyroStabilization : NSObject {
    struct PreviewGyroStabilizationTransformContext { int width; int height; struct CGPoint { double x; double y; } imageCenter; float pixelsPerMicron; struct { struct { int x; int y; } origin; struct { int width; int height; } size; } finalCropRect; float limitFactor; BOOL prevTransformLimited; BOOL forceIdentity; } _transformContext;
    struct { int fusedRingIndex; double fusedRingTime[256]; struct { double w; double x; double y; double z; } fusedRingQuaternion[256]; double motionTimeShift; unsigned char ignoreMotionDataForPowerTest; unsigned char relaxMotionDataLoggingThreshold; unsigned char didHaveMotionData; unsigned char prevDidHaveMotionData; unsigned char usingMotionDataFromISP; } _motionData;
    struct { int fusedRingIndex[2]; double fusedRingTime[2][512]; struct { float x; float y; } fusedRingHallPosition[2][512]; struct *fusedRingSagPosition[2]; double hallTimeShift; unsigned char isFirstSample[2]; unsigned char bypassHighPassFilter; float lowpassParameter; struct { float x; float y; } lowpassHallPosition[2]; } _hallData;
    struct { double w; double x; double y; double z; } _extrinsicAlignmentPose;
    BOOL _isFirstFrame;
    struct { double w; double x; double y; double z; } _stabilizedCenterQuaternion[4];
    struct { double w; double x; double y; double z; } _stabilizedCenterQuaternionAdjusted[4];
    struct { double w; double x; double y; double z; } _lowpassQuaternionsInstant;
    struct { double w; double x; double y; double z; } _correctionQuaternion;
    struct { float x; float y; } _oisOffsetInput;
    struct { float x; float y; } _sagPosition;
    float _baseVector[9];
    struct { float x; float y; } _currentShift;
    float _lowpassParameter;
    float _lowpassParameterCascade;
    double _frameRateNormalizationFactor;
    double _deltaFrameTime;
    double _previousCaptureTime;
    double _quaternionThreshold;
    float _physicalTripodRate;
    float _panningSpeedLimitingThreshold;
    BOOL _enableCascadeFilter;
    int _sagRemovalMethod;
    float _lowpassParameterOverride;
    BOOL _isStillImagePreview;
    BWPreviewGyroStabilizationPanningDetection *_previewPanningDetection;
    BWPreviewGyroStabilizationTripodDetection *_previewTripodDetection;
    float _maxSmoothParameter;
    float _defaultSmoothParameter;
    float _defaultSmoothParameterSlope;
    float _tripodSmoothParameter;
    float _tripodSmoothParameterSlope;
    int _tripodRampUpFrames;
    int _tripodRampDownFrames;
    int _tripodSlowPanningRampDownFrames;
    int _tripodFastPanningRampDownFrames;
    float _panningOverscanPercentage;
    float _panningSpeedThreshold;
    float _tripodMaxAngleThresholdAccumulate;
    float _tripodMaxAngleThresholdInstant;
    float _physicalTripodLikelyMaxAngleThreshold;
    float _physicalTripodMinSmoothParameter;
    float _physicalTripodGuaranteedMaxAngleThreshold;
    float _slowPanningSpeedThreshold;
}

- (void)dealloc;
- (struct { double x0; double x1; double x2; double x3; })_adjustQuaternionForSagRemoval:(struct { double x0; double x1; double x2; double x3; })a0 focalLength:(float)a1;
- (void)_adjustSmoothParameterWithQuaternion:(const struct { double x0; double x1; double x2; double x3; } *)a0 cameraMetadata:(struct { int x0; float x1; float x2; unsigned char x3; float x4; float x5; struct { float x0; float x1; } x6; double x7; double x8; double x9; double x10; double x11; double x12; struct { float x0; float x1; } x13; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x14; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x15; int x16; int x17; } *)a1 reduceSmoothParameterForLowLight:(BOOL)a2;
- (void)_applyCascadeFiltering:(struct { double x0; double x1; double x2; double x3; } *)a0 quaternion:(struct { double x0; double x1; double x2; double x3; })a1 lowpassParameter:(float)a2 cascadeLevel:(int)a3;
- (int)_computeMotionStatisticsWithQuaternion:(const struct { double x0; double x1; double x2; double x3; } *)a0 focalLength:(float)a1 maxAngleAccumulateOut:(double *)a2 maxAngleInstantOut:(double *)a3 translationOut:(void *)a4;
- (float)_computeSmoothParameterForNonStationaryCaseWithPanningStatus:(BOOL)a0 frameIsSphereStabilized:(BOOL)a1 previousLowPassParameter:(float)a2 rampDownRate:(float)a3 rampUpRate:(float)a4 targetSmoothParameter:(float)a5;
- (float)_computeSmoothParameterForPhysicalTripod:(BOOL)a0 lowpassParameter:(float)a1 previousLowPassParameter:(float)a2 frameRateNormalization:(float)a3;
- (float)_computeSmoothParameterForStationaryCaseWithPanningStatus:(BOOL)a0 translation:(float)a1 previousLowPassParameter:(float)a2 rampDownRate:(float)a3 rampUpRate:(float)a4 targetSmoothParameter:(float)a5;
- (int)_extractMetadataFromTopToBottomRowsFromDictionary:(struct __CFDictionary { } *)a0 cameraMetadata:(struct { int x0; float x1; float x2; unsigned char x3; float x4; float x5; struct { float x0; float x1; } x6; double x7; double x8; double x9; double x10; double x11; double x12; struct { float x0; float x1; } x13; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x14; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x15; int x16; int x17; } *)a1 quaternion:(struct { double x0; double x1; double x2; double x3; } *)a2;
- (int)_getAllMetadataFromDictionary:(struct __CFDictionary { } *)a0 cameraMetadata:(struct { int x0; float x1; float x2; unsigned char x3; float x4; float x5; struct { float x0; float x1; } x6; double x7; double x8; double x9; double x10; double x11; double x12; struct { float x0; float x1; } x13; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x14; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x15; int x16; int x17; } *)a1;
- (int)_limitSmoothParameterToOverscanWithQuaternion:(const struct { double x0; double x1; double x2; double x3; } *)a0 cameraMetadata:(const struct { int x0; float x1; float x2; unsigned char x3; float x4; float x5; struct { float x0; float x1; } x6; double x7; double x8; double x9; double x10; double x11; double x12; struct { float x0; float x1; } x13; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x14; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x15; int x16; int x17; } *)a1 minSmoothParameter:(float)a2 smoothParameterInOut:(float *)a3;
- (void)_setDefaultParametersForStillImagePreview:(BOOL)a0;
- (struct PreviewStabilizationFrameRateCompensatedParameter { float x0; float x1; float x2; float x3; float x4; float x5; })_updateTripodSmoothParametersWithSphereVideoEnabled:(BOOL)a0 frameRateNormalization:(double)a1;
- (int)computeStabilizationShiftUsingMetadata:(id)a0 pixelBufferDimensions:(struct { int x0; int x1; })a1 pixelSizeInMicrons:(float)a2 stabilizationShiftOut:(struct CGPoint { double x0; double x1; } *)a3;
- (id)initForStillImagePreview:(BOOL)a0;

@end
