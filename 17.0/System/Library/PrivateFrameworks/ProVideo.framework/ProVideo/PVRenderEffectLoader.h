@interface PVRenderEffectLoader : NSObject {
    void *_loadedEffects;
    struct HGSynchronizable { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct _opaque_pthread_t *x2; unsigned long long x3; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x4; } *_lock;
    BOOL _flushesOnEffectStackChanges;
}

@property (nonatomic) float unusedEffectTimeout;

- (id)init;
- (void)dealloc;
- (void)_loadEffects_noLock:(id)a0;
- (void)_removeTimedOutEffects_noLock;
- (void)_removeUnusedEffects_noLock:(id)a0;
- (void)ageOutEffects;
- (void)loadEffectsForGraphs:(id)a0 loadContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;
- (void)unloadEffects;

@end
