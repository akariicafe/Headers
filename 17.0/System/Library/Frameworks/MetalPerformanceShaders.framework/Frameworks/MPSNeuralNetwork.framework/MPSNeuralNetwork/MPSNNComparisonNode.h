@interface MPSNNComparisonNode : MPSNNBinaryArithmeticNode

@property (nonatomic) unsigned long long comparisonType;

- (Class)gradientClass;
- (void *)newFilterNode;

@end
