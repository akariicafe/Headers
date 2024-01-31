@class NSMutableDictionary, NSMutableArray;

@interface CLKUIResourceManager : NSObject {
    NSMutableDictionary *_recentProvidersForUuid;
    NSMutableDictionary *_atlasesByUuid;
    NSMutableDictionary *_providersByKey;
    NSMutableArray *_streamedAtlases;
    unsigned long long _memoryUsed;
    unsigned long long _memoryLimit;
    NSMutableArray *_textureLoaderQueues;
}

@property (nonatomic) unsigned long long explicitMemoryLimit;

+ (id)sharedInstance;

- (void)purge:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)purgeAllUnused;
- (unsigned long long)_computeMemoryAvailable;
- (id)_fetchOldestAtlas;
- (unsigned long long)_memoryLimit;
- (id)_newAtlasForUuid:(id)a0 nullTexture:(id)a1 streaming:(BOOL)a2;
- (void)_purgeAllUnconditionally;
- (void)_purgeAtlases:(id)a0;
- (void)_updateTextureStreamingForAtlas:(id)a0;
- (id)borrowTextureLoadingQueue;
- (id)delegateForUuid:(id)a0;
- (BOOL)ensureMemoryAvailable:(unsigned long long)a0;
- (BOOL)memoryIsAvailable:(unsigned long long)a0;
- (void)notifyAtlas:(id)a0 willChangeToMemoryCost:(unsigned long long)a1;
- (id)nullAtlas2D;
- (id)nullAtlasCube;
- (void)returnTextureLoadingQueue:(id)a0;
- (id)textureForUuid:(SEL)a0 delegate:(id)a1 rect:(id)a2 nullTexture:(id)a3 streaming:(BOOL)a4;
- (void)updateTextureStreaming;

@end
