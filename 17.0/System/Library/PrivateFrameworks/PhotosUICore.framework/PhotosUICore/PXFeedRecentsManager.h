@class NSOrderedSet, NSArray, PHPhotoLibrary, NSMutableArray;
@protocol PXFeedRecentsManagerDelegate;

@interface PXFeedRecentsManager : NSObject <PLCloudFeedEntriesObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver> {
    NSMutableArray *_pendingFeedEntriesChangeNotifications;
    NSMutableArray *_pendingAssetsChangeNotifications;
}

@property (retain, nonatomic, setter=_setPhotoLibrary:) PHPhotoLibrary *photoLibrary;
@property (nonatomic, setter=_setCount:) long long count;
@property (copy, nonatomic, setter=_setCachedRecentAssets:) NSOrderedSet *_cachedRecentAssets;
@property (copy, nonatomic, setter=_setCachedRecentPHAssets:) NSArray *_cachedRecentPHAssets;
@property (weak, nonatomic) id<PXFeedRecentsManagerDelegate> delegate;
@property (readonly, copy, nonatomic) NSOrderedSet *recentAssets;
@property (readonly, copy, nonatomic) NSArray *recentPHAssets;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_didFinishPostingNotifications:(id)a0;
- (void)assetsDidChange:(id)a0;
- (void)cloudFeedEntriesDidChange:(id)a0;
- (void)shouldReload:(id)a0;
- (void)_invalidateCachedRecentAssets;
- (BOOL)_updateCachedRecentAssets;
- (id)initWithPhotoLibrary:(id)a0 count:(long long)a1;

@end
