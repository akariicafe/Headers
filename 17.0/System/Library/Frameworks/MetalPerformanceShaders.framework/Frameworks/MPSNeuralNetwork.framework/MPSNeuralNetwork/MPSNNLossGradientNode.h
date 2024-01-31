@class MPSCNNLossDescriptor;
@protocol MPSNNLossCallback;

@interface MPSNNLossGradientNode : MPSNNGradientFilterNode {
    MPSCNNLossDescriptor *_descriptor;
}

@property (readonly, nonatomic) unsigned int lossType;
@property (readonly, nonatomic) int reductionType;
@property (readonly, nonatomic) unsigned long long numberOfClasses;
@property (readonly, nonatomic) BOOL reduceAcrossBatch;
@property (readonly, nonatomic) float weight;
@property (readonly, nonatomic) float labelSmoothing;
@property (readonly, nonatomic) float epsilon;
@property (readonly, nonatomic) float delta;
@property (readonly, nonatomic) BOOL isLabelsGradientFilter;
@property (retain, nonatomic) id<MPSNNLossCallback> propertyCallBack;

+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 labels:(id)a2 gradientState:(id)a3 lossDescriptor:(id)a4 isLabelsGradientFilter:(BOOL)a5;
+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 labels:(id)a2 weights:(id)a3 gradientState:(id)a4 lossDescriptor:(id)a5 isLabelsGradientFilter:(BOOL)a6;
+ (id)nodeWithSources:(id)a0 gradientState:(id)a1 lossDescriptor:(id)a2 isLabelsGradientFilter:(BOOL)a3;

- (void)dealloc;
- (id)gradientFilterWithSources:(id)a0;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 labels:(id)a2 gradientState:(id)a3 lossDescriptor:(id)a4 isLabelsGradientFilter:(BOOL)a5;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 labels:(id)a2 weights:(id)a3 gradientState:(id)a4 lossDescriptor:(id)a5 isLabelsGradientFilter:(BOOL)a6;
- (id)initWithSources:(id)a0 gradientState:(id)a1 lossDescriptor:(id)a2 isLabelsGradientFilter:(BOOL)a3;
- (void *)newFilterNode;

@end
