@class NSObject;
@protocol MTLTexture, OS_dispatch_queue;

@interface CLKUIMetalAtlas : CLKUIAtlas {
    id<MTLTexture> _texture;
    BOOL _streaming;
    unsigned long long _numMipmapLevelsDropped;
    BOOL _needsStreaming;
    id /* block */ _streamingCompletionBlock;
    NSObject<OS_dispatch_queue> *_loaderQueue;
    id<MTLTexture> _loaderQueue_prewarmedTexture;
    unsigned long long _mainQueue_prewarmState;
}

@property (readonly, nonatomic) id<MTLTexture> nilTexture;

+ (unsigned long long)_computeMTLTextureMemoryUsageWithBacking:(id)a0 numMipmapLevelsToDrop:(unsigned long long)a1;
+ (id)_allocateMTLTextureWithBacking:(id)a0 numMipmapLevelsToDrop:(unsigned long long)a1 device:(id)a2;
+ (id)_createMTLTextureWithBacking:(id)a0 numMipmapLevelsToDrop:(unsigned long long)a1 device:(id)a2 encoder:(id)a3;
+ (id)_uploadMTLTexture:(id)a0 withBacking:(id)a1 numMipmapLevelsToDrop:(unsigned long long)a2 device:(id)a3 encoder:(id)a4;

- (void)purge;
- (void)prewarm;
- (void)dealloc;
- (void).cxx_destruct;
- (void)bind:(id)a0 slot:(unsigned long long)a1;
- (void)finishPrewarm;
- (id)initWithUuid:(id)a0 nilTexture:(id)a1 streaming:(BOOL)a2;
- (void)updateTextureStreaming;

@end
