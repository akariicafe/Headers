@protocol MTLBuffer;

@interface MPSCNNNormalizationMeanAndVarianceState : MPSState {
    BOOL _initialized;
}

@property (readonly, nonatomic) id<MTLBuffer> mean;
@property (readonly, nonatomic) id<MTLBuffer> variance;

+ (id)temporaryStateWithCommandBuffer:(id)a0 bufferSize:(unsigned long long)a1;
+ (id)temporaryStateWithCommandBuffer:(id)a0 numberOfFeatureChannels:(unsigned long long)a1;

- (id)initWithMean:(id)a0 variance:(id)a1;
- (id)initWithDevice:(id)a0 bufferSize:(unsigned long long)a1;

@end
