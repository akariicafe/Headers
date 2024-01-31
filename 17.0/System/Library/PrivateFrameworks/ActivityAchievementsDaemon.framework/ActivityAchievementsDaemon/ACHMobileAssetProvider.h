@class _HKMobileAssetDownloadManager, NSUserDefaults;

@interface ACHMobileAssetProvider : NSObject

@property (retain, nonatomic) _HKMobileAssetDownloadManager *mobileAssetDownloadManager;
@property (retain, nonatomic) NSUserDefaults *nanoUserDefaults;
@property (nonatomic) double downloadDelayOverride;
@property (copy) id /* block */ remoteDownloadCompleteCompletion;

- (id)init;
- (void)_fetchLocalAssetsWithCompletion:(id /* block */)a0;
- (long long)purgeAllDownloadedAssets;
- (void)availableAssetsWithCompletion:(id /* block */)a0;
- (void)_processAssets:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)_assetIsInstalled:(id)a0;
- (id)initWithMobileAssetDownloadManager:(id)a0;
- (void)_downloadRemoteCatalogAndAssets;
- (void)_getCurrentAsssetAndOlderAssetsFromAssets:(id)a0 completion:(id /* block */)a1;
- (void)downloadRemoteCatalog;
- (void)_downloadRemoteAssets:(id)a0 installedAssets:(id)a1;
- (void)_removeAssets:(id)a0;
- (void)_downloadAssets:(id)a0 withCompletion:(id /* block */)a1;
- (id)_assetsGroupedByUniqueNameAndType:(id)a0;
- (id)_compatibilityVersionQueryParameters;
- (long long)downloadedAssetDiskUsageInBytes;
- (double)_downloadDelay;

@end
