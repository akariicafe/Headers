@class NSString, SISceneSegmentationNetworkConfiguration, SIScaler, SISceneSegmentation, SIImageInputData;

@interface SISceneSegmentationAlgorithm : SIAlgorithm <SIVisualLoggerSupporting> {
    SIScaler *_scalerOne;
    SIScaler *_depthScaler;
    double _frameTimestamp;
    SISceneSegmentation *_model;
    SIImageInputData *_inputData;
}

@property (readonly, nonatomic) SISceneSegmentationNetworkConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)outputDataClass;
+ (struct CGSize { double x0; double x1; })getOutputResolution:(long long)a0;
+ (Class)inputDataClass;
+ (id)subLoggers;

- (void).cxx_destruct;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1 uncertaintyThreshold:(float)a2;
- (id)initWithNetworkConfiguration:(id)a0;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 confidenceOutput:(struct __IOSurface { } *)a2 uncertaintyOutput:(struct __IOSurface { } *)a3 resampleOutput:(BOOL)a4 networkConfiguration:(long long)a5;
- (long long)switchConfiguration:(unsigned long long)a0;
- (long long)_inferenceWithInput:(id)a0 output:(id)a1;
- (long long)_postprocessingOutput:(id)a0;
- (long long)_preprocessingInputData:(id)a0;
- (BOOL)supportUncertainty;

@end
