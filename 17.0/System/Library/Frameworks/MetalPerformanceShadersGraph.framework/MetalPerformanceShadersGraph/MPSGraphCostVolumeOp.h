@interface MPSGraphCostVolumeOp : MPSGraphOperation {
    BOOL _normalizeCoordinates;
    BOOL _relativeCoordinates;
    BOOL _alignCorners;
    BOOL _coordinateIs1DInWidth;
    long long _paddingMode;
    unsigned long long _samplingMode;
    unsigned long long _nearestRoundingMode;
    unsigned long long _layout;
    unsigned long long _similarity;
    unsigned long long _windowWidth;
    unsigned long long _windowHeight;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 layout:(unsigned long long)a3 normalizeCoordinates:(BOOL)a4 relativeCoordinates:(BOOL)a5 alignCorners:(BOOL)a6 coordinateIs1DInWidth:(BOOL)a7 paddingMode:(long long)a8 samplingMode:(unsigned long long)a9 nearestRoundingMode:(unsigned long long)a10 similarityType:(unsigned long long)a11 windowWidth:(unsigned long long)a12 windowHeight:(unsigned long long)a13 name:(id)a14;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativeForInputTensor:(id)a0 incomingGradient:(id)a1 inputIndex:(unsigned long long)a2 name:(id)a3;

@end
