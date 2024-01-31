@interface MPSGraphNonMaximumSuppressionOp : MPSGraphOperation {
    float _iouThreshold;
    float _scoreThreshold;
    BOOL _perClassSuppression;
    unsigned long long _coordinateMode;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 iouThreshold:(float)a3 scoreThreshold:(float)a4 perClassSuppression:(BOOL)a5 coordinateMode:(unsigned long long)a6 name:(id)a7;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativeForInputTensor:(id)a0 incomingGradient:(id)a1 inputIndex:(unsigned long long)a2 name:(id)a3;

@end
