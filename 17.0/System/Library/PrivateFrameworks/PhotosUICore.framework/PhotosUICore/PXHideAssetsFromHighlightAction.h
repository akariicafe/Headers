@class PHPhotosHighlight, PHObjectPlaceholder;
@protocol PXFastEnumeration;

@interface PXHideAssetsFromHighlightAction : PXPhotosAction

@property (readonly, nonatomic) id<PXFastEnumeration> redoHiddenAssets;
@property (readonly, nonatomic) id<PXFastEnumeration> undoHiddenAssets;
@property (readonly, nonatomic) PHPhotosHighlight *highlight;
@property (retain, nonatomic) PHObjectPlaceholder *adaptiveHighlightPlaceholder;

- (id)actionIdentifier;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)actionNameLocalizationKey;
- (id)initWithAssets:(id)a0 highlight:(id)a1;
- (void)performUndo:(id /* block */)a0;

@end
