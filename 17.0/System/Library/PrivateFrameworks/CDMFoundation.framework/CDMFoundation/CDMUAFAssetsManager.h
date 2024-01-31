@class NSString, NSArray, NSDictionary, NSMutableDictionary;

@interface CDMUAFAssetsManager : NSObject {
    NSArray *_uafClientManagers;
    NSDictionary *_assetSetNameToUafClientManager;
    NSDictionary *_assetSetNameToFactors;
    NSDictionary *_factorToAssetSetName;
    NSMutableDictionary *_assetSetNameToObserver;
}

@property (readonly, nonatomic) NSString *locale;

+ (id)getNLAssetFromUAFAssetPostValidation:(id)a0 asset:(id)a1 locale:(id)a2 assetSetName:(id)a3;
+ (id)getAssistantUsages:(id)a0;
+ (id)getFactorsForClientManager:(id)a0;
+ (id)getNLAssetFromUAFAsset:(id)a0 withFactor:(id)a1 withAssetSetName:(id)a2;
+ (id)getNLUAFClientManagers;
+ (id)getSsuUsages:(id)a0;
+ (id)getUAFClientManagersForLocale:(id)a0 withGraphName:(id)a1;
+ (void)reInitCDMUAFAssetsCache;
+ (void)setAssetsAvailabilityForFactors:(id)a0 withAssetSet:(id)a1 forAssetSetName:(id)a2 withDelegateHandler:(id)a3 withFactorAndFolders:(id)a4 useFileManager:(id)a5;
+ (void)subscribeToSsuAssetsForLocale:(id)a0;
+ (BOOL)validateFactors:(id)a0 inAssetSet:(id)a1 forLocale:(id)a2 withAssetSetName:(id)a3;

- (void).cxx_destruct;
- (void)setupWithError:(id *)a0;
- (id)getAssetSetNamesForFactorNames:(id)a0;
- (id)populateFactorToAssetSetNameForAssetSetNameToFactors:(id)a0 withError:(id *)a1;
- (BOOL)areFactorsValid:(id)a0;
- (id)filterFactors:(id)a0;
- (id)getAssetSetNameToUafClientManagerWithError:(id *)a0;
- (id)getUAFAssetsForFactors:(id)a0;
- (id)getUafClientManagerForAssetSetName:(id)a0;
- (id)initWithLocale:(id)a0 withGraphName:(id)a1;
- (id)populateAssetSetNameToFactorsForAssetSetNameToUafClientManager:(id)a0 withError:(id *)a1;
- (BOOL)promoteAssetsForAssetSetNames:(id)a0 selfContextId:(id)a1 selfMetadata:(id)a2 dataDispatcherContext:(id)a3;
- (BOOL)promoteAssetsForFactors:(id)a0 withFailedFactors:(id)a1 withSelfContextId:(id)a2 withSelfMetadata:(id)a3 withDataDispatcherContext:(id)a4;
- (void)registerForFactors:(id)a0 inAssetSetName:(id)a1 withAssetsDelegate:(id)a2 withFactorAndFolders:(id)a3 useFileManager:(id)a4;
- (BOOL)registerForFactors:(id)a0 withAssetsDelegate:(id)a1 withFactorAndFolders:(id)a2 useFileManager:(id)a3 withSelfContextId:(id)a4 withSelfMetadata:(id)a5 withDataDispatcherContext:(id)a6;
- (BOOL)setAssetsProvisionalForFactorNames:(id)a0 selfContextId:(id)a1 selfMetadata:(id)a2 dataDispatcherContext:(id)a3;
- (BOOL)setAssetsProvisionalForFactors:(id)a0 withSelfContextId:(id)a1 withSelfMetadata:(id)a2 withDataDispatcherContext:(id)a3;

@end
