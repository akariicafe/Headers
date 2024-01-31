@class CDMTuriTrialAssetsManager, NSString, CDMDefaultAssetsManager, NSFileManager, NSLocale, CDMUAFAssetsManager;

@interface CDMAssetsManager : NSObject {
    CDMDefaultAssetsManager *_cdmDefaultAssetsManager;
    CDMTuriTrialAssetsManager *_cdmTuriTrialAssetsManager;
    CDMUAFAssetsManager *_cdmUAFAssetsManager;
    NSFileManager *_fileManager;
}

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *assetDirPath;

+ (id)getFactorNamesForService:(id)a0;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (void)setupWithError:(id *)a0;
- (void)_setupTuriTrialAssetManager:(id *)a0;
- (void)_setupUafAssetManager:(id *)a0;
- (BOOL)areAssetsAvailableForServices:(id)a0 inAssetPaths:(id)a1 withError:(id *)a2;
- (BOOL)areAssetsAvailableForServices:(id)a0 inAssetPaths:(id)a1 withError:(id *)a2 withSelfMetadata:(id)a3 withSelfContextId:(id)a4 withDataDispatcherContext:(id)a5;
- (id)extractFactorAndFoldersForServices:(id)a0;
- (id)getAssetsByFactorNamesForServices:(id)a0;
- (id)getFactorNamesForNonSkippableServices:(id)a0;
- (id)getFactorToUnprocessedNLAsset:(id)a0;
- (id)initWithLocale:(id)a0 assetDirPath:(id)a1;
- (id)initWithLocale:(id)a0 assetDirPath:(id)a1 graphName:(id)a2;
- (BOOL)isAssetAvailableForService:(id)a0 inAssetPaths:(id)a1 withError:(id *)a2;
- (id)processNLAsset:(id)a0 withAssetFolders:(id)a1;
- (id)processSideLoadedAssetForNLAsset:(id)a0 withAssetFolders:(id)a1;
- (BOOL)promoteAssetsForServices:(id)a0 withFailedServices:(id)a1 withSelfContextId:(id)a2 withSelfMetadata:(id)a3 withDataDispatcherContext:(id)a4;
- (BOOL)registerForServices:(id)a0 withAssetsDelegate:(id)a1 selfContextId:(id)a2 selfMetadata:(id)a3 dataDispatcherContext:(id)a4;
- (BOOL)setAssetsProvisionalForServices:(id)a0 withSelfContextId:(id)a1 withSelfMetadata:(id)a2 withDataDispatcherContext:(id)a3;

@end
