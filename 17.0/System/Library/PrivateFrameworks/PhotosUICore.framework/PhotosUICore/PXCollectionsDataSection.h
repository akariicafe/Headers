@interface PXCollectionsDataSection : PXDataSection

- (id)init;
- (long long)countForCollection:(id)a0;
- (id)existingAssetsFetchResultAtIndex:(long long)a0;
- (long long)indexOfCollection:(id)a0;
- (id)initWithCollectionsDataSource:(id)a0;
- (id)initWithCollectionsDataSource:(id)a0 lockStatePerCollection:(id)a1;
- (id)initWithDisplayCollection:(id)a0;
- (id)initWithDisplayCollection:(id)a0 lockState:(unsigned long long)a1;
- (unsigned long long)lockStateForCollection:(id)a0;

@end
