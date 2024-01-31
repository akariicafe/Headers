@interface MPSNNReductionSpatialMeanNode : MPSNNUnaryReductionNode

- (Class)gradientClass;
- (void *)newFilterNode;

@end
