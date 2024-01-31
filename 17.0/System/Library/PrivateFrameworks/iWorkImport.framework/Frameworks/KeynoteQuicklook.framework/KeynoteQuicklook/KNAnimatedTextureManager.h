@class NSObject, NSMapTable, KNPlaybackSession, NSMutableSet, NSOperationQueue, KNSlideNode, TSULRUCache;
@protocol OS_os_log;

@interface KNAnimatedTextureManager : NSObject {
    KNPlaybackSession *_session;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _preCachingStateLock;
    NSMapTable *_slideNodeToASVMap;
    NSMutableSet *_slideNodesInMemorySet;
    NSMutableSet *_preCachedSlideNodes;
    BOOL _isPreCachingActive;
    NSOperationQueue *_preCacheBackgroundQueue;
    NSOperationQueue *_rasterizeTextureQueue;
    struct CGSize { double width; double height; } _maximumMTLTextureSize;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _textureCacheLock;
    NSMapTable *_repToTextureArrayMap;
    TSULRUCache *_recentlyUsedBackgroundCache;
    NSObject<OS_os_log> *_signpostLog;
}

@property (retain, nonatomic) KNSlideNode *currentSlideNode;
@property (nonatomic) BOOL shouldPreCache;

- (id)initWithSession:(id)a0;
- (void)dealloc;
- (void)tearDown;
- (id)description;
- (void).cxx_destruct;
- (void)p_didReceiveMemoryWarning:(id)a0;
- (id)ASVForSlideNode:(id)a0;
- (void)startPreCaching;
- (void)addTextureToRasterizationQueue:(id)a0 asv:(id)a1;
- (void)evictCacheForSlideNode:(id)a0;
- (void)evictCaches;
- (void)evictInMemoryCache;
- (void)evictPersistentCache;
- (void)p_addSlideNodeToMemorySet:(id)a0;
- (void)p_cancelAllOperations;
- (void)p_didReceiveMemoryWarning;
- (void)p_processCurrentSlideNode;
- (void)p_processSlideNode:(id)a0 isHighPriority:(BOOL)a1;
- (void)p_rasterizeTexture:(id)a0;
- (void)p_removeTextureCacheForASV:(id)a0;
- (void)p_scheduleSerializeExtraSlideNodes;
- (void)p_serializeExtraSlideNodes;
- (void)p_serializeTexturesForSlideNode:(id)a0;
- (id)p_setupGenerateTexturesOperationOnSlideNode:(id)a0;
- (id)p_setupPrepareAnimationsOperationOnSlideNode:(id)a0;
- (id)p_setupRenderTexturesOperationOnSlideNode:(id)a0;
- (id)p_slideNodesToCacheAroundCurrentSlideNode:(id)a0 shouldIncludeExtraSlideAtEnd:(BOOL)a1;
- (BOOL)p_stopPreCachingIfStarted;
- (void)p_waitUntilAllOperationsAreFinished;
- (void)stopPreCaching;

@end
