@class PXAssetsDataSource;

@interface PUPXAssetsDataSource : PUAssetsDataSource

@property (readonly, nonatomic) PXAssetsDataSource *underlyingDataSource;

- (id)assetReferenceAtIndexPath:(id)a0;
- (id)init;
- (id)convertIndexPath:(id)a0 fromAssetsDataSource:(id)a1;
- (id)indexPathForAssetReference:(id)a0;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (long long)numberOfSubItemsAtIndexPath:(id)a0;
- (id)startingAssetReference;
- (id)initWithUnderlyingDataSource:(id)a0;

@end
