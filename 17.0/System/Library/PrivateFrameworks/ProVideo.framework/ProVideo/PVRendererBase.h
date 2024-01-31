@class NSString, PVVideoCompositingContext, NSLock;

@interface PVRendererBase : NSObject {
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _frameCount;
    struct vector<HGRef<PVRenderJob>, std::allocator<HGRef<PVRenderJob>>> { void *__begin_; void *__end_; struct __compressed_pair<HGRef<PVRenderJob> *, std::allocator<HGRef<PVRenderJob>>> { void *__value_; } __end_cap_; } _inFlightRenderJobs;
    NSLock *_inFlightRenderJobsLock;
    struct HGSynchronizable { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct _opaque_pthread_t *x2; unsigned long long x3; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x4; } *_perfStatsLock;
    void *_perfStats;
    BOOL _trackStats;
    BOOL _hasRendered;
}

@property (retain, nonatomic) PVVideoCompositingContext *compositingContext;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL immediatelyCancelPendingRequests;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (unsigned int)frameCount;
- (double)numFrames;
- (void)_initOutputColorSpace:(id)a0;
- (void)addFrameStats:(const void *)a0;
- (void)addRenderJobInFlight:(struct HGRef<PVRenderJob> { struct PVRenderJob *x0; })a0;
- (double)averageStat:(int)a0;
- (void)cancelAllPendingRequests;
- (void)cleanupMemoryCaches;
- (void)didRecieveMemoryWarning:(id)a0;
- (double)getLastStat:(int)a0;
- (void)printAndClearStats;
- (void)printAndClearStats:(BOOL)a0;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob *x0; })a0;
- (void)setOutputColorSpace:(id)a0;
- (struct HGRef<PVRenderJob> { struct PVRenderJob *x0; })startJobForDelegate:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 playback:(BOOL)a2;
- (unsigned long long)taskResidentSize;
- (void)trackStats:(BOOL)a0;
- (void)updateDestinationFormatForOutputColorSpace;
- (double)windowedFPS;

@end
