@class NSString, PVRenderRequest, PVRenderer, PVVideoCompositingContext;

@interface PVRenderRequestJobDelegate : NSObject <PVRenderJobDelegate> {
    PVRenderer *m_pvRenderer;
    PVRenderRequest *m_request;
    struct HGRef<PVRenderManager> { struct PVRenderManager *m_Obj; } m_renderManager;
    id /* block */ m_completionHandler;
    void *m_destinationBitmaps;
}

@property (readonly) unsigned int jobTypeTag;
@property (readonly) PVVideoCompositingContext *videoCompositingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)jobTypeTag;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)buildGraph:(void *)a0 renderContext:(const void *)a1 frameStats:(void *)a2;
- (void)finishCancelledJob;
- (void)finishCompletedJob;
- (int)graphBuildThreadPriority;
- (id)initWithRequest:(id)a0 completionHandler:(id /* block */)a1 pvRenderer:(id)a2;
- (int)jobPriority;
- (unsigned int)outputCVPixelBufferFormat;
- (unsigned long long)packedFamilyCode;
- (int)renderContextPriority;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob *x0; })a0;
- (int)renderThreadPriority;
- (void)setupDestinationBuffers:(void *)a0 renderContext:(const void *)a1 frameStats:(void *)a2;

@end
