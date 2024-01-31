@class BWInferenceVideoRequirement, BWLearnedNRInferenceConfiguration, LearnedNRMetalStage;

@interface BWLearnedNRInferenceProvider : BWTiledEspressoInferenceProvider {
    BWInferenceVideoRequirement *_inputVideoRequirement;
    BWInferenceVideoRequirement *_outputVideoRequirement;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    BWLearnedNRInferenceConfiguration *_configuration;
    LearnedNRMetalStage *_metalStage;
    void /* unknown type, empty encoding */ _numTiles;
    void /* unknown type, empty encoding */ _tileSize;
    struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } _renderROI;
    BOOL _isInputFormatRaw;
}

+ (void)initialize;

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
