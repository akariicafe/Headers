@interface MPSCNNDropoutGradientNode : MPSNNGradientFilterNode

@property (readonly, nonatomic) float keepProbability;
@property (readonly, nonatomic) unsigned long long seed;
@property (readonly, nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } maskStrideInPixels;

+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 keepProbability:(float)a3 seed:(unsigned long long)a4 maskStrideInPixels:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a5;

- (id)initWithGradientImages:(id)a0 forwardFilter:(id)a1;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 keepProbability:(float)a3 seed:(unsigned long long)a4 maskStrideInPixels:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a5;
- (void *)newFilterNode;

@end
