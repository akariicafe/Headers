@class PHAsset, NSString;

@interface PXWallpaperAssetVideoContentProvider : PXVideoContentProvider {
    NSString *_contentIdentifier;
}

@property (readonly, nonatomic) PHAsset *asset;

+ (id)_loadingQueue;

- (id)init;
- (void).cxx_destruct;
- (id)contentIdentifier;
- (void)cancelLoading;
- (void)_handleLoadedPlayerItem:(id)a0 priority:(long long)a1 error:(id)a2;
- (void)_loadWallpaperAssetWithPriority:(long long)a0;
- (void)beginLoadingWithPriority:(long long)a0;
- (id)initWithWallpaperAsset:(id)a0;
- (void)makeUniqueContentIdentifier;

@end
