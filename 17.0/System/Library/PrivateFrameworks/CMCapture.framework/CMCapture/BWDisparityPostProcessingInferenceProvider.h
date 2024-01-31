@class MTLTextureDescriptor, NSSet, NSArray, NSString, BWInferenceVideoRequirement, PTDisparityPostProcessing, BWMetalInferenceContext;
@protocol BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, BWInferenceExecutable;

@interface BWDisparityPostProcessingInferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable, BWInferencePropagatable> {
    BWInferenceVideoRequirement *_displacementInputRequirement;
    BWInferenceVideoRequirement *_disparityInputRequirement;
    BWInferenceVideoRequirement *_disparityOutputRequirement;
    BWInferenceVideoRequirement *_stateInputRequirement;
    BWInferenceVideoRequirement *_stateOutputRequirement;
    PTDisparityPostProcessing *_disparityPostProcessor;
    BWMetalInferenceContext *_metalInferenceContext;
    MTLTextureDescriptor *_disparityInputDescriptor;
    MTLTextureDescriptor *_disparityOutputDescriptor;
    MTLTextureDescriptor *_displacementDescriptor;
    MTLTextureDescriptor *_stateInDescriptor;
    MTLTextureDescriptor *_stateOutDescriptor;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    NSString *_portType;
    unsigned long long _concurrencyWidth;
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
- (id)initWithDisparityInputRequirement:(id)a0 displacementInputRequirement:(id)a1 stateInputRequirement:(id)a2 stateOutputRequirement:(id)a3 disparityOutputRequirement:(id)a4 portType:(id)a5 resourceProvider:(id)a6 configuration:(id)a7;

@end
