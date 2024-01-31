@class PVVideoCompositingContext;

@interface PVCameraPreviewRenderer : NSObject {
    struct HGRef<PVRenderManager> { struct PVRenderManager *m_Obj; } _renderManager;
    struct HGRef<HGRenderJob> { struct HGRenderJob *m_Obj; } _currentRenderJob;
    PVVideoCompositingContext *_compositingContext;
}

- (id)init;
- (void)dealloc;
- (struct HGRef<HGGLContext> { struct HGGLContext *x0; })rootContext;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enqueueRenderRequest:(id)a0 completion:(id /* block */)a1;
- (struct HGRef<PVRenderManager> { struct PVRenderManager *x0; })renderManager;

@end
