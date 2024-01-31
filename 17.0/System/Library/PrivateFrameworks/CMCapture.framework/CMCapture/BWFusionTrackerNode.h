@class BWPixelBufferPool, NSString, NSSet, FTCinematicTracker, BWVideoDepthInferenceConfiguration, NSObject, BWVideoFormat;
@protocol MTLEvent, OS_dispatch_semaphore;

@interface BWFusionTrackerNode : BWInferenceNode <BWInferencePixelBufferPoolProvider> {
    unsigned long long _framesSinceLastDDR;
    FTCinematicTracker *_cinematicTracker;
    NSObject<OS_dispatch_semaphore> *_backpressureSemaphore;
    id<MTLEvent> _backpressureEvent;
    unsigned long long _backpressureEventNumber;
    NSSet *_humanPosePreventionSet;
    struct opaqueCMFormatDescription { } *_depthFormatDescription;
    BWVideoFormat *_disparityFeaturesVideoFormat;
    BWVideoFormat *_colorFeaturesVideoFormat;
    BWPixelBufferPool *_disparityFeaturesPool;
    BWPixelBufferPool *_colorFeaturesPool;
    struct opaqueCMSampleBuffer { } *_previousDisparityFeaturesSampleBuffer;
    struct opaqueCMSampleBuffer { } *_previousColorFeaturesSampleBuffer;
    struct __CVBuffer { } *_initialDisparityFeaturesPixelBuffer;
    struct __CVBuffer { } *_initialColorFeaturesPixelBuffer;
    struct __CVBuffer { } *_currentFeaturesMinPixelBuffer;
    struct __CVBuffer { } *_previousFeaturesMinPixelBuffer;
    struct opaqueCMSampleBuffer { } *_currentFeaturesMinSampleBuffer;
    struct opaqueCMSampleBuffer { } *_previousFeaturesMinSampleBuffer;
    BOOL _depthInferenceEnabled;
}

@property (readonly, nonatomic) BWVideoDepthInferenceConfiguration *videoDepthConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)a0;
- (void)willEmitSampleBufferAlways:(struct opaqueCMSampleBuffer { } *)a0;
- (id)nodeType;
- (id)nodeSubType;
- (id)initWithConvEngineSupportWithCaptureDevice:(id)a0 scheduler:(id)a1 priority:(unsigned int)a2 depthInferenceEnabled:(BOOL)a3;
- (id)inputVideoFormatForAttachedMediaKey:(id)a0;
- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)a0 format:(id)a1;

@end
