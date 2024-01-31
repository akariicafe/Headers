@class NSString, UIImage, CPMemoryPool, NSHashTable, SBHIconImageVariantCache;

@interface SBHIconImageCache : NSObject <SBIconObserver, BSDescriptionProviding> {
    SBHIconImageVariantCache *_maskedCache;
    SBHIconImageVariantCache *_unmaskedCache;
    UIImage *_genericImage;
    UIImage *_overlayImage;
    UIImage *_unmaskedOverlayImage;
    NSHashTable *_observedIcons;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) CPMemoryPool *iconImagesMemoryPool;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;
@property (readonly, nonatomic) UIImage *genericImage;
@property (readonly, nonatomic) UIImage *overlayImage;
@property (readonly, nonatomic) UIImage *unmaskedOverlayImage;
@property (nonatomic) unsigned long long poolingBypassCount;
@property (readonly, nonatomic) unsigned long long numberOfCachedImages;
@property (readonly, nonatomic) unsigned long long numberOfUnmaskedCachedImages;
@property (readonly, nonatomic) unsigned long long numberOfCacheHits;
@property (readonly, nonatomic) unsigned long long numberOfUnmaskedCacheHits;
@property (readonly, nonatomic) unsigned long long numberOfCacheMisses;
@property (readonly, nonatomic) unsigned long long numberOfUnmaskedCacheMisses;
@property (readonly, nonatomic) unsigned long long numberOfMainThreadImageLoads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genericImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (id)overlayImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (BOOL)supportsMemoryPooling;
+ (id)_backgroundQueue;
+ (id)unmaskedOverlayImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (BOOL)hasUniqueCachingPlaceholderImage;

- (void)purgeAllCachedImages;
- (void)enumerateVariantCachesUsingBlock:(id /* block */)a0;
- (void)removeObserver:(id)a0;
- (id)unmaskedCachingPlaceholderImage;
- (id)initWithName:(id)a0 iconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (void)iconImageVariantCache:(id)a0 finishedAsynchronousLoadOfIcon:(id)a1;
- (id)succinctDescriptionBuilder;
- (id)cachedImageForIcon:(id)a0;
- (void)endObservingIcon:(id)a0;
- (id)memoryMappedIconImageForIconImage:(id)a0;
- (BOOL)_canPoolImage;
- (void)iconImageDidUpdate:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)cacheImageForIcon:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)pooledIconImageForMappedIconImage:(id)a0;
- (void)purgeCachedImagesForIcons:(id)a0;
- (id)imageForIcon:(id)a0 options:(unsigned long long)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)cacheImage:(id)a0 forIcon:(id)a1;
- (void)endObservingAllIcons;
- (void).cxx_destruct;
- (BOOL)isCachingImageForIcon:(id)a0;
- (id)unmaskedImageForIcon:(id)a0 options:(unsigned long long)a1;
- (id)cachedUnmaskedImageForIcon:(id)a0;
- (void)notifyObserversOfUnmaskedUpdateForIcon:(id)a0;
- (void)beginObservingIconIfNecessary:(id)a0;
- (id)memoryMappedIconImageOfSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 withDrawing:(id /* block */)a2;
- (void)performWhenCachingActivityCompletesUsingBlock:(id /* block */)a0;
- (id)succinctDescription;
- (id)unmaskedImageForIcon:(id)a0;
- (id)_cacheKeyForIcon:(id)a0;
- (void)performBackgroundCachingActivityUsingBlock:(id /* block */)a0;
- (id)cachingPlaceholderImage;
- (void)cacheUnmaskedImagesForIcons:(id)a0;
- (void)cacheImagesForIcons:(id)a0;
- (id)imageForIcon:(id)a0;
- (void)addObserver:(id)a0;
- (void)notifyObserversOfUpdateForIcon:(id)a0;
- (id)realImageForIcon:(id)a0 options:(unsigned long long)a1;
- (id)_pooledIconImageForIconImage:(id)a0 allowingOptOut:(BOOL)a1;
- (void)cacheImagesForIcons:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)_iconImageOfSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 failGracefully:(BOOL)a2 drawing:(id /* block */)a3;

@end
