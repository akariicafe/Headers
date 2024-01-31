@class SIScaler, SIImageInputData, SIPeopleSegmentation;

@interface SIPeopleSegmentationAlgorithm : SIAlgorithm {
    SIPeopleSegmentation *_model;
    SIScaler *_scaler;
    SIImageInputData *_inputData;
}

+ (BOOL)supportsANE;
+ (Class)outputDataClass;
+ (Class)inputDataClass;

- (void).cxx_destruct;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1;
- (id)initWithNetworkConfiguration:(id)a0;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1;
- (void)setSnapEveryFrameCount:(unsigned char)a0;
- (long long)switchConfiguration:(unsigned long long)a0;
- (long long)_inferenceWithInput:(id)a0 output:(id)a1;
- (long long)_postprocessingOutput:(id)a0;
- (long long)_preprocessingInputData:(id)a0;
- (id)initWithComputeEngine:(long long)a0;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1 useAppleNeuralEngineFramework:(BOOL)a2;
- (id)initWithInputResolution:(struct CGSize { double x0; double x1; })a0;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 networkConfiguration:(long long)a2;

@end
