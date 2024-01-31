@class NSLock, NSObject;
@protocol MTLDevice, MTLCommandBuffer, MTLBlitCommandEncoder, OS_dispatch_queue;

@interface MTKTextureUploader : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandBuffer> _commandBuffer;
    id<MTLBlitCommandEncoder> _blit;
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_notifyQueue;
}

- (void)dealloc;
- (void)generateMipmapsForTexture:(id)a0;
- (void)finishWithCompletionHandler:(id /* block */)a0;
- (void)copyBytes:(const void *)a0 toTexture:(id)a1 bitsPerPixel:(unsigned long long)a2 pixelComponents:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4 bytesPerImage:(unsigned long long)a5 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a6 slice:(unsigned long long)a7 level:(unsigned long long)a8 flipVertically:(BOOL)a9;
- (void)copyTexture:(id)a0 toTexture:(id)a1;
- (id)initWithDevice:(id)a0 commandQueue:(id)a1 notifyQueue:(id)a2;
- (id)newTextureWithData:(id)a0 options:(id)a1;

@end
