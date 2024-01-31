@interface MPSCNNConvolutionTransposeGradientNode : MPSCNNConvolutionGradientNode

+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 convolutionTransposeGradientState:(id)a2 weights:(id)a3;

- (id)initWithGradientImages:(id)a0 forwardFilter:(id)a1;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 convolutionTransposeGradientState:(id)a2 weights:(id)a3;
- (void *)newFilterNode;

@end
