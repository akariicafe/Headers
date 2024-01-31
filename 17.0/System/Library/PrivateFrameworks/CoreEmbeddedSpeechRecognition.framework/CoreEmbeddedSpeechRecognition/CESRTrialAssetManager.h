@class SFEntitledTrialAssetManager;

@interface CESRTrialAssetManager : NSObject

@property (readonly, nonatomic) SFEntitledTrialAssetManager *manager;

+ (id)sharedInstance;
+ (BOOL)factorName:(id)a0 belongsToAssetType:(unsigned long long)a1;
+ (id)jsonFilenameForAssetType:(unsigned long long)a0;

- (void)wait;
- (id)init;
- (void)setAssetsProvisionalForAssetType:(unsigned long long)a0;
- (BOOL)purgeInstalledAssetsExceptLanguages:(id)a0 assetType:(unsigned long long)a1 error:(id *)a2;
- (id)installedAssetWithConfig:(id)a0;
- (void)startDownloadLevelsForAsset:(unsigned long long)a0 withFactor:(id)a1 withClient:(id)a2 withNamespace:(id)a3 urgent:(BOOL)a4 progress:(id /* block */)a5 completion:(id /* block */)a6;
- (void)switchToNewAssetsForAssetType:(unsigned long long)a0;
- (id)installedAssetWithConfig:(id)a0 regionId:(id)a1 triggerDownload:(BOOL)a2;
- (id)supportedLanguagesWithAssetType:(unsigned long long)a0;
- (id)triClients;
- (BOOL)setAssetsPurgeability:(BOOL)a0 forLanguages:(id)a1 assetType:(unsigned long long)a2;
- (void)registerAssetDelegate:(id)a0 assetType:(unsigned long long)a1;
- (id)initWithClients:(id)a0 cleanupDuration:(unsigned long long)a1;
- (BOOL)purgeInstalledAssetForAssetType:(unsigned long long)a0 language:(id)a1 regionId:(id)a2 error:(id *)a3;
- (void)downloadAssetOfType:(unsigned long long)a0 language:(id)a1 urgent:(BOOL)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)downloadAssetOfType:(unsigned long long)a0 language:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)releaseClientsForAssetType:(unsigned long long)a0;
- (id)modelQualityTypeStatusStringWithConfig:(id)a0;
- (void)replaceCorruptAssetWithConfig:(id)a0;
- (id)installationStatusForLanguagesForAssetType:(unsigned long long)a0 includeDetailedStatus:(BOOL)a1 error:(id *)a2;
- (BOOL)setAssetsPurgeability:(BOOL)a0 exceptLanguages:(id)a1 assetType:(unsigned long long)a2;
- (void)promoteAssetsForAssetType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)downloadAssetOfType:(unsigned long long)a0 language:(id)a1 urgent:(BOOL)a2 forceUpgrade:(BOOL)a3 progressHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (id)installedAssetOfType:(unsigned long long)a0 language:(id)a1;
- (id)initWithSFEntitledTrialAssetManager:(id)a0;
- (void)downloadStatusWithConfig:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (BOOL)setAssetsPurgeabilityExceptLanguages:(id)a0 assetType:(unsigned long long)a1;
- (id)installedAssetWithConfig:(id)a0 regionId:(id)a1;
- (id)installedFileAssetOfAssetType:(unsigned long long)a0 factorName:(id)a1;
- (BOOL)dictationIsEnabled;
- (void)releaseClients;

@end
