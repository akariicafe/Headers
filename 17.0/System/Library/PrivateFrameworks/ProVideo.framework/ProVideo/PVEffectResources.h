@interface PVEffectResources : NSObject

+ (void)applicationWillTerminate;
+ (void)setInteractiveMode:(BOOL)a0;
+ (void)cleanupEffectsCache;
+ (void)cleanupEffectsSingletons;
+ (void)clearAllCachesAndPools;
+ (void)flushEngine;
+ (float)getCVTextureCacheMaxiumumTextureAge;
+ (BOOL)isInteractiveMode;
+ (int)memoryEnvironment;
+ (void)setCVTextureCacheMaximumTextureAge:(float)a0;
+ (void)setUTObserver:(id)a0;
+ (void)shutdownEngine;
+ (void)updateMemoryEnvironment:(int)a0;
+ (id)utObserver;

@end
