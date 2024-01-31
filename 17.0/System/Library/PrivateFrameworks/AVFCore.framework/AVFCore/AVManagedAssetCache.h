@class AVManagedAssetCacheInternal;

@interface AVManagedAssetCache : AVAssetCache {
    AVManagedAssetCacheInternal *_priv;
}

+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadWithURL:(id)a0;
+ (id)assetCacheWithURL:(id)a0;

- (id)initWithURL:(id)a0;
- (void)setMaxSize:(long long)a0;
- (void)dealloc;
- (id)allKeys;
- (id)URL;
- (BOOL)isDefunct;
- (long long)maxSize;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (BOOL)isPlayableOffline;
- (long long)currentSize;
- (BOOL)isHTTPLiveStreamingCacheEnabled;
- (void)enableAutomaticCacheSizeManagement;
- (id)initWithURL:(id)a0 enableCRABSCache:(BOOL)a1 enableHLSCache:(BOOL)a2;
- (BOOL)isProgressiveDownloadCacheEnabled;
- (id)lastModifiedDateOfEntryForKey:(id)a0;
- (long long)maxEntrySize;
- (void)removeEntryForKey:(id)a0;
- (void)setMaxEntrySize:(long long)a0;
- (long long)sizeOfEntryForKey:(id)a0;

@end
