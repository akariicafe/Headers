@class NSData, AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

@interface AVCaptureVisionDataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } minFrameDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } minBurstFrameDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } maxBurstDuration;
    unsigned long long gaussianPyramidOctavesCount;
    float gaussianPyramidBaseOctaveDownscalingFactor;
    unsigned long long maxKeypointsCount;
    BOOL featureBinningEnabled;
    BOOL featureOrientationAssignmentEnabled;
    BOOL dynamicThresholdingEnabled;
    unsigned long long keypointDetectionFlowType;
    unsigned long long subPixelThreshold;
    BOOL featureMatchingEnabled;
    unsigned long long featureMatchingDescriptorSize;
    float orientationDistanceThreshold;
    float sigmaDistanceThreshold;
    float squareDistanceDisparityFraction;
    unsigned long long hammingDistanceThreshold;
    NSData *laccConfigAndMetadata;
    float keypointDetectionThreshold;
}

- (id)init;
- (void)dealloc;

@end
