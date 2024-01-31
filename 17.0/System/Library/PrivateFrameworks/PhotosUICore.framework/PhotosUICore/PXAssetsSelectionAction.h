@class PXPhotosDataSource, PXSelectionSnapshot;
@protocol PXFastEnumeration;

@interface PXAssetsSelectionAction : PXPhotosAction

@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly, nonatomic) id<PXFastEnumeration> selectedAssets;

- (void).cxx_destruct;
- (void)enumerateSelectedAssetIndexSetsUsingBlock:(id /* block */)a0;
- (id)initWithSelectionSnapshot:(id)a0;

@end
