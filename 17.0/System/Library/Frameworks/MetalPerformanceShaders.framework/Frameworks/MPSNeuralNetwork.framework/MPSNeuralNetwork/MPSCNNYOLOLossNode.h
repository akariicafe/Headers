@class MPSNNLabelsNode, MPSCNNYOLOLossDescriptor;

@interface MPSCNNYOLOLossNode : MPSNNFilterNode {
    MPSCNNYOLOLossDescriptor *_descriptor;
}

@property (readonly, retain, nonatomic) MPSNNLabelsNode *inputLabels;

+ (id)nodeWithSource:(id)a0 lossDescriptor:(id)a1;

- (void)dealloc;
- (id)gradientFilterWithSources:(id)a0;
- (id)trainingGraphWithSourceGradient:(id)a0 nodeHandler:(id /* block */)a1;
- (id)initWithSource:(id)a0 lossDescriptor:(id)a1;
- (void *)newFilterNode;

@end
