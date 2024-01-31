@class NSDictionary, PXCollectionsDataSource;

@interface _PXCollectionsDataSourceSection : PXCollectionsDataSection {
    long long _count;
}

@property (readonly, nonatomic) PXCollectionsDataSource *collectionsDataSource;
@property (readonly, nonatomic) NSDictionary *lockStatePerCollection;
@property (readonly, nonatomic) unsigned long long section;

- (id)content;
- (id)objectAtIndex:(long long)a0;
- (long long)count;
- (void).cxx_destruct;
- (long long)countForCollection:(id)a0;
- (id)existingAssetsFetchResultAtIndex:(long long)a0;
- (long long)indexOfCollection:(id)a0;
- (id)initWithCollectionsDataSource:(id)a0;
- (id)initWithCollectionsDataSource:(id)a0 lockStatePerCollection:(id)a1;
- (unsigned long long)lockStateForCollection:(id)a0;

@end
