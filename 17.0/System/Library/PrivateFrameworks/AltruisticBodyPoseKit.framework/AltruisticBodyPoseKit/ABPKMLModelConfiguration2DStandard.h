@class NSString;

@interface ABPKMLModelConfiguration2DStandard : ABPKMLModelConfiguration2D {
    NSString *_mlModelPath;
}

- (id)init;
- (float)scale;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })inputDimensions;
- (id)inputTensorNames;
- (id)outputTensorNames;
- (unsigned int)heatMapChannels;
- (BOOL)networkWantsBGR;
- (unsigned int)affinityMapChannels;
- (BOOL)applyPreProcessing;
- (float)biasB;
- (float)biasG;
- (float)biasR;
- (id)compiledMLModelPath;
- (id)configStringForABPKDeviceOrientation:(long long)a0;
- (struct CGSize { double x0; double x1; })inputDimensionsForABPKDeviceOrientation:(long long)a0;
- (BOOL)networkEstimatesAffinityMaps;

@end
