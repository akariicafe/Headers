@class BWInferenceVideoRequirement, BWDeepZoomInferenceConfiguration, NSMutableArray;
@protocol CMIDeepZoomProcessor;

@interface BWDeepZoomInferenceProvider : BWTiledEspressoInferenceProvider {
    BWDeepZoomInferenceConfiguration *_inferenceConfig;
    NSMutableArray *_inputVideoRequirements;
    BWInferenceVideoRequirement *_outputVideoRequirement;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    struct { int width; int height; } _inputReferencePixelBufferDimensions;
    id<CMIDeepZoomProcessor> _deepZoomProcessor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _normalizedInputCropRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _adjustedNormalizedInputCropRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _normalizedInputHighResCropRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _denormalizedSourceCropRect;
}

+ (void)initialize;

- (int)prewarmUsingLimitedMemory:(BOOL)a0;
- (unsigned int)allowedPixelBufferCompressionDirection;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withSubmissionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 workQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (int)type;
- (int)createInputTiles:(SEL)a0 withInputs:(id)a1 atPosition:(id)a2 cmdBuffer:(id *)a3;
- (id)initWithConfiguration:(id)a0 resourceProvider:(id)a1;
- (int)preProcessOutputBuffer:(struct __CVBuffer { } *)a0 forMediaKey:(id)a1;
- (int)propagateInferenceResultForOutputRequirement:(id)a0 storage:(id)a1 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2;
- (int)purgeIntermediateResources;
- (int)writeOutputFor:(SEL)a0 to:(id)a1 fromNetworkOutputTiles:(struct __CVBuffer { } *)a2 withAdditionalPixelBuffers:(id)a3 withInputTilePixelBuffers:(id)a4 withInputFullPixelBuffers:(id)a5 atPosition:(id)a6 cmdBuffer:(id *)a7;

@end
