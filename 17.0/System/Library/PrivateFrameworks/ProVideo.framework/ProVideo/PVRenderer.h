@class NSDate, PVRenderEffectLoader;

@interface PVRenderer : PVRendererBase {
    struct HGSynchronizable { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct _opaque_pthread_t *x2; unsigned long long x3; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x4; } *_cvPoolsLock;
    struct vector<HGRef<PVCVPixelBufferPool>, std::allocator<HGRef<PVCVPixelBufferPool>>> { void *__begin_; void *__end_; struct __compressed_pair<HGRef<PVCVPixelBufferPool> *, std::allocator<HGRef<PVCVPixelBufferPool>>> { void *__value_; } __end_cap_; } _cvPools;
    BOOL _enableDestinationPool;
    struct HGRef<HGCVPixelBufferPool> { struct HGCVPixelBufferPool *m_Obj; } _destinationBufferPool;
    struct HGRef<PVRenderManager> { struct PVRenderManager *m_Obj; } _renderManager;
    PVRenderEffectLoader *_effectLoader;
    struct unique_ptr<PVGCDLock, std::default_delete<PVGCDLock>> { struct __compressed_pair<PVGCDLock *, std::default_delete<PVGCDLock>> { struct PVGCDLock *__value_; } __ptr_; } _dateLock;
    NSDate *_lastStatsLogDateTime;
    NSDate *_lastTextureCacheFlushDate;
    unsigned int _destinationPixelFormat;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })frameDuration;
- (void)_configureDefaultPoolPolicy;
- (void)_statsLogCheck;
- (void)cleanupMemoryCaches;
- (struct HGRef<HGBitmap> { struct HGBitmap *x0; })getDestinationBuffer:(struct CGSize { double x0; double x1; })a0 cvPixelBufferFormat:(unsigned int)a1;
- (struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer *x0; })hgCVPixelBufferFromCVPoolForSize:(struct CGSize { double x0; double x1; })a0 withFormat:(unsigned int)a1;
- (void)loadInstructionGraphEffects:(id)a0;
- (unsigned int)outputCVPixelBufferFormat;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob *x0; })a0;
- (void)startRenderRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateDestinationFormatForOutputColorSpace;

@end
