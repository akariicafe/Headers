@class NSDictionary, SISceneSegmentationNetworkConfiguration;

@interface SISceneSegmentation : SIModel <SITraceable> {
    SISceneSegmentationNetworkConfiguration *_configuration;
    float *_uncertaintyThresholds;
    float *_probabilityThresholds;
    BOOL _supportUncertainty;
    char *_modelToGlobalMapping;
}

@property (class, readonly, nonatomic) NSDictionary *tracingEntryFormat;

@property (readonly, nonatomic) NSDictionary *tracingEntry;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })getOutputResolution;
- (id)initWithNetworkConfiguration:(id)a0;
- (void)_initializeUncertaintyThresholds:(float)a0;
- (long long)evaluateSemanticForImage:(struct __CVBuffer { } *)a0 depthInput:(struct __CVBuffer { } *)a1 semanticOutput:(struct __IOSurface { } *)a2 confidenceOutput:(struct __IOSurface { } *)a3 uncertaintyOutput:(struct __IOSurface { } *)a4;
- (long long)evaluateSemanticForImageData:(id)a0 output:(id)a1;
- (struct CGSize { double x0; double x1; })getInputResolution;
- (long long)postprocessingIOSSemanticOutput:(struct __IOSurface { } *)a0 confidenceOutput:(struct __IOSurface { } *)a1 uncertaintyOutput:(struct __IOSurface { } *)a2;
- (long long)postprocessingOutput:(id)a0;
- (long long)postprocessingSemanticOutput:(struct __IOSurface { } *)a0 confidenceOutput:(struct __IOSurface { } *)a1;
- (long long)postprocessingSemanticOutput:(struct __IOSurface { } *)a0 confidenceOutput:(struct __IOSurface { } *)a1 uncertaintyOutput:(struct __IOSurface { } *)a2;
- (BOOL)supportUncertainty;

@end
