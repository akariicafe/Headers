@interface MPSCNNDilatedPoolingMaxGradientNode : MPSCNNPoolingGradientNode

@property (readonly, nonatomic) unsigned long long dilationRateX;
@property (readonly, nonatomic) unsigned long long dilationRateY;

+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 kernelWidth:(unsigned long long)a3 kernelHeight:(unsigned long long)a4 strideInPixelsX:(unsigned long long)a5 strideInPixelsY:(unsigned long long)a6 dilationRateX:(unsigned long long)a7 dilationRateY:(unsigned long long)a8;

- (id)initWithGradientImages:(id)a0 forwardFilter:(id)a1;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 kernelWidth:(unsigned long long)a3 kernelHeight:(unsigned long long)a4 strideInPixelsX:(unsigned long long)a5 strideInPixelsY:(unsigned long long)a6 dilationRateX:(unsigned long long)a7 dilationRateY:(unsigned long long)a8;
- (void *)newFilterNode;

@end
