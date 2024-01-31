@class AVAssetDownloadCacheInternal;

@interface AVAssetDownloadCache : AVAssetCache {
    AVAssetDownloadCacheInternal *_internal;
}

- (void)dealloc;
- (id)initWithAsset:(id)a0;
- (id)URL;
- (BOOL)isDefunct;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (BOOL)isPlayableOffline;
- (id)_asset;

@end
