@class NSArray;

@interface PXMockAssetsDataSource : PXAssetsDataSource

@property (readonly, nonatomic) NSArray *assetsBySection;
@property (readonly, nonatomic) NSArray *assetCollections;

- (long long)numberOfItemsInSection:(long long)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectID:(id)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)initWithAssetsBySection:(id)a0 assetCollections:(id)a1;

@end
