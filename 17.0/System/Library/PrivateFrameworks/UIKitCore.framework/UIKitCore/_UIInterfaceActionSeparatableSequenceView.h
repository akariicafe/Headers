@class NSArray, UIInterfaceActionVisualStyle, UIStackView;

@interface _UIInterfaceActionSeparatableSequenceView : UIView

@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) NSArray *arrangedContentSeparatorViews;
@property (readonly, nonatomic) NSArray *arrangedContentViewsDistributionConstraints;
@property (retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
@property (nonatomic) long long axis;
@property (nonatomic) long long distribution;
@property (retain, nonatomic) NSArray *arrangedContentViews;
@property (nonatomic) unsigned long long visualCornerPosition;
@property (nonatomic) BOOL visualCornerForcedOverride;

- (void)layoutSublayersOfLayer:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateConstraints;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_addSeparatorToStackAndMutableArray:(id)a0 preferSectionStyle:(BOOL)a1;
- (long long)_dimensionAttributeToConstrainEqual;
- (BOOL)_isVerticalLayout;
- (void)_markRoundedCornerPositionOnAllCornersOfView:(id)a0;
- (void)_markRoundedCornerPositionOnLeadingEdgeOfView:(id)a0;
- (void)_markRoundedCornerPositionOnNoCornersOfView:(id)a0;
- (void)_markRoundedCornerPositionOnTrailingEdgeOfView:(id)a0;
- (void)_reloadContentDistributionConstraintsForArrangedContentViews;
- (void)_reloadStackViewArrangement;
- (long long)_separatorConstantSizedAxis;
- (void)_setLayoutDebuggingIdentifier:(id)a0;
- (void)_setRoundedCornersOfView:(id)a0 toCornerPosition:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_stackViewFrameForViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_systemLayoutSizeFittingStackView:(struct CGSize { double x0; double x1; })a0;
- (void)_updateActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisibleSetting;
- (void)_updateActionSpacing;
- (void)_updateLayoutWithStackFrameForActionSequenceEdgeInsets;
- (void)_updateRoundedCornerPositionForActionRepViews;
- (void)_updateSeparatorConstantSizedAxis;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewBoundsForStackViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_withUnsatisfiableConstraintsLoggingSuspendedIfEngineDelegateExists:(id /* block */)a0;
- (double)fittingWidthForLayoutAxis:(long long)a0;
- (id)initWithVisualStyle:(id)a0;
- (void)reloadDisplayedContentVisualStyle;

@end
