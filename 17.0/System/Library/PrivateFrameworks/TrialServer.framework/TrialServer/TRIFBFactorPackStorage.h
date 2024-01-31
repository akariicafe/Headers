@protocol TRIAssetExtracting, TRIPaths;

@interface TRIFBFactorPackStorage : NSObject {
    id<TRIPaths> _paths;
    id<TRIAssetExtracting> _extractor;
}

+ (id)relPathForMAReferenceWithFactorName:(id)a0;

- (id)init;
- (BOOL)updateSavedGlobalFactorPackAt:(id)a0 populatingAssetsForFactorNames:(id)a1;
- (BOOL)_removeUnreferencedFactorPackSetsWithNamespaceName:(id)a0 removedCount:(unsigned int *)a1;
- (id)_writeFactorPack:(id)a0 futurePath:(id)a1 forFactorNames:(id)a2 aliasToUnaliasMap:(id)a3 assetStore:(id)a4 tempDirRef:(id)a5;
- (BOOL)saveFactorPackToGlobal:(id)a0 forFactorNames:(id)a1 aliasToUnaliasMap:(id)a2;
- (BOOL)_referenceMAAssetWithId:(id)a0 assetStore:(id)a1 forFactorName:(id)a2 isFileFactor:(BOOL)a3 currentFactorPackPath:(id)a4 futureFactorPackPath:(id)a5;
- (id)_linkAssetWithId:(id)a0 assetStore:(id)a1 forFactorName:(id)a2 currentFactorPackPath:(id)a3 futureFactorPackPath:(id)a4;
- (BOOL)updateSavedGlobalFactorPackAt:(id)a0 deletingAssetsWithFactorNames:(id)a1;
- (void).cxx_destruct;
- (BOOL)_removeUnreferencedFactorPackSetsWithParentDir:(id)a0 removedCount:(unsigned int *)a1;
- (id)initWithPaths:(id)a0 extractor:(id)a1;
- (id)initWithPaths:(id)a0;
- (BOOL)_linkAssetsUpdatingFactorLevel:(id)a0 fromFactorPackWithId:(id)a1 usingAssetStore:(id)a2 currentFactorPackPath:(id)a3 futureFactorPackPath:(id)a4;
- (id)_removeAssetsWithFactorNames:(id)a0 copyingModifiedFactorLevelsWithPath:(id)a1 appendingToPathsToRemove:(id)a2 appendingToMARefsToRemove:(id)a3 tempDirRef:(id)a4;
- (id)_globalFactorPackProviderPlist;
- (id)_legacyParentDirForFactorLevelsWithNamespaceName:(id)a0;
- (id)_legacyPathForFactorLevelsWithFactorPackId:(id)a0 namespaceName:(id)a1;
- (id)_linkAssetsForFactorNames:(id)a0 aliasToUnaliasMap:(id)a1 copyingModifiedFactorLevelsWithPath:(id)a2 tempDirRef:(id)a3;
- (id)_parentDirForFactorLevelsWithNamespaceName:(id)a0;
- (id)_pathForFactorLevelsWithFactorPackId:(id)a0 namespaceName:(id)a1;
- (void)_reportFactorPackDiskUsagesWithNamespaceName:(id)a0 namespaceDirName:(id)a1 context:(id)a2;
- (id)legacyPathForFactorLevelsWithFactorPackId:(id)a0 namespaceName:(id)a1;
- (id)loadFactorLevelsWithDir:(id)a0 bufferSize:(unsigned long long *)a1;
- (id)loadFactorLevelsWithFactorPackId:(id)a0 namespaceName:(id)a1;
- (id)pathForFactorLevelsWithFactorPackId:(id)a0 namespaceName:(id)a1;
- (BOOL)removeUnreferencedFactorLevelsWithRemovedCount:(unsigned int *)a0;
- (BOOL)removeUnreferencedGlobalFactorPacksWithRemovedCount:(unsigned int *)a0;
- (void)reportFactorPackDiskUsagesUsingContext:(id)a0;
- (BOOL)saveFactorLevelsForFactorPack:(id)a0 populatingAssetsForFactorNames:(id)a1 aliasToUnaliasMap:(id)a2 factorLevelsByNamePath:(id *)a3 factorLevelsByIdPath:(id *)a4;
- (BOOL)updateSavedFactorLevelsWithFactorPackId:(id)a0 namespaceName:(id)a1 deletingAssetsWithFactorNames:(id)a2 inUseAssetBehavior:(unsigned char)a3;
- (BOOL)updateSavedFactorLevelsWithFactorPackId:(id)a0 namespaceName:(id)a1 populatingAssetsForFactorNames:(id)a2 aliasToUnaliasMap:(id)a3;
- (void)useNamespaceIdInSchema:(BOOL)a0;

@end
