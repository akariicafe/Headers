@class NSDictionary, NSCache, PUAssetsDataSource;

@interface PUAssetExplorerReviewScreenAssetsDataSource : PUAssetsDataSource

@property (readonly, nonatomic) PUAssetsDataSource *_originalDataSource;
@property (readonly, nonatomic) NSDictionary *_substitutedAssetsByUUID;
@property (readonly, nonatomic) NSCache *_assetReferenceByIndexPathCache;

- (id)assetReferenceAtIndexPath:(id)a0;
- (id)indexPathForAssetReference:(id)a0;
- (id)identifier;
- (id)assetCollectionAtIndexPath:(id)a0;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)indexPathForAssetCollection:(id)a0;
- (long long)numberOfSubItemsAtIndexPath:(id)a0;
- (id)initWithDataSource:(id)a0 substitutedAssets:(id)a1;

@end
