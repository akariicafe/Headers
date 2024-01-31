@interface MPSCNNFullyConnectedNode : MPSCNNConvolutionNode

+ (id)nodeWithSource:(id)a0 weights:(id)a1;

- (Class)gradientClass;
- (id)initWithSource:(id)a0 weights:(id)a1;
- (void *)newFilterNode;

@end
