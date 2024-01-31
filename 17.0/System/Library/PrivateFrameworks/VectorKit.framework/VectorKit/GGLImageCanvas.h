@class NSString;
@protocol GGLRenderQueueSource;

@interface GGLImageCanvas : NSObject <MDRenderTarget> {
    struct shared_ptr<ggl::Device> { struct Device *__ptr_; struct __shared_weak_count *__cntrl_; } _device;
    BOOL _canMakeImage;
    BOOL _recreateRenderTarget;
    struct unique_ptr<ggl::IOSurfaceTexture, std::default_delete<ggl::IOSurfaceTexture>> { struct __compressed_pair<ggl::IOSurfaceTexture *, std::default_delete<ggl::IOSurfaceTexture>> { struct IOSurfaceTexture *__value_; } __ptr_; } _flippedSurfaceTexture;
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> { struct __compressed_pair<ggl::RenderTarget *, std::default_delete<ggl::RenderTarget>> { struct RenderTarget *__value_; } __ptr_; } _flippedRenderTarget;
    struct unique_ptr<md::YFlipPass, std::default_delete<md::YFlipPass>> { struct __compressed_pair<md::YFlipPass *, std::default_delete<md::YFlipPass>> { struct YFlipPass *__value_; } __ptr_; } _yFlipPass;
    struct RenderTargetFormat { int colorFormats[4]; unsigned long long colorFormatsCount; unsigned int samples; int depthStencilFormat; } _sRGBFormat;
    struct RenderTargetFormat { int colorFormats[4]; unsigned long long colorFormatsCount; unsigned int samples; int depthStencilFormat; } _resolvedRenderTargetFormat;
    struct unique_ptr<ggl::Renderer, std::default_delete<ggl::Renderer>> { struct __compressed_pair<ggl::Renderer *, std::default_delete<ggl::Renderer>> { struct Renderer *__value_; } __ptr_; } _renderer;
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> { struct __compressed_pair<ggl::RenderTarget *, std::default_delete<ggl::RenderTarget>> { struct RenderTarget *__value_; } __ptr_; } _sRGBRenderTarget;
    struct shared_ptr<ggl::Texture2DAbstract> { struct Texture2DAbstract *__ptr_; struct __shared_weak_count *__cntrl_; } _sRGBColorBuffer;
    struct unique_ptr<ggl::RenderBuffer, std::default_delete<ggl::RenderBuffer>> { struct __compressed_pair<ggl::RenderBuffer *, std::default_delete<ggl::RenderBuffer>> { struct RenderBuffer *__value_; } __ptr_; } _depthStencilBuffer;
    struct array<std::shared_ptr<ggl::RenderBuffer>, 3UL> { struct shared_ptr<ggl::RenderBuffer> { struct RenderBuffer *__ptr_; struct __shared_weak_count *__cntrl_; } __elems_[3]; } _sRGBColorTextures;
    struct RenderTargetFormat { int colorFormats[4]; unsigned long long colorFormatsCount; unsigned int samples; int depthStencilFormat; } _linearFormat;
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> { struct __compressed_pair<ggl::RenderTarget *, std::default_delete<ggl::RenderTarget>> { struct RenderTarget *__value_; } __ptr_; } _linearRenderTarget;
    struct shared_ptr<ggl::Texture2DAbstract> { struct Texture2DAbstract *__ptr_; struct __shared_weak_count *__cntrl_; } _linearColorBuffer;
    struct array<std::shared_ptr<ggl::RenderBuffer>, 3UL> { struct shared_ptr<ggl::RenderBuffer> { struct RenderBuffer *__ptr_; struct __shared_weak_count *__cntrl_; } __elems_[3]; } _linearColorTextures;
    struct shared_ptr<ggl::Texture> { struct Texture *__ptr_; struct __shared_weak_count *__cntrl_; } _msaaResolveBuffer;
    unsigned long long _signpostId;
    void *_mdDevice;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _debugConsoleManagerCreationLock;
    struct unique_ptr<md::DebugConsoleManager, std::default_delete<md::DebugConsoleManager>> { struct __compressed_pair<md::DebugConsoleManager *, std::default_delete<md::DebugConsoleManager>> { struct DebugConsoleManager *__value_; } __ptr_; } _debugConsoleManager;
    void *_services;
}

@property (nonatomic) BOOL allowAlpha;
@property (readonly, nonatomic) void *renderTarget;
@property (readonly, nonatomic) void *finalRenderTarget;
@property (readonly, nonatomic) void *linearRenderTarget;
@property (readonly, nonatomic) void *imageTexture;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double contentScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (weak, nonatomic) id<GGLRenderQueueSource> renderSource;
@property (readonly, nonatomic) BOOL multiSample;
@property (readonly, nonatomic) BOOL supportsFramebufferFetch;
@property (readonly, nonatomic) const struct RenderTargetFormat { int x0[4]; unsigned long long x1; unsigned int x2; int x3; } *format;
@property (readonly, nonatomic) void *renderer;
@property (readonly, nonatomic) BOOL shouldRasterize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeInPixels;
@property (readonly, nonatomic) const struct RenderTargetFormat { int x0[4]; unsigned long long x1; unsigned int x2; int x3; } *linearFormat;
@property (readonly, nonatomic) float averageFPS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct __IOSurface { } *)flipImage;
- (struct shared_ptr<ggl::BitmapDataBase> { struct BitmapDataBase *x0; struct __shared_weak_count *x1; })bitmapData;
- (void)willDealloc;
- (void)dealloc;
- (void *)debugConsoleForId:(int)a0;
- (void)destroyRenderTarget;
- (BOOL)hasRenderTarget;
- (id).cxx_construct;
- (void *)_internalRenderTarget;
- (void)willDrawView;
- (struct function<void (std::function<std::future<void> (std::function<void ()>)>, std::function<std::future<void> (std::function<void ()>)>)> { struct __value_func<void (std::function<std::future<void> (std::function<void ()>)>, std::function<std::future<void> (std::function<void ()>)>)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })prepareRenderTask:(double)a0 presentAtTime:(double)a1 didPresentDelegate:(struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a2 taskModule:(struct LayoutSceneTaskModule { struct function<ggl::RenderQueue *()> { struct __value_func<ggl::RenderQueue *()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; } x0; struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; } x1; struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; } x2; })a3;
- (void)didDrawView;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 useMultisampling:(BOOL)a2 extraColorFormats:(const void *)a3 taskContext:(const void *)a4 device:(void *)a5 services:(void *)a6 signpostId:(unsigned long long)a7;
- (void).cxx_destruct;
- (void)createRenderTarget;
- (void *)finalSurface;

@end
