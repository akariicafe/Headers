@interface _MLCCPULSTM : _MLCCPULayer

+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;
+ (id)layerWithDevice:(id)a0 lstmDescriptor:(id)a1 inputWeights:(id)a2 hiddenWeights:(id)a3 peepholeWeights:(id)a4 biasTerms:(id)a5 gateActivations:(id)a6 ouputResultActivation:(id)a7 inferenceOnly:(BOOL)a8;
+ (BOOL)setOptimizerDataForDevice:(id)a0 deviceOps:(id)a1 dataForInputWeights:(id)a2 dataForHiddenWeights:(id)a3 dataForPeepholeWeights:(id)a4 dataForBias:(id)a5;

- (id)initWithDevice:(id)a0 lstmDescriptor:(id)a1 inputWeights:(id)a2 hiddenWeights:(id)a3 peepholeWeights:(id)a4 biasTerms:(id)a5 gateActivations:(id)a6 outputResultActivation:(id)a7 inferenceOnly:(BOOL)a8;

@end
