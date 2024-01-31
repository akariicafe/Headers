@class NSString, NSMutableDictionary, NSHashTable, PXLRUMemoryCache, NSObject;
@protocol OS_dispatch_queue;

@interface PXContentSyndicationPhotoKitSocialLayerHighlightProvider : NSObject <PXContentSyndicationSocialLayerHighlightProvider> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_observers;
    PXLRUMemoryCache *_highlightsCache;
    NSHashTable *_assetsWithNilHighlightsCache;
    id /* block */ _highlightFetchBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_didChangeHighlight:(id)a0 forAsset:(id)a1 withChangeObservers:(id)a2;
- (id)_serialQueue_fetchSocialLayerHighlightForAsset:(id)a0 usingHighlightResultBlock:(id /* block */)a1;
- (void)_serialQueue_registerChangeObserver:(id)a0 forAsset:(id)a1;
- (void)_serialQueue_unregisterChangeObserver:(id)a0 forAsset:(id)a1;
- (id)cachedSocialLayerHighlightForAsset:(id)a0;
- (void)fetchSocialLayerHighlightForAsset:(id)a0 completion:(id /* block */)a1;
- (id)initWithHighlightFetchBlock:(id /* block */)a0;
- (BOOL)isSocialLayerHighlightCachedForAsset:(id)a0;
- (void)registerChangeObserver:(id)a0 forAsset:(id)a1;
- (id)socialLayerHighlightForAsset:(id)a0;
- (void)unregisterChangeObserver:(id)a0 forAsset:(id)a1;

@end
