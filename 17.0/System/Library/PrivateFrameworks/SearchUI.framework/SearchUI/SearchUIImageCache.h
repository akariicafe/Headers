@class NSCache;

@interface SearchUIImageCache : NSObject

@property (retain) NSCache *imageCache;

+ (id)sharedCache;
+ (void)cacheTLKImage:(id)a0 forSFImage:(id)a1;
+ (id)cachedTlkImageForSFImage:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)clearCacheAndPostNotificationForChangedIconForBundleIdentifier:(id)a0;
- (void)appIconImageDidChange:(id)a0;
- (void)clearImagesWithNotification:(id)a0;
- (void)dateDidChange;

@end
