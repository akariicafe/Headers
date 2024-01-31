@class NSString, NSMapTable, NSMutableOrderedSet, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface FlexMobileAssetManagerV2 : FlexCloudManager <NSCacheDelegate> {
    NSString *_clientID;
    NSString *_mobileAssetTypeIdentifier;
    NSObject *_downloadThrottleLock;
    NSObject *_mobileAssetCacheLock;
    NSMutableOrderedSet *_pendingDownloadSet;
    NSMutableSet *_processingDownloadSet;
    NSMapTable *_dowloadOptionsMapping;
    NSMutableOrderedSet *_pendingPurgeSet;
    NSMutableSet *_processingPurgeSet;
    int _assetInstalledNotificationToken;
    int _catalogUpdatedNotificationToken;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *purgeQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *triggerDownloadAndPurgeQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadRequestQueue;
@property (nonatomic) BOOL includeArtworkInQueries;
@property (nonatomic) BOOL XMLPresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_assetURLForMobileAsset:(id)a0;
+ (id)assetWithNewestContentVersionInAssets:(id)a0 preferInstalled:(BOOL)a1;
+ (id)compatibilityFilterPredicate;

- (unsigned long long)assetStatus:(id)a0;
- (void).cxx_destruct;
- (id)fetchSongWithUID:(id)a0;
- (id)fetchSongsWithOptions:(id)a0;
- (id)_assetIDForMobileAsset:(id)a0;
- (void)_dispatchNextAsyncAssetDownloadAndPurge;
- (BOOL)_isDownloadingAsset:(id)a0;
- (BOOL)_isPurgingAsset:(id)a0;
- (void)_loadBundledArtworkForSongID:(id)a0;
- (void)_loadBundledSongForSongID:(id)a0;
- (id)_metadataMappingForUUIDSet:(id)a0;
- (id)_mobileAssetCancelDownloadResultStringValue:(long long)a0;
- (id)_mobileAssetDownloadOptionsForClientOptions:(id)a0;
- (id)_mobileAssetDownloadResultStringValue:(long long)a0;
- (id)_mobileAssetPurgeResultStringValue:(long long)a0;
- (id)_mobileAssetQueryResultStringValue:(long long)a0;
- (id)_mobileAssetsForAssetType:(id)a0 andUIDs:(id)a1;
- (id)_newestContentSetFromAssets:(id)a0 metadataMapping:(id)a1;
- (id)_processResults:(id)a0 metadataMapping:(id)a1;
- (void)_purgeAsset:(id)a0;
- (void)_registerAndHandleSystemMobileAssetNotifications;
- (long long)_responseForDownloadResult:(long long)a0;
- (void)_runAsyncAssetDownloadForMobileAsset:(id)a0;
- (void)_runNextAsyncAssetDownloadAndPurge;
- (void)_updateExistingSong:(id)a0 usingAsset:(id)a1 metadataAsset:(id)a2;
- (void)_updateExistingSong:(id)a0 usingAsset:(id)a1 metadataAsset:(id)a2 forceUpdate:(BOOL)a3;
- (void)_updateMetadataOnExistingSong:(id)a0 usingMetadataAsset:(id)a1;
- (id)_weightedKeywordsFromMetadataAsset:(id)a0;
- (void)cancelDownloadOfAllAssets;
- (void)cancelDownloadOfAsset:(id)a0;
- (void)fetchAllSongsWithCompletion:(id /* block */)a0;
- (id)filterByClientIDForAssets:(id)a0 forMetadataMapping:(id)a1;
- (id)initWithLibrary:(id)a0 options:(id)a1;
- (void)loadAssetWithID:(id)a0 forSongID:(id)a1;
- (void)requestDownloadOfAsset:(id)a0 withOptions:(id)a1;
- (void)requestPurgeOfAsset:(id)a0;

@end
