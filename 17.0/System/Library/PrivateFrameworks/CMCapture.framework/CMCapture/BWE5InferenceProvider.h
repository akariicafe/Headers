@class NSSet, NSString, NSURL, NSMutableDictionary, NSMutableArray;
@protocol BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, BWEspressoInferenceTensorMemoryProvider, BWInferenceExecutable;

@interface BWE5InferenceProvider : NSObject <BWInferenceProvider, BWInferenceExecutable, BWInferenceSubmittable, BWEspressoInferenceBinding, BWEspressoInferencePropagatable> {
    NSURL *_networkURL;
    int _anePriority;
    id<BWInferencePropagatable> _propagator;
    NSMutableDictionary *_bindingNamesByRequirement;
}

@property (readonly, nonatomic) int executionTarget;
@property (readonly, copy, nonatomic) NSSet *preventionReasons;
@property (readonly, nonatomic) NSMutableArray *inputVideoRequirements;
@property (readonly, nonatomic) NSMutableArray *outputVideoRequirements;
@property (readonly, nonatomic) NSMutableArray *cloneVideoRequirements;
@property (readonly, nonatomic) NSMutableArray *inputMetadataRequirements;
@property (readonly, nonatomic) NSMutableArray *outputMetadataRequirements;
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
@property (retain, nonatomic) id<BWEspressoInferenceTensorMemoryProvider> tensorMemoryProvider;

+ (void)initialize;

- (int)prewarmUsingLimitedMemory:(BOOL)a0;
- (id)newStorage;
- (int)prepareForExecution;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withExecutionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (id)bindEspressoInput:(id)a0 fromAttachedMediaUsingKey:(id)a1 withVideoFormat:(id)a2 count:(unsigned long long)a3;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withSubmissionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 workQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (id)bindOutputByCloningInputRequirement:(id)a0 toAttachedMediaUsingKey:(id)a1;
- (id)bindEspressoOutput:(id)a0 asMetadataUsingKeys:(id)a1;
- (void)setPropagatable:(id)a0;
- (id)bindEspressoOutput:(id)a0 asAttachedMediaUsingKey:(id)a1 withVideoFormat:(id)a2 count:(unsigned long long)a3;
- (id)bindEspressoOutput:(id)a0 asMetadataUsingKey:(id)a1;
- (id)bindEspressoInput:(id)a0 fromAttachedMediaUsingKey:(id)a1 withVideoFormat:(id)a2;
- (id)bindEspressoInput:(id)a0 fromMetadataUsingKeys:(id)a1;
- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (id)bindEspressoOutput:(id)a0 asAttachedMediaUsingKey:(id)a1 withVideoFormat:(id)a2;
- (id)bindEspressoOutput:(id)a0 asConsolidatedMetadataUsingKeys:(id)a1;
- (id)initWithType:(int)a0 networkURL:(id)a1 networkConfiguration:(id)a2 context:(id)a3 executionTarget:(int)a4 schedulerPriority:(unsigned int)a5 preventionReasons:(id)a6 resourceProvider:(id)a7 allowedCompressionDirection:(unsigned int)a8;

@end
