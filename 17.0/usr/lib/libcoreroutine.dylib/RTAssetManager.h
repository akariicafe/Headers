@class RTDefaultsManager, RTAssetProcessor, RTXPCActivityManager, RTDarwinNotificationHelper;

@interface RTAssetManager : RTService

@property (retain, nonatomic) RTAssetProcessor *assetProcessor;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDarwinNotificationHelper *notificationHelper;
@property (retain, nonatomic) RTXPCActivityManager *xpcActivityManager;

- (id)init;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (BOOL)nonUserInitiatedDownloadsAllowed;
- (void).cxx_destruct;
- (void)_copyRoutineAssetFromCoreLocationConfig:(id /* block */)a0;
- (void)_downloadAsset:(id)a0 handler:(id /* block */)a1;
- (void)_finalizeAssetUpdateOperationWithError:(id)a0;
- (void)_handleAssetDownloadResult:(long long)a0 asset:(id)a1 handler:(id /* block */)a2;
- (void)_handleCatalogDownloadWithType:(id)a0 downloadResult:(long long)a1 handler:(id /* block */)a2;
- (void)_handleMetadataQueryResult:(long long)a0 assetQuery:(id)a1 handler:(id /* block */)a2;
- (void)_handleRoutineConfigAssetChangedNotification;
- (void)_installAsset:(id)a0 fileManager:(id)a1 handler:(id /* block */)a2;
- (void)_performUpdateOfAssetsWithTypeAssetType:(id)a0 handler:(id /* block */)a1;
- (void)_setupRoutineConfigAssetChangedNotification;
- (void)copyRoutineAssetFromCoreLocationConfigWithHandler:(id /* block */)a0;
- (id)defaultAssetDownloadOptions;
- (id)defaultCatalogDownloadOptions;
- (id)defaultXPCActivityCriteria;
- (void)forceUpdateAssetMetadataWithHandler:(id /* block */)a0;
- (void)handleRoutineConfigAssetChangedNotification;
- (id)initWithDefaultsManager:(id)a0 assetProcessor:(id)a1 xpcActivityManager:(id)a2;
- (id)latestAssetFromAssets:(id)a0;
- (void)performUpdateOfAssetsWithTypeAssetType:(id)a0 handler:(id /* block */)a1;
- (void)setupRoutineConfigAssetChangedNotification;
- (void)updateAssetServerURL:(id)a0 assetType:(id)a1 handler:(id /* block */)a2;

@end
