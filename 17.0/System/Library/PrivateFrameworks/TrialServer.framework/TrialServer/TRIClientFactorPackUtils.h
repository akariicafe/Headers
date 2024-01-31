@interface TRIClientFactorPackUtils : NSObject

+ (id)aliasesInNamespace:(id)a0;
+ (id)unlinkedOnDemandAssetsWithFactorPack:(id)a0 flatbufferFactorLevels:(id)a1 factorPackPath:(id)a2 assetStore:(id)a3 maProvider:(id)a4 aliasToUnaliasMap:(id)a5 subscribedFactors:(id)a6 unlinkedMAAssetsOnDisk:(id *)a7;
+ (BOOL)enumerateMetadataForAssetsInFactorPack:(id)a0 flatbufferFactorLevels:(id)a1 assetStore:(id)a2 maProvider:(id)a3 aliasToUnaliasMap:(id)a4 subscribedFactors:(id)a5 ckBlock:(id /* block */)a6 maBlock:(id /* block */)a7;
+ (BOOL)_enumerateAssetFactorLevelsInFactorPack:(id)a0 trialAssetBlock:(id /* block */)a1 maAssetBlock:(id /* block */)a2;
+ (id)uniqueAssets:(id)a0;
+ (id)requiredAssetsForInstallationWithFactorPack:(id)a0 assetStore:(id)a1 maProvider:(id)a2 subscriptionSettings:(id)a3 aliasToUnaliasMap:(id)a4;
+ (void)_enumerateAssetFactorLevelsInFlatBufferStorage:(id)a0 trialAssetBlock:(id /* block */)a1 maAssetBlock:(id /* block */)a2;

@end
