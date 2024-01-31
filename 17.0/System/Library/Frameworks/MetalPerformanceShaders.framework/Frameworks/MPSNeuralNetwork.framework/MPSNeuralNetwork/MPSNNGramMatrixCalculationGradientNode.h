@interface MPSNNGramMatrixCalculationGradientNode : MPSNNGradientFilterNode

@property (readonly, nonatomic) float alpha;

+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2;
+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 alpha:(float)a3;

- (id)initWithGradientImages:(id)a0 forwardFilter:(id)a1;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 alpha:(float)a3;
- (void *)newFilterNode;

@end
