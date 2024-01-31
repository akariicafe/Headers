@interface MPSNDArrayQuantizedMatrixMultiplication : MPSNDArrayMatrixMultiplication

+ (BOOL)supportsDestinationQuantizationWithDescriptor:(id)a0 device:(void *)a1;
+ (BOOL)supportsSourceQuantizationWithDescriptor:(id)a0 atIndex:(unsigned long long)a1 device:(void *)a2;

- (id)initWithDevice:(id)a0 leftQuantizationDescriptor:(id)a1 rightQuantizationDescriptor:(id)a2 sourceCount:(unsigned long long)a3;
- (id)encodePreProcessingToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceArrays:(id)a2 destinationArray:(id *)a3 kernelDAGObject:(id *)a4;
- (id)initWithDevice:(id)a0 leftQuantizationDescriptor:(id)a1 rightQuantizationDescriptor:(id)a2;
- (id)workloadStatisticsForSourceArrays:(id)a0 destArrays:(id)a1 kernel:(id)a2 kernelDAGObject:(id)a3 sourceState:(id)a4;

@end
