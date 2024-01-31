@interface _MLCCPUFullyConnected : _MLCCPULayer

+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;
+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3 fusedBatchNormAndNeuron:(BOOL)a4;
+ (id)layerWithDevice:(id)a0 weights:(id)a1 biasTerms:(id)a2 convolutionDescriptor:(id)a3 neuronDescriptor:(id)a4 fusedBatchNormAndNeuronLayers:(BOOL)a5 mean:(id)a6 variance:(id)a7 beta:(id)a8 gamma:(id)a9 varianceEpsilon:(float)a10 momentum:(float)a11 opType:(int)a12;
+ (id)layerWithDevice:(id)a0 weights:(id)a1 biasTerms:(id)a2 convolutionDescriptor:(id)a3 neuronDescriptor:(id)a4 opType:(int)a5;

- (id)initWithDevice:(id)a0 weights:(id)a1 biasTerms:(id)a2 convolutionDescriptor:(id)a3 neuronDescriptor:(id)a4 fusedBatchNormAndNeuronLayers:(BOOL)a5 mean:(id)a6 variance:(id)a7 beta:(id)a8 gamma:(id)a9 varianceEpsilon:(float)a10 momentum:(float)a11 opType:(int)a12;

@end
