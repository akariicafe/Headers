@class NSString, MPSCNNConvolutionStateNode, MPSCNNConvolutionGradientStateNode;
@protocol MPSCNNConvolutionDataSource;

@interface MPSCNNConvolutionNode : MPSNNFilterNode <MPSNNTrainableNode>

@property (readonly, nonatomic) MPSCNNConvolutionStateNode *convolutionState;
@property (readonly, nonatomic) id<MPSCNNConvolutionDataSource> weights;
@property (nonatomic) unsigned long long trainingStyle;
@property (nonatomic) unsigned long long accumulatorPrecision;
@property (readonly, nonatomic) MPSCNNConvolutionGradientStateNode *convolutionGradientState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nodeWithSource:(id)a0 weights:(id)a1;

- (void)dealloc;
- (id)resultState;
- (Class)gradientClass;
- (id)initWithSource:(id)a0 weights:(id)a1;
- (id)initWithSource:(id)a0 weights:(id)a1 state:(id)a2;
- (void *)newFilterNode;

@end
