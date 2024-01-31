@interface AVAssetCache : NSObject

@property (readonly, nonatomic, getter=isPlayableOffline) BOOL playableOffline;

+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadWithURL:(id)a0;
+ (id)assetCacheWithURL:(id)a0;

- (id)initWithURL:(id)a0;
- (id)allKeys;
- (id)_init;
- (id)URL;
- (BOOL)isDefunct;
- (long long)maxSize;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (long long)currentSize;
- (id)lastModifiedDateOfEntryForKey:(id)a0;
- (long long)maxEntrySize;
- (void)removeEntryForKey:(id)a0;
- (long long)sizeOfEntryForKey:(id)a0;

@end
