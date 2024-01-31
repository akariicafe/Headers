@class UIView, NSString, SUUITrackViewElement, SUPlayerStatus, NSMutableDictionary, SUUIPreviewProgressIndicator, SUUIGradientView, NSMapTable, SUUITracklistColumnData;

@interface SUUITracklistLockupCollectionViewCell : SUUIViewReuseCollectionViewCell <SUUIItemOfferButtonDelegate, SUUIPreviewContainerView, SUUIViewElementView> {
    NSMapTable *_buyButtonDescriptorToButton;
    SUUITracklistColumnData *_columnData;
    NSMutableDictionary *_columnViewsByIndex;
    NSMapTable *_imageViewToImageResourceCacheKey;
    SUPlayerStatus *_lastPlayerStatus;
    SUUIGradientView *_offerConfirmationGradientView;
    SUUIPreviewProgressIndicator *_previewProgressIndicator;
    long long _previewState;
    UIView *_separatorView;
    SUUITrackViewElement *_track;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_attributedStringForOrdinal:(id)a0 context:(id)a1;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_addFlipContainerViewWithFrontView:(id)a0 backView:(id)a1;
- (void)_audioPlayerStatusChangeNotification:(id)a0;
- (void)_buttonAction:(id)a0;
- (void)_cancelConfirmationAction:(id)a0;
- (void)_enumerateViewElementViewsUsingBlock:(id /* block */)a0;
- (void)_layoutConfirmationGradientRelativeToView:(id)a0 alpha:(double)a1;
- (id)_previewColumnView;
- (id)_previewControlViewElement;
- (id)_previewMediaURL;
- (void)_resolvePreviewStateAfterTransitionForFlipView:(id)a0;
- (void)_showConfirmationAction:(id)a0;
- (void)hidePreviewProgressAnimated:(BOOL)a0;
- (void)itemOfferButtonDidAnimateTransition:(id)a0;
- (void)itemOfferButtonWillAnimateTransition:(id)a0;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (void)showPreviewProgressWithStatus:(id)a0 animated:(BOOL)a1;
- (void)togglePreviewPlaybackAnimated:(BOOL)a0;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;

@end
