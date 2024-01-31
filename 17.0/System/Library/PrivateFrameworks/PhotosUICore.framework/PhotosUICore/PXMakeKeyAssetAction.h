@class PHAssetCollection, PHAsset, PHObjectPlaceholder;

@interface PXMakeKeyAssetAction : PXPhotosAction

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) PHAsset *redoKeyAsset;
@property (readonly, nonatomic) PHAsset *undoKeyAsset;
@property (retain, nonatomic) PHObjectPlaceholder *adaptiveHighlightPlaceholder;

- (id)actionIdentifier;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)actionNameLocalizationKey;
- (id)initWithAssetCollection:(id)a0 keyAsset:(id)a1;
- (void)performUndo:(id /* block */)a0;

@end
