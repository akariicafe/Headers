@interface MPSNDArrayMultiaryKernel : MPSNDArrayMultiaryBase {
    void /* function */ *_encode;
}

+ (BOOL)supportsPostfixForDevice:(void *)a0;
+ (BOOL)supportsPrefixForDevice:(void *)a0;
+ (BOOL)supportsDestinationQuantizationWithDescriptor:(id)a0 device:(void *)a1;
+ (BOOL)supportsSourceQuantizationWithDescriptor:(id)a0 atIndex:(unsigned long long)a1 device:(void *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)encodeGradientsToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceArrays:(id)a2 sourceGradient:(id)a3 gradientState:(id)a4 destinationGradients:(id)a5 kernelDAGObject:(id)a6;
- (void)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceArrays:(id)a2 destinationArray:(id)a3;
- (void)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceArrays:(id)a2 resultState:(id)a3 destinationArray:(id)a4 kernelDAGObject:(id)a5;
- (id)initWithDevice:(id)a0 sourceCount:(unsigned long long)a1;
- (void)encodeToCommandBuffer:(id)a0 sourceArrays:(id)a1 destinationArray:(id)a2;
- (id)encodeToCommandBuffer:(id)a0 sourceArrays:(id)a1;
- (BOOL)supportsGradientForSourceIndex:(unsigned long long)a0;
- (id)destinationGradientArrayDescriptorsForSourceArrays:(id)a0 sourceGradient:(id)a1 sourceState:(id)a2;
- (id)destinationGradientsSupported;
- (id)encodeGradientsToCommandBuffer:(id)a0 sourceArrays:(id)a1 sourceGradient:(id)a2 gradientState:(id)a3;
- (void)encodeGradientsToCommandBuffer:(id)a0 sourceArrays:(id)a1 sourceGradient:(id)a2 gradientState:(id)a3 destinationGradients:(id)a4;
- (void)encodeGradientsToCommandBuffer:(id)a0 sourceArrays:(id)a1 sourceGradient:(id)a2 gradientState:(id)a3 destinationGradients:(id)a4 kernelDAGObject:(id)a5;
- (id)encodePreProcessingToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceArrays:(id)a2 destinationArray:(id *)a3 kernelDAGObject:(id *)a4;
- (void)encodeToCommandBuffer:(id)a0 sourceArrays:(id)a1 resultState:(id)a2 destinationArray:(id)a3;
- (void)encodeToCommandBuffer:(id)a0 sourceArrays:(id)a1 resultState:(id)a2 destinationArray:(id)a3 kernelDAGObject:(id)a4;
- (id)encodeToCommandBuffer:(id)a0 sourceArrays:(id)a1 resultState:(id *)a2 outputStateIsTemporary:(BOOL)a3;
- (id)firstGradientDestinationFromDestinationGradients:(id)a0 outMaxNumDimensions:(unsigned long long *)a1;

@end
