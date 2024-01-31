@interface MPSGraphMaxWithIndicesPool4DOp : MPSGraphPooling4DBaseOp

- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativesForInputTensors:(id)a0 incomingGradients:(id)a1 name:(id)a2;

@end
