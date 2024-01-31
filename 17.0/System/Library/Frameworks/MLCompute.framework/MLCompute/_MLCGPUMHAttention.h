@interface _MLCGPUMHAttention : _MLCGPULayer

+ (BOOL)setOptimizerDataForDevice:(id)a0 deviceOps:(id)a1 dataForWeights:(id)a2 dataForBias:(id)a3;
+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;
+ (id)layerWithDevice:(id)a0 desciptor:(id)a1 weights:(id)a2 bias:(id)a3 attnBias:(id)a4 inferenceOnly:(BOOL)a5;
+ (BOOL)setMHAOptimizerDataForDevice:(unsigned long long)a0 deviceOps:(id)a1 dataForWeights:(id)a2 dataForBias:(id)a3 momentumArray:(id)a4 velocityArray:(id)a5 centerWeightArray:(id)a6 weightIndex:(unsigned long long)a7 targetIndex:(unsigned long long)a8 attnBias:(BOOL)a9;

- (id)initWithDevice:(id)a0 desciptor:(id)a1 weights:(id)a2 bias:(id)a3 attnBias:(id)a4 inferenceOnly:(BOOL)a5;

@end
