@interface MPSCNNSpatialNormalizationNode : MPSCNNNormalizationNode

@property (nonatomic) unsigned long long kernelWidth;
@property (nonatomic) unsigned long long kernelHeight;

+ (id)nodeWithSource:(id)a0 kernelSize:(unsigned long long)a1;

- (id)initWithSource:(id)a0;
- (Class)gradientClass;
- (id)initWithSource:(id)a0 kernelSize:(unsigned long long)a1;
- (void *)newFilterNode;

@end
