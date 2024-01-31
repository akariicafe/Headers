@interface CDMAssetsUtils : NSObject

+ (BOOL)areFactorsValid:(id)a0 inKnownFactors:(id)a1;
+ (id)appendPathWithServiceAssetFolder:(id)a0 assetPath:(id)a1;
+ (id)filterFactors:(id)a0 forAssetSets:(id)a1 withAssetSetNameToFactors:(id)a2;
+ (id)filterFactors:(id)a0 withFactorsInAssetSet:(id)a1;
+ (id)findExistFolderInAssetFolders:(id)a0 underBasePath:(id)a1 useFileManager:(id)a2;
+ (id)getAssetVersionFromAssetMetadata:(id)a0;
+ (BOOL)isCurrentServiceSkippableForAssetsAvailabilityCheck:(id)a0;
+ (BOOL)isNLAssetValid:(id)a0 forLocale:(id)a1;
+ (BOOL)isNLAssetValid:(id)a0 forLocale:(id)a1 withFolders:(id)a2 useFileManager:(id)a3;
+ (id)loadAssetMetadataFromAsset:(id)a0;

@end
