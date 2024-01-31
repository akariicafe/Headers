@interface MPSCNNPoolingNode : MPSNNFilterNode

@property (readonly, nonatomic) unsigned long long kernelWidth;
@property (readonly, nonatomic) unsigned long long kernelHeight;
@property (readonly, nonatomic) unsigned long long strideInPixelsX;
@property (readonly, nonatomic) unsigned long long strideInPixelsY;

+ (id)nodeWithSource:(id)a0 filterSize:(unsigned long long)a1 stride:(unsigned long long)a2;
+ (id)nodeWithSource:(id)a0 filterSize:(unsigned long long)a1;

- (id)initWithSource:(id)a0 kernelWidth:(unsigned long long)a1 kernelHeight:(unsigned long long)a2 strideInPixelsX:(unsigned long long)a3 strideInPixelsY:(unsigned long long)a4;
- (id)initWithSource:(id)a0 filterSize:(unsigned long long)a1;
- (id)initWithSource:(id)a0 filterSize:(unsigned long long)a1 stride:(unsigned long long)a2;
- (void *)newFilterNode;

@end
