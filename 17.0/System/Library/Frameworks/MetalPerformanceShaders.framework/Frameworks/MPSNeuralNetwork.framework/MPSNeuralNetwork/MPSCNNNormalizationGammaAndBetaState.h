@protocol MTLBuffer;

@interface MPSCNNNormalizationGammaAndBetaState : MPSState {
    BOOL _initialized;
}

@property (readonly, nonatomic) id<MTLBuffer> gamma;
@property (readonly, nonatomic) id<MTLBuffer> beta;

+ (id)temporaryStateWithCommandBuffer:(id)a0 bufferSize:(unsigned long long)a1;
+ (id)temporaryStateWithCommandBuffer:(id)a0 numberOfFeatureChannels:(unsigned long long)a1;

- (id)initWithGamma:(id)a0 beta:(id)a1;
- (id)initWithDevice:(id)a0 bufferSize:(unsigned long long)a1;

@end
