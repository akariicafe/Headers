@class GDCTransform, NSSet, NSArray, NSString, BWInferenceVideoRequirement, BWMetalInferenceContext, MTLTextureDescriptor;
@protocol BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, MTLComputePipelineState, BWInferenceExecutable;

@interface BWDerectificationInferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable, BWInferencePropagatable> {
    BWInferenceVideoRequirement *_inputRequirement;
    BWInferenceVideoRequirement *_outputRequirement;
    BWMetalInferenceContext *_metalInferenceContext;
    MTLTextureDescriptor *_inputDescriptor;
    MTLTextureDescriptor *_outputDescriptor;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    id<MTLComputePipelineState> _cropPipelineState;
    unsigned long long _concurrencyWidth;
    BOOL _applyRollingShutterCorrection;
    float _canonicalDisparityScaleFactorOverride;
    GDCTransform *_gdcTransform;
}

@property (readonly, nonatomic) int executionTarget;
@property (readonly, copy, nonatomic) NSSet *preventionReasons;
@property (readonly, nonatomic) NSArray *inputVideoRequirements;
@property (readonly, nonatomic) NSArray *outputVideoRequirements;
@property (readonly, nonatomic) NSArray *cloneVideoRequirements;
@property (readonly, nonatomic) NSArray *inputMetadataRequirements;
@property (readonly, nonatomic) NSArray *outputMetadataRequirements;
@property (readonly, nonatomic) unsigned int allowedPixelBufferCompressionDirection;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) id<BWInferenceExecutable> executable;
@property (readonly, nonatomic) id<BWInferenceSubmittable> submittable;
@property (readonly, nonatomic) id<BWInferenceExtractable> extractable;
@property (readonly, nonatomic) id<BWInferencePropagatable> propagatable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL allowsAsyncPropagation;

+ (void)initialize;

- (void)propagateInferenceResultsToInferenceDictionary:(id)a0 usingStorage:(id)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3;
- (int)prewarmUsingLimitedMemory:(BOOL)a0;
- (id)newStorage;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withSubmissionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 workQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (id)initWithInputRequirement:(id)a0 outputRequirement:(id)a1 resourceProvider:(id)a2 configuration:(id)a3;

@end
