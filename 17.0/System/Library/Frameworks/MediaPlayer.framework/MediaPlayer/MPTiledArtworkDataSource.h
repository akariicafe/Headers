@class NSCountedSet, NSString, NSOperationQueue, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface MPTiledArtworkDataSource : NSObject <MPArtworkDataSource> {
    NSCountedSet *_loadingTiledArtworkRequests;
    NSObject<OS_dispatch_queue> *_loadingTiledArtworkRequestsAccessQueue;
    NSObject<OS_dispatch_queue> *_renderingTiledArtworkRequestsQueue;
    NSCache *_tiledArtworkRepresentationFallbackCache;
    NSOperationQueue *_tilingArtworkCatalogOperationQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDataSource;
+ (id)_errorWithDescription:(id)a0;
+ (id)_loadingRequestForArtworkCatalog:(id)a0;
+ (id)_representationCacheKeyForArtworkCatalog:(id)a0 forAnyRevision:(BOOL)a1;
+ (struct CGSize { double x0; double x1; })_tileSizeForFittingSize:(struct CGSize { double x0; double x1; })a0 rows:(unsigned long long)a1 columns:(unsigned long long)a2 spacing:(double)a3;

- (id)init;
- (id)existingArtworkEffectResultForEffectType:(long long)a0 catalog:(id)a1 options:(id)a2;
- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)a0;
- (void)loadRepresentationForArtworkCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;
- (BOOL)isRepresentation:(id)a0 bestRepresentationForArtworkCatalog:(id)a1;
- (void).cxx_destruct;
- (void)_performSyncBlock:(id /* block */)a0;
- (void)loadArtworkEffectResultForEffectType:(long long)a0 catalog:(id)a1 options:(id)a2 systemEffectHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)existingRepresentationForArtworkCatalog:(id)a0;
- (void)_addLoadingRequestForArtworkCatalog:(id)a0;
- (BOOL)_hasLoadingRequestForArtworkCatalog:(id)a0;
- (void)_performAsyncBlock:(id /* block */)a0;
- (void)_removeLoadingRequestForArtworkCatalog:(id)a0;

@end
