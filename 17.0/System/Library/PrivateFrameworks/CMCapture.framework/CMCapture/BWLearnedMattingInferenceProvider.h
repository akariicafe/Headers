@class BWInferenceVideoRequirement, FigLearnedMattingMetalStage;

@interface BWLearnedMattingInferenceProvider : BWTiledEspressoInferenceProvider {
    BWInferenceVideoRequirement *_inputImageVideoRequirement;
    BWInferenceVideoRequirement *_inputAlphaVideoRequirement;
    BWInferenceVideoRequirement *_outputAlphaVideoRequirement;
    BWInferenceVideoRequirement *_outputLowResSegmentationCloneVideoRequirement;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    struct opaqueCMFormatDescription { } *_outputLowResSegmentationCloneFormatDescription;
    BOOL _appliesFinalCropRect;
    FigLearnedMattingMetalStage *_metalProcessor;
    struct OpaqueVTPixelTransferSession { } *_lowResSegmentationCloneCopySession;
    void /* unknown type, empty encoding */ _outputTileSize;
    void /* unknown type, empty encoding */ _inputTileSize;
    void /* unknown type, empty encoding */ _inputAlphaScale;
    void /* unknown type, empty encoding */ _outputTileOverlap;
    void /* unknown type, empty encoding */ _inputTileOverlap;
    void /* unknown type, empty encoding */ _numTiles;
}

+ (void)initialize;

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
