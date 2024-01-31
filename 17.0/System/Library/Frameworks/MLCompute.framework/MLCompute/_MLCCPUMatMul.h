@interface _MLCCPUMatMul : _MLCCPULayer

+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;
+ (id)layerWithDevice:(id)a0 descriptor:(id)a1 inferenceOnly:(BOOL)a2;

- (id)initWithDevice:(id)a0 descriptor:(id)a1 inferenceOnly:(BOOL)a2;

@end
