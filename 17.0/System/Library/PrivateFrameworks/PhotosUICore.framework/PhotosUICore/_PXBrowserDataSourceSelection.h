@class NSArray, NSMutableArray;
@protocol PXDisplayAssetDataSource;

@interface _PXBrowserDataSourceSelection : PXBrowserSelectionSnapshot {
    NSMutableArray *_assets;
}

@property (readonly, nonatomic) NSArray *indexPaths;
@property (readonly, nonatomic) id<PXDisplayAssetDataSource> dataSource;
@property (readonly, nonatomic) NSArray *assets;

- (long long)mediaType;
- (void).cxx_destruct;
- (id)modelObjects;
- (long long)assetCount;
- (long long)estimatedAssetCount;
- (id)assetReferenceAtIndex:(long long)a0;
- (id)displayAssetAtIndex:(long long)a0;
- (long long)estimatedModelObjectsCount;
- (long long)indexOfAssetReference:(id)a0;
- (id)initWithIndexPaths:(id)a0 dataSource:(id)a1;

@end
