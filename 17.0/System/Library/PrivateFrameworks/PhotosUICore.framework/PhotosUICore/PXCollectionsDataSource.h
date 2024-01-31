@interface PXCollectionsDataSource : PXSectionedDataSource

@property (readonly, nonatomic) id content;

- (id)collectionListForSection:(long long)a0;
- (id)collectionAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (long long)countForCollection:(id)a0;
- (id)existingAssetsFetchResultAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)indexPathForCollection:(id)a0;

@end
