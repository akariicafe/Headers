@interface MPSGraphRandomUniformOp : MPSGraphOperation {
    unsigned int _dataType;
    float _maximum;
    float _minimum;
    unsigned long long _minInteger;
    unsigned long long _maxInteger;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 descriptor:(id)a3 name:(id)a4;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativeForInputTensor:(id)a0 incomingGradient:(id)a1 inputIndex:(unsigned long long)a2 name:(id)a3;

@end
