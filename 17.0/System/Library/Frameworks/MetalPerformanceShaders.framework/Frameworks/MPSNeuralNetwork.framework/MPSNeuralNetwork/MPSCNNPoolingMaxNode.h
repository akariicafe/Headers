@interface MPSCNNPoolingMaxNode : MPSCNNPoolingNode

- (Class)gradientClass;
- (void *)newFilterNode;

@end
