@class NSArray;

@interface MPSGraphStridedSliceOp : MPSGraphOperation {
    NSArray *_starts;
    NSArray *_ends;
    NSArray *_strides;
    unsigned int _begin_mask;
    unsigned int _end_mask;
    unsigned int _shrink_axis_mask;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 starts:(id)a3 ends:(id)a4 strides:(id)a5 startMask:(unsigned int)a6 endMask:(unsigned int)a7 shrinkAxisMask:(unsigned int)a8 name:(id)a9;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativeForInputTensor:(id)a0 incomingGradient:(id)a1 inputIndex:(unsigned long long)a2 name:(id)a3;

@end
