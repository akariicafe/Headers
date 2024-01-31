@class CKDispatchCache, CKMultiDict;

@interface CKPreviewDispatchCache : NSObject <IMSystemMonitorListener>

@property (retain, nonatomic) CKDispatchCache *dispatchCache;
@property (retain, nonatomic) CKMultiDict *pendingBlocks;

+ (id)snapshotCache;
+ (void)_invalidateStickerPreviewCache;
+ (id)detailsPreviewCache;
+ (id)mapThumbnailQueue;
+ (id)previewPrewarmQueue;
+ (id)stickerPreviewCache;
+ (id)transcriptPreviewCache;

- (id)notificationCenter;
- (id)init;
- (void)dealloc;
- (void)suspend;
- (void)systemApplicationDidSuspend;
- (void)flush;
- (void)resume;
- (void)didReceiveMemoryWarning;
- (void).cxx_destruct;
- (void)beginGeneratingForKey:(id)a0;
- (id)cachedPreviewForKey:(id)a0;
- (void)clearQueueAndCachedPreviews;
- (void)endGeneratingForKey:(id)a0;
- (void)enqueueGenerationBlock:(id /* block */)a0 completion:(id /* block */)a1 withPriority:(long long)a2 forKey:(id)a3;
- (void)enqueueSaveBlock:(id /* block */)a0 forMediaObject:(id)a1 withPriority:(long long)a2;
- (void)enqueueSaveBlock:(id /* block */)a0 withPriority:(long long)a1;
- (id)initWithCacheLimit:(unsigned long long)a0;
- (BOOL)isGeneratingPreviewForKey:(id)a0;
- (id)mediaObjectManager;
- (void)setCachedPreview:(id)a0 key:(id)a1;
- (BOOL)shouldReplaceCachedPreview:(id)a0 withPreview:(id)a1;
- (void)transferFinished:(id)a0;
- (void)transferRemoved:(id)a0;

@end
