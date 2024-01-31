@class UIFont, NSLayoutConstraint;

@interface _UIStatusBarVisualProvider_FixedSplit : _UIStatusBarVisualProvider_Split

@property (class, readonly) double pillFontSize;
@property (class, readonly) double leadingCenteringOffset;
@property (class, readonly) double trailingCenteringOffset;
@property (class, readonly) double additionalBottomLeadingMargin;
@property (class, readonly) double pillCenteringOffset;
@property (class, readonly) double trailingEdgeInsetLeadingAdjustment;

@property (readonly) double nativeDisplayWidth;
@property (readonly) double leadingPillSpacing;
@property (readonly) double leadingPillInset;
@property (readonly) double leadingSmallPillSpacing;
@property (readonly) double leadingCenteringEdgeInset;
@property (readonly) double trailingCenteringEdgeInset;
@property (readonly) double pillCenteringEdgeInset;
@property (readonly) struct CGSize { double x0; double x1; } pillSize;
@property (readonly) UIFont *pillFont;
@property (readonly) UIFont *pillSmallFont;
@property (readonly) double bottomLeadingWidth;
@property (readonly) double bottomLeadingBaseline;
@property (readonly) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } leadingEdgeInsets;
@property (readonly) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } trailingEdgeInsets;
@property (retain, nonatomic) NSLayoutConstraint *leadingBottomConstraint;

+ (double)expandedPillFontSize;
+ (BOOL)showsLargeBatteryChargingAnimation;

- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })expandedEdgeInsets;
- (id)styleAttributesForStyle:(long long)a0;
- (double)leadingItemSpacing;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })expandedPillSize;
- (struct CGSize { double x0; double x1; })notchSize;
- (struct CGSize { double x0; double x1; })smallPillSize;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsFromCenteringEdgeInset:(double)a0 trailing:(BOOL)a1;
- (id)_orderedDisplayItemPlacements;
- (BOOL)_updateLowerRegionsWithData:(id)a0;
- (void)_updateSystemNavigationWithData:(id)a0;
- (id)animationForBackgroundActivityPillAnimation:(id)a0 duration:(double)a1 scale:(double)a2;
- (void)dataUpdated:(id)a0;
- (id)expandedPillFont;
- (void)itemCreated:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })notchRect;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)a0;
- (void)orientationUpdatedFromOrientation:(long long)a0;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)a0;
- (double)referenceWidth;
- (id)region:(id)a0 willSetDisplayItems:(id)a1;
- (id)regionIdentifiersForPartWithIdentifier:(id)a0;
- (id)setupInContainerView:(id)a0;
- (BOOL)wantsPillInExpandedTrailingPlacements;

@end
