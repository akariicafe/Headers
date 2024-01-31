@class SIPersonDetector, SIImageInputData, SIScaler;

@interface SIPersonDetectorAlgorithm : SIAlgorithm {
    SIPersonDetector *_model;
    SIScaler *_scaler;
    SIImageInputData *_inputData;
}

+ (BOOL)supportsANE;
+ (Class)outputDataClass;
+ (Class)inputDataClass;

- (void).cxx_destruct;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1;
- (id)initWithNetworkConfiguration:(id)a0;
- (void)runWithInput:(struct __CVBuffer { } *)a0 output:(id)a1;
- (long long)switchConfiguration:(unsigned long long)a0;
- (long long)_inferenceWithInput:(id)a0 output:(id)a1;
- (long long)_postprocessingOutput:(id)a0;
- (long long)_preprocessingInputData:(id)a0;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1 useE5RT:(BOOL)a2;
- (void)runWithInput:(struct __CVBuffer { } *)a0 output:(id)a1 networkConfiguration:(long long)a2;

@end
