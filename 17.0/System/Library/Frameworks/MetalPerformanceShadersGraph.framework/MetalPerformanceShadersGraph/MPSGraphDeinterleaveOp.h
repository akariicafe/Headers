@interface MPSGraphDeinterleaveOp : MPSGraphOperation {
    unsigned long long _interleaveFactor;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 interleaveFactor:(unsigned long long)a3 name:(id)a4;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;

@end
