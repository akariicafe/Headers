@class NSString, NCToggleControlPair, UILabel, NCClickInteractionPresenter, UIPointerInteraction;
@protocol NCToggleControlDelegate;

@interface NCToggleControl : PLGlyphControl <NCClickInteractionPresenterDelegate, UIPointerInteractionDelegate, PLContentSizeCategoryAdjusting>

@property (readonly, nonatomic, getter=_toggleControlType) unsigned long long toggleControlType;
@property (readonly, nonatomic, getter=_titleLabel) UILabel *titleLabel;
@property (weak, nonatomic, getter=_managingPair, setter=_setManagingPair:) NCToggleControlPair *managingPair;
@property (retain, nonatomic, getter=_previewInteractionPlatterPresenter) NCClickInteractionPresenter *previewInteractionPlatterPresenter;
@property (nonatomic, getter=_wasExpandedPriorToControlEvent) BOOL expandedPriorToControlEvent;
@property (readonly, nonatomic, getter=_cachedEffectiveMaxExpandedSize) struct CGSize { double width; double height; } cachedEffectiveMaxExpandedSize;
@property (readonly, nonatomic, getter=_cachedEffectiveMaxUnexpandedSize) struct CGSize { double width; double height; } cachedEffectiveMaxUnexpandedSize;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *clearAllText;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic) unsigned int anchorEdge;
@property (nonatomic, getter=isGlyphAlwaysVisible) BOOL glyphAlwaysVisible;
@property (weak, nonatomic) id<NCToggleControlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

+ (void)performWithDefaultExpansionAnimation:(id /* block */)a0 completion:(id /* block */)a1;
+ (double)effectiveHeight:(BOOL)a0;
+ (id)_labelFont:(BOOL)a0;
+ (id)dismissControlWithMaterialRecipe:(long long)a0 clearAllText:(id)a1;
+ (id)showLessControlWithMaterialRecipe:(long long)a0 clearAllText:(id)a1 glyphOrientation:(long long)a2;

- (void)clickInteractionPresenterDidPresent:(id)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)_updateTitleLabelVisualStyling;
- (void)clickInteractionPresenterDidDismiss:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })_effectiveExpandedSize;
- (id)_labelFont;
- (void)_updateTitleLabelTextAttributes;
- (void)_handleTouchUpInsideWithEvent:(id)a0;
- (BOOL)dismissModalFullScreenIfNeeded;
- (BOOL)clickInteractionPresenterShouldBegin:(id)a0;
- (struct CGSize { double x0; double x1; })_effectiveUnexpandedSize;
- (struct CGSize { double x0; double x1; })_sizeThatFits:(struct CGSize { double x0; double x1; })a0 whenExpanded:(BOOL)a1;
- (double)_effectiveLeadingTrailingPadding;
- (double)_effectiveInternalPadding;
- (id)containerViewForClickInteractionPresenter:(id)a0;
- (void)_handleSecondaryClickEventForGestureRecognizer:(id)a0;
- (void)_configureTitleLabelIfNecessaryWithTitle:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (double)_effectiveHeight;
- (double)_cornerRadius;
- (double)_effectiveValueForMinValue:(double)a0 withFont:(id)a1;
- (void)clickInteractionPresenterDidBeginInteraction:(id)a0;
- (void)clickInteractionPresenterDidCommitToPresentation:(id)a0;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unexpandedFrame;
- (void)layoutSubviews;
- (void)addTarget:(id)a0 forPreviewInteractionPresentedContentWithAction:(SEL)a1;
- (void)_sendActionsForEvents:(unsigned long long)a0 withEvent:(id)a1;
- (void)setVisualStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })_effectiveGlyphSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
