@interface _LTDAssetService : NSObject <_LTDAssetServiceProtocol>

@property (class, retain) Class serviceProvider;
@property (class, nonatomic) BOOL needsCatalogRefresh;

+ (void)initialize;
+ (void)bootstrapWithCompletion:(id /* block */)a0;
+ (id)assetDirectoryURL;
+ (id)_libraryDirectory;
+ (void)_installConfigAsset:(id)a0 completion:(id /* block */)a1;
+ (id)_assetsIdentifiersForPairNames:(id)a0 error:(id *)a1;
+ (id)_assetsSortedByVersion:(id)a0;
+ (long long)_catalogRefreshInterval;
+ (BOOL)_isCatalogRefreshWaitExpired;
+ (id)_pairNamesForLocales:(id)a0;
+ (void)_refreshHotfixWithCompletion:(id /* block */)a0;
+ (id)_ttsAssetsForLocales:(id)a0;
+ (unsigned long long)assetTypeForAssetIdentifier:(id)a0;
+ (void)assetsForLocales:(id)a0 completion:(id /* block */)a1;
+ (id)assetsForLocales:(id)a0 error:(id *)a1;
+ (void)catalogAssetsWithCompletion:(id /* block */)a0;
+ (id)catalogAssetsWithError:(id *)a0;
+ (id)configAssetIfAvailableWithError:(id *)a0;
+ (void)configAssetWithCompletion:(id /* block */)a0;
+ (id)defaultCatalogTypeWithError:(id *)a0;
+ (void)downloadAsset:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)downloadAssets:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)downloadCatalogForAssetType:(id)a0 completion:(id /* block */)a1;
+ (id)filterAssets:(id)a0 forLocales:(id)a1 error:(id *)a2;
+ (id)filterConfigAssetFromAssets:(id)a0;
+ (void)installedAssetsWithCompletion:(id /* block */)a0;
+ (id)installedAssetsWithError:(id *)a0;
+ (id)matchingASRAssetForLocale:(id)a0 error:(id *)a1;
+ (id)matchingASRAssetInAssets:(id)a0 forLocale:(id)a1;
+ (void)purgeAsset:(id)a0 completion:(id /* block */)a1;
+ (void)queryAssetType:(id)a0 filter:(unsigned long long)a1 completion:(id /* block */)a2;
+ (id)queryAssetType:(id)a0 filter:(unsigned long long)a1 error:(id *)a2;
+ (void)refreshCatalogIfNeededWithCompletion:(id /* block */)a0;
+ (Class)serviceProviderForAsset:(id)a0;
+ (Class)serviceProviderForAssetIdentifier:(id)a0;
+ (Class)serviceProviderForAssetType:(id)a0;

@end
