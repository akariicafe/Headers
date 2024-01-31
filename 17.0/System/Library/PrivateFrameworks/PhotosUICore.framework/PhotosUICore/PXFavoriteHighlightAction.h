@class PHPhotosHighlight, PHObjectPlaceholder;

@interface PXFavoriteHighlightAction : PXPhotosAction

@property (readonly, nonatomic) PHPhotosHighlight *originalHighlight;
@property (readonly, nonatomic) BOOL favorite;
@property (retain, nonatomic) PHObjectPlaceholder *adaptiveHighlightPlaceholder;

- (id)actionIdentifier;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)actionNameLocalizationKey;
- (id)initWithHighlight:(id)a0 favorite:(BOOL)a1;
- (void)performUndo:(id /* block */)a0;

@end
