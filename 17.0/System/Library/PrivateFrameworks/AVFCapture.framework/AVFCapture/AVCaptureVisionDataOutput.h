@class NSString, AVCaptureVisionDataOutputInternal, NSData, NSObject;
@protocol OS_dispatch_queue, AVCaptureVisionDataOutputDelegate;

@interface AVCaptureVisionDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {
    AVCaptureVisionDataOutputInternal *_internal;
}

@property (readonly, nonatomic) id<AVCaptureVisionDataOutputDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minFrameDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minBurstFrameDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } maxBurstDuration;
@property (nonatomic) unsigned long long gaussianPyramidOctavesCount;
@property (nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor;
@property (nonatomic) unsigned long long maxKeypointsCount;
@property (nonatomic, getter=isFeatureBinningEnabled) BOOL featureBinningEnabled;
@property (nonatomic, getter=isFeatureOrientationAssignmentEnabled) BOOL featureOrientationAssignmentEnabled;
@property (readonly, nonatomic, getter=isDynamicThresholdingSupported) BOOL dynamicThresholdingSupported;
@property (nonatomic, getter=isDynamicThresholdingEnabled) BOOL dynamicThresholdingEnabled;
@property (nonatomic) unsigned long long keypointDetectionFlowType;
@property (readonly, nonatomic, getter=isSubPixelThresholdSupported) BOOL subPixelThresholdSupported;
@property (nonatomic) unsigned long long subPixelThreshold;
@property (readonly, nonatomic, getter=isFeatureMatchingSupported) BOOL featureMatchingSupported;
@property (nonatomic, getter=isFeatureMatchingEnabled) BOOL featureMatchingEnabled;
@property (nonatomic) unsigned long long featureMatchingDescriptorSize;
@property (readonly, nonatomic, getter=isOrientationDistanceThresholdSupported) BOOL orientationDistanceThresholdSupported;
@property (nonatomic) float orientationDistanceThreshold;
@property (readonly, nonatomic, getter=isSigmaDistanceThresholdSupported) BOOL sigmaDistanceThresholdSupported;
@property (nonatomic) float sigmaDistanceThreshold;
@property (readonly, nonatomic, getter=isSquareDistanceDisparityFractionSupported) BOOL squareDistanceDisparityFractionSupported;
@property (nonatomic) float squareDistanceDisparityFraction;
@property (readonly, nonatomic, getter=isHammingDistanceThresholdSupported) BOOL hammingDistanceThresholdSupported;
@property (nonatomic) unsigned long long hammingDistanceThreshold;
@property (readonly, nonatomic, getter=isLACCConfigAndMetadataSupported) BOOL laccConfigAndMetadataSupported;
@property (retain, nonatomic) NSData *laccConfigAndMetadata;
@property (readonly, nonatomic) id delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)new;

- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)connectionMediaTypes;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (id)addConnection:(id)a0 error:(id *)a1;
- (void)removeConnection:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation { int x0; int x1; unsigned long long x2; struct __CFString *x3; union { struct { struct __CFDictionary *x0; struct __CFDictionary *x1; } x0; struct { void *x0; struct __IOSurface *x1; struct __IOSurface *x2; } x1; struct { struct opaqueCMSampleBuffer *x0; unsigned long long x1; struct __CFArray *x2; } x2; struct { struct opaqueCMFormatDescription *x0; } x3; struct { long long x0; struct opaqueCMFormatDescription *x1; } x4; } x4; } *)a0;
- (void)_updateLocalQueue:(struct localQueueOpaque { } *)a0;
- (void)setRuntimeUpdates:(id)a0;
- (void)setDelegateOverride:(id)a0 delegateOverrideCallbackQueue:(id)a1;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque { } *)a0;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x0; union { struct { struct opaqueCMSampleBuffer *x0; } x0; struct { long long x0; struct opaqueCMFormatDescription *x1; } x1; } x1; })a0;
- (void)_initializeClientVisiblePropertiesForSourceDevice:(id)a0;
- (BOOL)_isPropertySupported:(id)a0;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)a0;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)a0;
- (BOOL)areRuntimeUpdatesSupported;
- (BOOL)isKeypointDetectionFlowTypeSupported:(unsigned long long)a0;
- (float)keypointDetectionThreshold;
- (void)setDelegate:(id)a0 callbackQueue:(id)a1;
- (void)setKeypointDetectionThreshold:(float)a0;
- (void)triggerBurst;

@end
