@class _LTDAssetModel, NSArray, _LTOfflineAssetManager, _LTLocalePair, _LTDOfflineConfigurationModel;

@interface _LTSpeechTranslationAssetInfo : NSObject {
    _LTOfflineAssetManager *_assetManager;
    _LTLocalePair *_localePair;
    _LTDOfflineConfigurationModel *_offlineConfig;
    _LTDAssetModel *_sourceASRModel;
    _LTDAssetModel *_targetASRModel;
    NSArray *_allAssets;
    NSArray *_mtAssets;
    NSArray *_missingAssets;
    NSArray *_missingMTAssets;
    BOOL _needsUpdate;
    NSArray *_modelURLs;
}

+ (void)_createSymlinkDirectoryForLocalePair:(id)a0 assets:(id)a1;
+ (id)_languagePairDirectoryForLocalePair:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)_referenceAssets:(id)a0 catalogAssets:(id)a1;
- (long long)_mtModelOfflineState;
- (BOOL)_validateSymlinksForAssets:(id)a0;
- (id)availabilityInfo;
- (void)createSymlinkDirectoryForMTAssets;
- (void)downloadAssetsUserInitiated:(BOOL)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)initWithInstalledAssets:(id)a0 catalogAssets:(id)a1 localePair:(id)a2 offlineConfig:(id)a3 assetManager:(id)a4;
- (BOOL)isCompleteBidirectionalModel;
- (BOOL)isCompletePassthroughModel;
- (void)purgeAssetUserInitiated:(BOOL)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)speechModelURLForLocale:(id)a0;
- (id)speechModelVersionForLocale:(id)a0;
- (id)translationModelURLs;
- (BOOL)updateAvailableInAssets:(id)a0;

@end
