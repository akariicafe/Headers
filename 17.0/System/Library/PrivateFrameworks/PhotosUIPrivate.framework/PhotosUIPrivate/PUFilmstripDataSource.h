@class AVAsset, NSArray, NSMutableDictionary, NSMapTable;

@interface PUFilmstripDataSource : PUTilingDataSource {
    NSMutableDictionary *_assetByIndexPath;
    NSMapTable *_indexPathByAsset;
}

@property (readonly, nonatomic) AVAsset *asset;
@property (readonly, nonatomic) long long numberOfIndexes;
@property (copy, nonatomic) NSArray *indicatorInfos;

- (id)init;
- (id)assetAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (long long)numberOfSubItemsAtIndexPath:(id)a0;
- (double)_normalizedTimeForIndex:(long long)a0;
- (id)indexPathForAsset:(id)a0;
- (id)initWithAsset:(id)a0 numberOfIndexes:(long long)a1 indicatorInfos:(id)a2;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeRepresentedByAssetAtIndex:(long long)a0;

@end
