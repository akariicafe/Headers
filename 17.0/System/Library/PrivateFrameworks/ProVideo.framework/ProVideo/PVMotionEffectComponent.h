@class NSString, PVMotionEffect;

@interface PVMotionEffectComponent : PVEffectComponent <PVMotionEffectLoadDelegate, PVMotionEffectPropertyMapDelegate, PVMotionEffectRenderCacheDelegate>

@property (weak, nonatomic) PVMotionEffect *motionEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)motionEffectPropertyKeyToPublishedParameterNameMap;

- (void).cxx_destruct;
- (void)effect:(id)a0 updateProperties:(id)a1 allProperties:(id)a2;
- (id)initWithMotionEffect:(id)a0;
- (void)motionEffect:(id)a0 didBecomeReady:(const void *)a1 properties:(id)a2;
- (void)motionEffect:(id)a0 didLoad:(const void *)a1;
- (BOOL)motionEffect:(id)a0 propertiesDisableCache:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 forcePosterFrame:(BOOL)a3;
- (BOOL)motionEffect:(id)a0 shouldInvalidateCachedRenderForProperty:(id)a1 oldValue:(id)a2 newValue:(id)a3;
- (void)motionEffect:(id)a0 willOpenMedia:(const void *)a1 properties:(id)a2;
- (void)motionEffect:(id)a0 willRender:(const void *)a1 properties:(id)a2 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)motionEffectDidFailToLoad:(id)a0;
- (void)motionEffectDidStartLoading:(id)a0;
- (void)motionEffectDidUnload:(id)a0;
- (id)motionEffectPropertyKeysThatInvalidateCachedRender:(id)a0;

@end
