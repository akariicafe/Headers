@class NSString, NSMutableDictionary, NSHashTable, SBHIconImageCache, NSMutableSet;

@interface SBHIconImageVariantCache : NSObject <BSDescriptionProviding> {
    NSMutableDictionary *_images;
    NSHashTable *_failedIcons;
    NSMutableDictionary *_cachingRequests;
    NSMutableSet *_canceledCacheRequestIdentifiers;
}

@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;
@property (weak, nonatomic) SBHIconImageCache *iconImageCache;
@property (readonly, nonatomic) unsigned long long numberOfCachedImages;
@property (readonly, nonatomic) unsigned long long numberOfCacheHits;
@property (readonly, nonatomic) unsigned long long numberOfCacheMisses;
@property (readonly, nonatomic) unsigned long long numberOfMainThreadImageLoads;
@property (readonly, nonatomic) unsigned long long numberOfFailedIcons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)purgeAllCachedImages;
- (id)succinctDescriptionBuilder;
- (id)cachedImageForIcon:(id)a0;
- (id)memoryMappedIconImageForIconImage:(id)a0;
- (id)iconImagesMemoryPool;
- (BOOL)_canPoolImage;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)cacheImageForIcon:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)pooledIconImageForMappedIconImage:(id)a0;
- (void)purgeCachedImagesForIcons:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)cacheImage:(id)a0 forIcon:(id)a1;
- (void).cxx_destruct;
- (BOOL)isCachingImageForIcon:(id)a0;
- (id)memoryMappedIconImageOfSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 withDrawing:(id /* block */)a2;
- (id)succinctDescription;
- (id)_cacheKeyForIcon:(id)a0;
- (id)realImageForIcon:(id)a0 options:(unsigned long long)a1;
- (id)_pooledIconImageForIconImage:(id)a0 allowingOptOut:(BOOL)a1;
- (id)_iconImageOfSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 failGracefully:(BOOL)a2 drawing:(id /* block */)a3;
- (id)_variantDescription;
- (id)_variantImageForIcon:(id)a0;
- (BOOL)cancelCachingRequestsForIcon:(id)a0;
- (id)initWithVariant:(long long)a0 iconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;

@end
