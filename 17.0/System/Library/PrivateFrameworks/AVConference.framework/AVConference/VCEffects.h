@class VCVideoFrameBufferPool;

@interface VCEffects : NSObject {
    VCVideoFrameBufferPool *_bufferPool;
}

@property (nonatomic) int effectsMode;
@property (nonatomic) BOOL effectsApplied;
@property (nonatomic) BOOL faceMeshTrackingEnabled;

- (id)init;
- (void)dealloc;
- (BOOL)addFrame:(struct __CVBuffer { } *)a0 time:(long long)a1;
- (BOOL)releaseFrameWithTime:(long long)a0;

@end
