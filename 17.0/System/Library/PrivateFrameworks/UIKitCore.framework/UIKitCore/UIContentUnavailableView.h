@class UILabel, NSString, UIContentUnavailableConfiguration, UIImageView, UIButton, _UISystemBackgroundView, _UIContentUnavailableScrollView, UIActivityIndicatorView;

@interface UIContentUnavailableView : UIView <UIScrollViewDelegate, UIContentView> {
    double _preferredMaxLayoutWidth;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    struct { unsigned char isEmbeddedInWrapperView : 1; unsigned char trackingKeyboardFrame : 1; unsigned char adjustsLayoutForKeyboard : 1; unsigned char imageViewFrameInvalid : 1; unsigned char activityIndicatorFrameInvalid : 1; unsigned char textLabelFrameInvalid : 1; unsigned char secondaryTextLabelFrameInvalid : 1; unsigned char buttonFrameInvalid : 1; unsigned char secondaryButtonFrameInvalid : 1; } _contentViewFlags;
}

@property (readonly, nonatomic, getter=_imageView) UIImageView *imageView;
@property (readonly, nonatomic, getter=_textLabel) UILabel *textLabel;
@property (readonly, nonatomic, getter=_secondaryTextLabel) UILabel *secondaryTextLabel;
@property (readonly, nonatomic, getter=_button) UIButton *button;
@property (readonly, nonatomic, getter=_secondaryButton) UIButton *secondaryButton;
@property (readonly, nonatomic, getter=_activityIndicator) UIActivityIndicatorView *activityIndicator;
@property (readonly, nonatomic, getter=_scrollView) _UIContentUnavailableScrollView *scrollView;
@property (readonly, nonatomic, getter=_backgroundView) _UISystemBackgroundView *backgroundView;
@property (readonly, nonatomic) BOOL shouldReparentScrollViewPanGestureRecognizer;
@property (copy, nonatomic) UIContentUnavailableConfiguration *configuration;
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_encodableSubviews;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_scrollViewInsets;
- (void)_clearInvalidFrameFlags;
- (double)_keyboardInset;
- (id)_containerView;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)scrollViewDidChangeAdjustedContentInset:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)_setMultilineContextWidth:(double)a0;
- (void)_reconfigureKeyboardLayoutAdjustment;
- (void)didMoveToSuperview;
- (void)_applyBackgroundConfiguration:(id)a0;
- (double)_preferredMaxLayoutWidth;
- (void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_computeLayoutInfoForView:(id)a0 info:(struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } *)a1 layoutInfo:(struct UIContentUnavailableViewLayoutInfo { struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x0; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x1; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x2; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x3; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x4; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x5; BOOL x6; BOOL x7; BOOL x8; long long x9; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x10; struct CGSize { double x0; double x1; } x11; struct CGSize { double x0; double x1; } x12; } *)a2;
- (void)_applyConfiguration:(id)a0;
- (void)_handleKeyboardNotification:(id)a0 aboutToHide:(BOOL)a1;
- (id)initWithConfiguration:(id)a0;
- (void)_keyboardAboutToChangeFrame:(id)a0;
- (void).cxx_destruct;
- (void)_keyboardAboutToHide:(id)a0;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (double)_multilineContextWidth;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)supportsConfiguration:(id)a0;
- (struct UIContentUnavailableViewLayoutInfo { struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x0; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x1; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x2; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x3; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x4; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x5; BOOL x6; BOOL x7; BOOL x8; long long x9; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x10; struct CGSize { double x0; double x1; } x11; struct CGSize { double x0; double x1; } x12; })_computeLayoutInfoRestrictedToSize:(struct CGSize { double x0; double x1; })a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_alignmentInsetsForView:(id)a0;
- (BOOL)_prefersEqualButtonAndSecondaryButtonWidths;
- (void)_checkWhetherEmbeddedInWrapperView;
- (void)_computeButtonLayoutInfo:(struct UIContentUnavailableViewLayoutInfo { struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x0; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x1; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x2; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x3; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x4; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x5; BOOL x6; BOOL x7; BOOL x8; long long x9; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x10; struct CGSize { double x0; double x1; } x11; struct CGSize { double x0; double x1; } x12; } *)a0;
- (void)layoutSubviews;
- (void)_keyboardAboutToShow:(id)a0;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
