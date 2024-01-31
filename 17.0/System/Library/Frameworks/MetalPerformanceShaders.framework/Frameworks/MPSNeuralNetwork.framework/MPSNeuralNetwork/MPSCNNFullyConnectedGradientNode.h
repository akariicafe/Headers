@interface MPSCNNFullyConnectedGradientNode : MPSCNNConvolutionGradientNode

+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 convolutionGradientState:(id)a2 weights:(id)a3;

- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 convolutionGradientState:(id)a2 weights:(id)a3;
- (void *)newFilterNode;

@end
