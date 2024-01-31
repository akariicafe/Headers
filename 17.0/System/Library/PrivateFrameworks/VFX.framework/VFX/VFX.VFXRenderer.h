@interface VFX.VFXRenderer : NSObject {
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ performMetalCaptureDuringSnapshot;
    void /* unknown type, empty encoding */ postRenderCallback;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ scene;
@property (nonatomic, retain) void /* unknown type, empty encoding */ effect;
@property (nonatomic, retain) void /* unknown type, empty encoding */ texture;
@property (nonatomic, retain) void /* unknown type, empty encoding */ depthTexture;
@property (nonatomic, retain) void /* unknown type, empty encoding */ backgroundColor;
@property (nonatomic, retain) void /* unknown type, empty encoding */ pointOfView;
@property (nonatomic) BOOL enableDeferredRendering;
@property (nonatomic) BOOL additiveWritesToAlpha;
@property (nonatomic, copy) id /* block */ postRenderCallback;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCommandQueue:(id)a0;
- (void)encodeWithCommandBuffer:(id)a0;
- (void)finalizeEncoding;
- (BOOL)hasRenderableObjects;
- (id)snapshotImageWithSize:(struct CGSize { double x0; double x1; })a0 deltaTime:(double)a1;
- (id)snapshotWithSize:(struct CGSize { double x0; double x1; })a0 deltaTime:(double)a1;

@end
