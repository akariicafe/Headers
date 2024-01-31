@class NSMutableDictionary, BWMetalInferenceContext, BWTiledInferenceAdapter, BWEspressoInferenceAdapter, NSDictionary, BWInferenceScheduler, BWVideoDepthInferenceAdapter, BWFusionTrackerInferenceAdapter, BWVideoProcessingInferenceAdapter, NSMutableArray, NSString, BWVisionInferenceAdapter, NSMutableSet, BWInferenceDependencyProvider, BWEspressoInferenceContext, BWTiledEspressoInferenceAdapter, BWVisionInferenceContext;

@interface BWInferenceEngine : NSObject <BWInferenceResourceProvider> {
    BWInferenceScheduler *_scheduler;
    unsigned long long _connection;
    unsigned int _priority;
    BWInferenceDependencyProvider *_dependencyProvider;
    BWEspressoInferenceAdapter *_espressoAdapter;
    BWTiledEspressoInferenceAdapter *_tiledEspressoAdapter;
    BWTiledInferenceAdapter *_tiledInferenceAdapter;
    BWEspressoInferenceContext *_cpuContext;
    BWEspressoInferenceContext *_gpuContext;
    BWEspressoInferenceContext *_aneContext;
    BWMetalInferenceContext *_defaultDeviceMetalContext;
    BWVisionInferenceAdapter *_visionAdapter;
    BWVisionInferenceContext *_visionContext;
    BWVideoDepthInferenceAdapter *_videoDepthAdapter;
    BWFusionTrackerInferenceAdapter *_fusionTrackerAdapter;
    BWVideoProcessingInferenceAdapter *_videoProcessingAdapter;
    NSMutableArray *_inferenceRequirements;
    NSMutableArray *_videoRequirementsPossiblyReceivingAttachedMedia;
    NSMutableArray *_videoRequirementsPossiblyProvidingAttachedMedia;
    NSMutableDictionary *_lazyInputVideoRequirementsByAttachedMediaKey;
    NSMutableDictionary *_lazyOutputVideoRequirementsByAttachedMediaKey;
    NSMutableSet *_unresolvedAttachedMediaKeysPreventingProvidedVideoRequirements;
}

@property (class, readonly, nonatomic, getter=isNeuralEngineSupported) BOOL neuralEngineSupported;

@property (nonatomic) BOOL backPressureDrivenPipelining;
@property (readonly, copy, nonatomic) NSDictionary *providedVideoRequirementsByAttachedMediaKey;
@property (readonly, nonatomic) BOOL requiresDeviceOrientationMetadata;
@property (readonly, nonatomic, getter=isConfiguredForInference) BOOL configuredForInference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (unsigned int)allowedBufferCompressionDirectionForExecutionTarget:(int)a0;

- (int)prewarmInferencesUsingLimitedMemory:(BOOL)a0;
- (int)enableIntermediateBufferSharingWithNetworksLoadedFromPath:(id)a0;
- (void)dealloc;
- (id)newMetalEvent;
- (id)defaultDeviceMetalContext;
- (int)prepareForInferenceWithFormatProvider:(id)a0 pixelBufferPoolProvider:(id)a1;
- (int)prepareForInferenceWithFormatProvider:(id)a0;
- (id)initWithScheduler:(id)a0 priority:(unsigned int)a1;
- (id)espressoContextForExecutionTarget:(int)a0;
- (int)prepareForInputInferenceVideoFormat:(id)a0 attachedMediaKey:(id)a1;
- (id)initWithScheduler:(id)a0 priority:(unsigned int)a1 shareIntermediateBuffer:(BOOL)a2;
- (id)metalCommandBuffer;
- (int)performInferencesOnSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 attachingResultsToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (int)performInferencesOnSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 attachingResultsToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 skippingInferencesWithTypes:(id)a2;
- (int)addInferenceOfType:(int)a0 version:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a1 configuration:(id)a2;
- (id)visionContextForExecutionTarget:(int)a0;
- (int)prepareForInputVideoFormat:(id)a0 attachedMediaKey:(id)a1;

@end
