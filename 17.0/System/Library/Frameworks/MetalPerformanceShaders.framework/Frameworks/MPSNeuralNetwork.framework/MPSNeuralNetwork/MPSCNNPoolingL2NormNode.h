@interface MPSCNNPoolingL2NormNode : MPSCNNPoolingNode

- (Class)gradientClass;
- (void *)newFilterNode;

@end
