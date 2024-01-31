@interface MPSCNNFullyConnected : MPSCNNConvolution

- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)dealloc;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 paddingMethod:(unsigned long long)a2 sourceOffset:(struct { long long x0; long long x1; long long x2; } *)a3 kernelOffset:(struct { long long x0; long long x1; long long x2; } *)a4;
- (id)initWithDevice:(id)a0 convolutionDescriptor:(id)a1 kernelWeights:(const float *)a2 biasTerms:(const float *)a3 flags:(unsigned long long)a4;
- (id)initWithDevice:(id)a0 weights:(id)a1 fullyConnected:(BOOL)a2 convolutionTranspose:(BOOL)a3;
- (id)initWithDevice:(id)a0 weights:(id)a1 fullyConnected:(BOOL)a2;
- (id)initWithDevice:(id)a0 weights:(id)a1;
- (id)initWithDevice:(id)a0 convolutionDescriptor:(id)a1 kernelWeights:(const float *)a2 biasTerms:(const float *)a3 flags:(unsigned long long)a4 fullyConnected:(BOOL)a5 convolutionTranspose:(BOOL)a6;
- (id)initWithDevice:(id)a0;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 paddingMethod:(unsigned long long)a2 sourceOffset:(struct { long long x0; long long x1; long long x2; } *)a3;
- (id)initWithDevice:(id)a0 convolutionDescriptor:(id)a1 kernelWeights:(const float *)a2 biasTerms:(const float *)a3 flags:(unsigned long long)a4 fullyConnected:(BOOL)a5;

@end
