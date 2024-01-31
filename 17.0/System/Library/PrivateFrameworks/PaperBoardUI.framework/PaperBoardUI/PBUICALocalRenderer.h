@class CIContext, NSString, CIImage, PBUIViewportLayer, CALayer, NSObject, CARenderer;
@protocol MTLCommandQueue, MTLDevice, OS_os_log;

@interface PBUICALocalRenderer : NSObject <PBUIRenderer> {
    CARenderer *_renderer;
    PBUIViewportLayer *_viewportLayer;
    struct CGColorSpace { } *_colorSpace;
    CIContext *_ciContext;
    struct PBUIRenderState { struct CGSize { double width; double height; } outputPixelSize; double scale; CALayer *layer; CIImage *image; } _currentRenderState;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _encodingLock;
}

@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) NSObject<OS_os_log> *logger;
@property (readonly, nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetState;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setRenderState:(struct PBUIRenderState { struct CGSize { double x0; double x1; } x0; double x1; id x2; id x3; })a0;
- (id)initWithColorSpace:(struct CGColorSpace { } *)a0;
- (id)CIContext;
- (id)newCommandBufferWithCompletion:(id /* block */)a0;
- (id)nextFrameHandlerWithCompletion:(id /* block */)a0;
- (BOOL)archiveRenderingOfRequest:(id)a0 toURL:(id)a1 error:(out id *)a2;
- (void)configureWithTransaction:(id /* block */)a0;
- (id)initWithDevice:(id)a0 colorSpace:(struct CGColorSpace { } *)a1;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1 colorSpace:(struct CGColorSpace { } *)a2;
- (id)newSurfaceWithSize:(struct CGSize { double x0; double x1; })a0 colorSpace:(struct CGColorSpace { } *)a1 outOptions:(unsigned long long *)a2;
- (id)newTextureWithSize:(struct CGSize { double x0; double x1; })a0 colorSpace:(struct CGColorSpace { } *)a1;
- (unsigned long long)pixelFormatForBSIOSurfaceOptions:(unsigned long long)a0;
- (id)renderCIImage:(id)a0 toSurface:(id)a1 completionHandler:(id /* block */)a2;
- (id)renderFrameToTexture:(id)a0 configureWithTransaction:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)renderRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)renderRequest:(id)a0 error:(out id *)a1;
- (void)renderState:(struct PBUIRenderState { struct CGSize { double x0; double x1; } x0; double x1; id x2; id x3; })a0 completionHandler:(id /* block */)a1;
- (id)renderState:(struct PBUIRenderState { struct CGSize { double x0; double x1; } x0; double x1; id x2; id x3; })a0 error:(out id *)a1;
- (id)rendererForDestination:(id)a0;
- (void)updateStateWithTransaction:(struct PBUIRenderState { struct CGSize { double x0; double x1; } x0; double x1; id x2; id x3; })a0;
- (BOOL)usesCoreImageForState:(struct PBUIRenderState { struct CGSize { double x0; double x1; } x0; double x1; id x2; id x3; })a0;

@end
