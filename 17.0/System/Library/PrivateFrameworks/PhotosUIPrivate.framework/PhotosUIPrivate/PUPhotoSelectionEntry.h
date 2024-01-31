@class PHFetchResult, NSIndexSet, NSArray, NSMutableSet, PHAssetCollection, NSMutableIndexSet;

@interface PUPhotoSelectionEntry : NSObject <NSCopying> {
    BOOL _hasValidAssetIndexes;
    NSMutableSet *_selectedAssets;
    NSMutableIndexSet *_selectedIndexes;
}

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) PHFetchResult *fetchResult;
@property (readonly, nonatomic) NSIndexSet *selectedIndexes;
@property (readonly, nonatomic) NSArray *selectedAssets;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_ensureValidAssetIndexes;
- (void)deselectAssetsAtIndexes:(id)a0;
- (void)enumerateSelectedAssetsWithBlock:(id /* block */)a0;
- (void)handlePhotoLibraryChange:(id)a0;
- (id)initWithAssetCollection:(id)a0 fetchResult:(id)a1 uniqueSelectedAssets:(id)a2;
- (void)invalidateAllAssetIndexes;
- (BOOL)isIndexSelected:(unsigned long long)a0;
- (void)selectAssetsAtIndexes:(id)a0;
- (void)setSelectedAssetsSet:(id)a0;

@end
