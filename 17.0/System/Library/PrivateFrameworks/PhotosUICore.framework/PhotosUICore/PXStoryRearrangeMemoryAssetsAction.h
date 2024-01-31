@class PHAsset, PXStoryModel;
@protocol PXFastEnumeration;

@interface PXStoryRearrangeMemoryAssetsAction : PXPhotosAction

@property (readonly, nonatomic) PXStoryModel *model;
@property (readonly, nonatomic) id<PXFastEnumeration> movedAssets;
@property (readonly, nonatomic) PHAsset *targetAsset;

- (id)actionIdentifier;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)actionNameLocalizationKey;
- (id)initWithModel:(id)a0 movedAssets:(id)a1 beforeAsset:(id)a2;
- (void)performUndo:(id /* block */)a0;

@end
