@interface MPSNNConcatenationNode : MPSNNFilterNode

+ (id)nodeWithSource:(id)a0;
+ (id)nodeWithSources:(id)a0;

- (id)initWithSource:(id)a0;
- (id)initWithSources:(id)a0;
- (id)gradientFiltersWithSources:(id)a0;
- (Class)gradientClass;
- (void *)newFilterNode;

@end
