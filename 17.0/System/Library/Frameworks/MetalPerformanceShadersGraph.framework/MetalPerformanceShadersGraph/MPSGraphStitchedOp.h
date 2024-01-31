@class NSArray, MPSGraphTensor;

@interface MPSGraphStitchedOp : MPSGraphOperation {
    id /* block */ _stitchingBlock;
    MPSGraphTensor *_finalOutputTensorForStitchedRegion;
    NSArray *_opsAddedInStitchedRegion;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 withBlock:(id /* block */)a1 inputTensors:(id)a2 controlDependencies:(id)a3 name:(id)a4;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (void)recurseOperation:(id)a0 builder:(void *)a1 symbolTable:(void *)a2 tensorToValueMap:(void *)a3 operationsRecursed:(id)a4;

@end
