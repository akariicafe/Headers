@interface MPSGraphSampleGridOp : MPSGraphOperation {
    BOOL _normalizeCoordinates;
    BOOL _relativeCoordinates;
    BOOL _alignCorners;
    long long _paddingMode;
    unsigned long long _samplingMode;
    unsigned long long _nearestRoundingMode;
    unsigned long long _layout;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 layout:(unsigned long long)a3 normalizeCoordinates:(BOOL)a4 relativeCoordinates:(BOOL)a5 alignCorners:(BOOL)a6 paddingMode:(long long)a7 samplingMode:(unsigned long long)a8 nearestRoundingMode:(unsigned long long)a9 name:(id)a10;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativeForInputTensor:(id)a0 incomingGradient:(id)a1 inputIndex:(unsigned long long)a2 name:(id)a3;

@end
