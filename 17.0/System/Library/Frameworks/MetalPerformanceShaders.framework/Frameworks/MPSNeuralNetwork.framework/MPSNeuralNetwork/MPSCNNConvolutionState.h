@class NSString;

@interface MPSCNNConvolutionState : MPSState <MPSImageSizeEncodingState>

@property (readonly, nonatomic) unsigned long long kernelWidth;
@property (readonly, nonatomic) unsigned long long kernelHeight;
@property (readonly, nonatomic) struct { long long x; long long y; long long z; } sourceOffset;
@property (readonly, nonatomic) unsigned long long sourceWidth;
@property (readonly, nonatomic) unsigned long long sourceHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 forKernel:(id)a2 suggestedDescriptor:(id)a3;
- (id)initWithSourceWidth:(unsigned long long)a0 sourceHeight:(unsigned long long)a1 kernelWidth:(unsigned long long)a2 kernelHeight:(unsigned long long)a3 sourceOffset:(struct { long long x0; long long x1; long long x2; })a4;

@end
