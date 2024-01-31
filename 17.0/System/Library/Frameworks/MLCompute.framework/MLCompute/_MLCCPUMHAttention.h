@interface _MLCCPUMHAttention : _MLCCPULayer

+ (id)layerWithDevice:(id)a0 descriptor:(id)a1 weights:(id)a2 bias:(id)a3 attnBias:(id)a4 inferenceOnly:(BOOL)a5;
+ (BOOL)setOptimizerDataForDevice:(id)a0 deviceOps:(id)a1 dataForWeights:(id)a2 dataForBias:(id)a3;
+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;

- (id)initWithDevice:(id)a0 descriptor:(id)a1 weights:(id)a2 bias:(id)a3 attnBias:(id)a4 inferenceOnly:(BOOL)a5;

@end
