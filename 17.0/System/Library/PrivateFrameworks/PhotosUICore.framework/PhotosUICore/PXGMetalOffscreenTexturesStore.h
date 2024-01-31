@class NSHashTable, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, MTLDevice;

@interface PXGMetalOffscreenTexturesStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_queue_loadedTextures;
    NSMutableSet *_queue_usedTextures;
    NSHashTable *_queue_aliveTextures;
    id<MTLDevice> _queue_device;
    struct CGSize { double width; double height; } _queue_renderSize;
    long long _queue_sampleCount;
    unsigned long long _queue_pixelFormat;
}

- (id)init;
- (void)_queue_willRenderFrameWithDevice:(id)a0 size:(struct CGSize { double x0; double x1; })a1 sampleCount:(long long)a2 pixelFormat:(unsigned long long)a3 preloadTexturesCount:(long long)a4;
- (void)willRenderFrameWithDevice:(id)a0 size:(struct CGSize { double x0; double x1; })a1 sampleCount:(long long)a2 pixelFormat:(unsigned long long)a3 preloadTexturesCount:(long long)a4;
- (id)checkoutOffscreenTexture;
- (void)_queue_removeAllTextures;
- (id)_queue_checkoutOffscreenTexture;
- (void)_queue_preloadTexturesCount:(long long)a0;
- (void).cxx_destruct;
- (id)_queue_loadTexture;
- (void)removeAllTextures;

@end
