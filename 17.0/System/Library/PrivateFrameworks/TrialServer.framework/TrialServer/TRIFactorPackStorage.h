@protocol TRIAssetExtracting, TRIPaths;

@interface TRIFactorPackStorage : NSObject {
    id<TRIPaths> _paths;
    id<TRIAssetExtracting> _extractor;
}

+ (id)relPathForMAReferenceWithFactorName:(id)a0;

- (id)loadParsedFactorPackWithDir:(id)a0;
- (id)_legacyParentDirForFactorPackWithNamespaceName:(id)a0;
- (id)init;
- (BOOL)updateSavedGlobalFactorPackAt:(id)a0 populatingAssetsForFactorNames:(id)a1;
- (BOOL)updateSavedFactorPackWithId:(id)a0 namespaceName:(id)a1 deletingAssetsWithFactorNames:(id)a2 inUseAssetBehavior:(unsigned char)a3;
- (BOOL)_removeUnreferencedFactorPackSetsWithNamespaceName:(id)a0 removedCount:(unsigned int *)a1;
- (id)_removeAssetsWithFactorNames:(id)a0 copyingModifiedFactorPackWithPath:(id)a1 appendingToPathsToRemove:(id)a2 appendingToMARefsToRemove:(id)a3 tempDirRef:(id)a4;
- (id)_writeFactorPack:(id)a0 futurePath:(id)a1 forFactorNames:(id)a2 aliasToUnaliasMap:(id)a3 assetStore:(id)a4 tempDirRef:(id)a5;
- (BOOL)saveFactorPackToGlobal:(id)a0 forFactorNames:(id)a1 aliasToUnaliasMap:(id)a2;
- (BOOL)_referenceMAAssetWithId:(id)a0 assetStore:(id)a1 forFactorName:(id)a2 isFileFactor:(BOOL)a3 currentFactorPackPath:(id)a4 futureFactorPackPath:(id)a5;
- (id)_linkAssetWithId:(id)a0 assetStore:(id)a1 forFactorName:(id)a2 currentFactorPackPath:(id)a3 futureFactorPackPath:(id)a4;
- (id)_parentDirForFactorPackWithNamespaceName:(id)a0;
- (BOOL)updateSavedGlobalFactorPackAt:(id)a0 deletingAssetsWithFactorNames:(id)a1;
- (id)_pathForFactorPackWithId:(id)a0 namespaceName:(id)a1;
- (id)loadFactorPackWithId:(id)a0 namespaceName:(id)a1;
- (id)legacyPathForFactorPackWithId:(id)a0 namespaceName:(id)a1;
- (BOOL)removeUnreferencedFactorPacksWithRemovedCount:(unsigned int *)a0;
- (id)_linkAssetsForFactorNames:(id)a0 aliasToUnaliasMap:(id)a1 copyingModifiedFactorPackWithPath:(id)a2 tempDirRef:(id)a3;
- (void).cxx_destruct;
- (BOOL)_removeUnreferencedFactorPackSetsWithParentDir:(id)a0 removedCount:(unsigned int *)a1;
- (id)initWithPaths:(id)a0 extractor:(id)a1;
- (id)loadParsedFactorPackWithId:(id)a0 namespaceName:(id)a1;
- (BOOL)updateSavedFactorPackWithId:(id)a0 namespaceName:(id)a1 populatingAssetsForFactorNames:(id)a2 aliasToUnaliasMap:(id)a3;
- (BOOL)saveFactorPack:(id)a0 populatingAssetsForFactorNames:(id)a1 aliasToUnaliasMap:(id)a2 factorPackByNamePath:(id *)a3 factorPackByIdPath:(id *)a4;
- (id)initWithPaths:(id)a0;
- (id)pathForFactorPackWithId:(id)a0 namespaceName:(id)a1;
- (id)_legacyPathForFactorPackWithId:(id)a0 namespaceName:(id)a1;
- (BOOL)_linkAssetsUpdatingFactorLevel:(id)a0 fromFactorPackWithId:(id)a1 usingAssetStore:(id)a2 currentFactorPackPath:(id)a3 futureFactorPackPath:(id)a4;
- (id)loadFactorPackWithDir:(id)a0;

@end
