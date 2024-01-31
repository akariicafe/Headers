@class MPSCNNBatchNormalization;

@interface MPSCNNBatchNormalizationState : MPSNNGradientState {
    unsigned long long _accumulationCount;
    unsigned long long _numberOfFeatureChannels;
    float _epsilon;
}

@property (readonly, retain, nonatomic) MPSCNNBatchNormalization *batchNormalization;

+ (id)temporaryStateWithCommandBuffer:(id)a0 numberOfFeatureChannels:(unsigned long long)a1 epsilon:(float)a2 batchNormalization:(id)a3;

- (id)gamma;
- (id)beta;
- (void)reset;
- (void)dealloc;
- (id)mean;
- (id)variance;
- (id)gradientForBeta;
- (id)gradientForGamma;
- (id)initDeferredWithDevice:(id)a0 numberOfFeatureChannels:(unsigned long long)a1 epsilon:(float)a2 batchNormalization:(id)a3;

@end
