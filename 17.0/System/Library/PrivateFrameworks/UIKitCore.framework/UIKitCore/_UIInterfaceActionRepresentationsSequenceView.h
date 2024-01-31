@class UIInterfaceActionVisualStyle, _UIInterfaceActionSeparatableSequenceView, NSArray, UIView, NSLayoutConstraint;

@interface _UIInterfaceActionRepresentationsSequenceView : UIScrollView {
    long long _sizingSeparatedContentSequenceViewToFitDisabledCount;
}

@property (readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint;
@property (readonly, nonatomic) _UIInterfaceActionSeparatableSequenceView *separatedContentSequenceView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
@property (retain, nonatomic) NSArray *arrangedActionRepresentationViews;
@property (nonatomic) long long actionLayoutAxis;
@property (nonatomic) unsigned long long visualCornerPosition;
@property (nonatomic) BOOL visualCornerForcedOverride;

- (void)_updateBackgroundView;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_notifyDidScroll;
- (id)_systemDefaultFocusGroupIdentifier;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (void)_applyVisualStyle;
- (void)_applyVisualStyleToSeparatedContentSequenceView;
- (double)_contentFitCanScrollThreshold;
- (void)_disableSeparatedContentSequenceViewToFit;
- (void)_enableSeparatedContentSequenceViewToFit;
- (BOOL)_isHorizontalLayout;
- (void)_loadDefaultSizingConstraints;
- (double)_minimumNumberOfRowsRequiredVisible;
- (struct CGSize { double x0; double x1; })_sizeByApplyingLayoutMarginsAsOutsetToSize:(struct CGSize { double x0; double x1; })a0;
- (void)_temporarilySkipSizingSeparatedContentSequenceViewToFit;
- (void)_updateMinimumHeightConstraint;
- (void)_updateSeparatedContentSequenceViewToFitSizeIfPossible;
- (void)_willUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (double)fittingWidthForLayoutAxis:(long long)a0;
- (id)initWithVisualStyle:(id)a0;
- (void)reloadDisplayedContentVisualStyle;

@end
