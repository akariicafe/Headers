@class CALayer, CAMetalLayer;
@protocol LAUIMetalRenderLoopDelegate, MTLDevice, CAMetalDrawable;

@interface LAUIMetalRenderLoop : LAUIRenderLoop {
    CAMetalLayer *_layer;
    BOOL _drawable_size_dirty;
    id<CAMetalDrawable> _current_drawable;
}

@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) CALayer *layer;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (nonatomic) BOOL framebufferOnly;
@property (nonatomic) struct CGSize { double width; double height; } drawableSize;
@property (weak, nonatomic) id<LAUIMetalRenderLoopDelegate> delegate;

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
