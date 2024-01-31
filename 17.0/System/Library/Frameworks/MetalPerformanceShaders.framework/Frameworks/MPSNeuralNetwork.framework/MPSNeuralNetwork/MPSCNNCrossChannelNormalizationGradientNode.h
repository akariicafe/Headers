@interface MPSCNNCrossChannelNormalizationGradientNode : MPSNNGradientFilterNode

@property (readonly, nonatomic) unsigned long long kernelSize;

+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 kernelSize:(unsigned long long)a3;

- (id)initWithGradientImages:(id)a0 forwardFilter:(id)a1;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 kernelSize:(unsigned long long)a3;
- (void *)newFilterNode;

@end
