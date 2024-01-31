@protocol MTLBuffer;

@interface MPSCNNDropoutGradientState : MPSNNGradientState {
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _maskStrideInPixels;
    float _keepProbability;
    unsigned long long _resourcePixelFormat;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _resourceSize;
    unsigned long long _commonBufferOffsetBytes;
    id<MTLBuffer> _commonMaskBuffer;
}

- (id)init;
- (void)dealloc;
- (void)synchronizeOnCommandBuffer:(id)a0;
- (id)maskData;

@end
