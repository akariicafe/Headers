@class CALayer, CAMetalLayer;
@protocol PKMetalRenderLoopDelegate, MTLDevice, CAMetalDrawable;

@interface PKMetalRenderLoop : PKRenderLoop {
    CAMetalLayer *_layer;
    BOOL _drawableSizeDirty;
    id<CAMetalDrawable> _currentDrawable;
}

@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) CALayer *layer;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (nonatomic) BOOL framebufferOnly;
@property (nonatomic) struct CGSize { double width; double height; } drawableSize;
@property (weak, nonatomic) id<PKMetalRenderLoopDelegate> delegate;

- (id)layer;
- (id)init;
- (void)dealloc;
- (id)currentDrawable;
- (BOOL)framebufferOnly;
- (void)setFramebufferOnly:(BOOL)a0;
- (BOOL)isDrawableAvailable;
- (void).cxx_destruct;
- (void)_didInvalidate;
- (BOOL)_isForcingPause;
- (void)_didDraw;
- (void)_willDraw;
- (id)initWithPixelFormat:(unsigned long long)a0 forDevice:(id)a1;

@end
