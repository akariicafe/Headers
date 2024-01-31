@interface MPSNNPermuteNode : MPSNNFilterNode {
    struct MPSNNDimensionOrder { unsigned long long dimensions[4]; } _order;
}

+ (id)nodeWithSource:(id)a0 dimensionOrder:(struct MPSNNDimensionOrder { unsigned long long x0[4]; })a1;

- (Class)gradientClass;
- (id)initWithSource:(id)a0 dimensionOrder:(struct MPSNNDimensionOrder { unsigned long long x0[4]; })a1;
- (void *)newFilterNode;

@end
