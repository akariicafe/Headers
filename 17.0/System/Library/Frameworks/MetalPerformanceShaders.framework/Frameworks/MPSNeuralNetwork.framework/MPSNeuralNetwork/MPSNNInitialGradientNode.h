@interface MPSNNInitialGradientNode : MPSNNFilterNode

+ (id)nodeWithSource:(id)a0;

- (id)initWithSource:(id)a0;
- (id)gradientFilterWithSources:(id)a0;
- (id)trainingGraphWithSourceGradient:(id)a0 nodeHandler:(id /* block */)a1;
- (void *)newFilterNode;

@end
