@class PHAssetCollection, PHAsset, PHFetchResult;
@protocol PXFastEnumeration;

@interface PXRearrangeAssetCollectionAction : PXPhotosAction {
    PHFetchResult *_beforeFetchResult;
    PHFetchResult *_afterFetchResult;
}

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) id<PXFastEnumeration> movedAssets;
@property (readonly, nonatomic) PHAsset *targetAsset;

+ (BOOL)canPerformOnCollection:(id)a0;

- (id)actionIdentifier;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_canPerformUndo;
- (id)actionNameLocalizationKey;
- (long long)adjustedTargetIndexForFetchResult:(id)a0 movedAssets:(id)a1 targetAsset:(id)a2;
- (id)initWithAssetCollection:(id)a0 movedAssets:(id)a1 targetAsset:(id)a2;
- (void)performUndo:(id /* block */)a0;

@end
