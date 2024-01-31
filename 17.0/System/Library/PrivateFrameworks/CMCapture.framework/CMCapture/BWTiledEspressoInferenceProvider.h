@class NSSet, NSArray, NSString, BWEspressoInferenceProvider, NSObject, BWTiledEspressoInferenceConfiguration;
@protocol BWInferenceResourceProvider, BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, OS_dispatch_queue, BWInferenceExecutable;

@interface BWTiledEspressoInferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable, BWInferencePropagatable> {
    NSArray *_inputVideoRequirements;
    NSArray *_outputVideoRequirements;
    NSArray *_tileInputVideoRequirements;
    NSArray *_tileInputBindingNames;
    NSArray *_tileOutputVideoRequirements;
    NSArray *_tileOutputBindingNames;
    NSArray *_additionalVideoRequirements;
    void /* unknown type, empty encoding */ _maxTileCount;
    BWEspressoInferenceProvider *_espressoProvider;
    NSObject<OS_dispatch_queue> *_espressoWorkQueue;
    BWTiledEspressoInferenceConfiguration *_configuration;
    id<BWInferenceResourceProvider> _resourceProvider;
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
+ (id)videoFormatWithPixelFormat:(SEL)a0 size:(unsigned int)a1;
+ (id)videoFormatWithPixelFormat:(SEL)a0 size:(unsigned int)a1 appliesFinalCropRect:(BOOL)a2;
+ (id)videoFormatWithPixelFormat:(SEL)a0 size:(unsigned int)a1 includesInvalidContent:(BOOL)a2;
+ (id)videoFormatWithPixelFormat:(SEL)a0 size:(unsigned int)a1 includesInvalidContent:(BOOL)a2 appliesFinalCropRect:(BOOL)a3;
+ (id)videoFormatWithPixelFormat:(SEL)a0 size:(unsigned int)a1 sliceCount:(unsigned int)a2;
+ (id)videoFormatWithPixelFormat:(SEL)a0 size:(unsigned int)a1 sliceCount:(unsigned int)a2 appliesFinalCropRect:(BOOL)a3;
+ (id)videoFormatWithPixelFormat:(SEL)a0 size:(unsigned int)a1 sliceCount:(unsigned int)a2 includesInvalidContent:(BOOL)a3;
+ (id)videoFormatWithPixelFormat:(SEL)a0 size:(unsigned int)a1 sliceCount:(unsigned int)a2 includesInvalidContent:(BOOL)a3 appliesFinalCropRect:(BOOL)a4;

- (void)propagateInferenceResultsToInferenceDictionary:(id)a0 usingStorage:(id)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3;
- (int)prewarmUsingLimitedMemory:(BOOL)a0;
- (id)newStorage;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withSubmissionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 workQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (void).cxx_destruct;
- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (int)createInputTiles:(SEL)a0 withInputs:(id)a1 atPosition:(id)a2 cmdBuffer:(id *)a3;
- (id)initWithConfiguration:(id)a0 inputVideoRequirements:(id)a1 outputVideoRequirements:(id)a2 resourceProvider:(id)a3;
- (int)loadNetworkWithURL:(SEL)a0 configName:(id)a1 inferenceType:(id)a2 maxTileCount:(int)a3 inputFormatsByBindingName:(id)a4 outputFormatsByBindingName:(id)a5 additionalVideoRequirements:(id)a6;
- (int)preProcessOutputBuffer:(struct __CVBuffer { } *)a0 forMediaKey:(id)a1;
- (int)propagateInferenceResultForOutputRequirement:(id)a0 storage:(id)a1 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2;
- (int)purgeIntermediateResources;
- (int)submitForSampleBuffer:(SEL)a0 usingStorage:(struct opaqueCMSampleBuffer { } *)a1 withSubmissionTime:(id)a2 workQueue:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 completionHandler:(id)a4 currentTileCount:(id /* block */)a5;
- (int)writeOutputFor:(SEL)a0 to:(id)a1 fromNetworkOutputTiles:(struct __CVBuffer { } *)a2 withAdditionalPixelBuffers:(id)a3 withInputTilePixelBuffers:(id)a4 withInputFullPixelBuffers:(id)a5 atPosition:(id)a6 cmdBuffer:(id *)a7;

@end
