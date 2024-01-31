@class MPSGraphVariableOp, MPSGraphTensor;

@interface MPSGraphAdamOptimizer : MPSGraphOptimizer {
    MPSGraphTensor *_beta1Tensor;
    MPSGraphTensor *_beta2Tensor;
    MPSGraphTensor *_epsilonTensor;
    MPSGraphVariableOp *_iterationsVariable;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 learningRateTensor:(id)a1 momentumTensors:(id)a2 velocityTensors:(id)a3 maximumVelocityTensors:(id)a4 beta1:(float)a5 beta2:(float)a6 epsilon:(float)a7 iterations:(unsigned long long)a8 trainableVariables:(id)a9 variablesToGradientTensorMap:(id)a10 name:(id)a11;
- (id)initWithGraph:(id)a0 learningRateTensor:(id)a1 trainableVariables:(id)a2 variablesToGradientTensorMap:(id)a3 name:(id)a4;
- (id)initWithGraph:(id)a0 lossTensor:(id)a1 learningRateTensor:(id)a2 beta1:(float)a3 beta2:(float)a4 epsilon:(float)a5 iterations:(unsigned long long)a6 trainableVariables:(id)a7 name:(id)a8;
- (id)initWithGraph:(id)a0 lossTensor:(id)a1 learningRateTensor:(id)a2 momentumTensors:(id)a3 velocityTensors:(id)a4 maximumVelocityTensors:(id)a5 beta1:(float)a6 beta2:(float)a7 epsilon:(float)a8 iterations:(unsigned long long)a9 trainableVariables:(id)a10 name:(id)a11;
- (id)initWithGraph:(id)a0 lossTensor:(id)a1 learningRateTensor:(id)a2 trainableVariables:(id)a3 name:(id)a4;

@end
