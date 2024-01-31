@class STUIStatusBarCellularItem, STUIStatusBarDisplayItemPlacementGroup, NSString, NSDictionary, _UILumaTrackingBackdropView, STUIStatusBarRegionAxisCenteringLayout, STUIStatusBarRegionAxisStackingLayout, NSLayoutConstraint;

@interface STUIStatusBarVisualProvider_LegacyPhone : STUIStatusBarVisualProvider_Phone <STUIStatusBarCellularItemTypeStringProvider>

@property (retain, nonatomic) NSDictionary *orderedDisplayItemPlacements;
@property (retain, nonatomic) STUIStatusBarDisplayItemPlacementGroup *lowerWifiGroup;
@property (retain, nonatomic) NSLayoutConstraint *backgroundHeightConstraint;
@property (retain, nonatomic) STUIStatusBarCellularItem *condensedCellularItem;
@property (retain, nonatomic) NSLayoutConstraint *leadingTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingHeightConstraint;
@property (retain, nonatomic) STUIStatusBarRegionAxisStackingLayout *leadingHorizontalLayout;
@property (retain, nonatomic) NSLayoutConstraint *centerTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *centerHeightConstraint;
@property (retain, nonatomic) STUIStatusBarRegionAxisCenteringLayout *centerHorizontalLayout;
@property (retain, nonatomic) NSLayoutConstraint *trailingTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingHeightConstraint;
@property (retain, nonatomic) STUIStatusBarRegionAxisStackingLayout *trailingHorizontalLayout;
@property (retain, nonatomic) NSLayoutConstraint *expandedLeadingBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *expandedTrailingBottomConstraint;
@property (retain, nonatomic) _UILumaTrackingBackdropView *leadingBackgroundLumaView;
@property (retain, nonatomic) _UILumaTrackingBackdropView *centerBackgroundLumaView;
@property (retain, nonatomic) _UILumaTrackingBackdropView *trailingBackgroundLumaView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)height;
+ (double)_heightExpanded:(BOOL)a0;
+ (struct CGSize { double x0; double x1; })intrinsicLockScreenContentSizeForOrientation:(long long)a0;

- (struct CGSize { double x0; double x1; })pillSize;
- (double)baselineOffset;
- (double)lowerExpandedBaselineOffset;
- (id)styleAttributesForStyle:(long long)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (id)stringForCellularType:(long long)a0 condensed:(BOOL)a1;
- (void)setExpanded:(BOOL)a0;
- (void).cxx_destruct;
- (id)timeFont;
- (struct CGSize { double x0; double x1; })smallPillSize;
- (double)effectiveHeight;
- (id)_animationForSingleLineDualCarrier;
- (id)_backgroundActivityDetailRemovalAnimation;
- (void)_updateBackgroundHeight;
- (void)_updateExpandedTrailingRegion;
- (void)_updateLockScreenSizing;
- (void)_updateLowerRegionsWithData:(id)a0;
- (void)actionable:(id)a0 highlighted:(BOOL)a1 initialPress:(BOOL)a2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (double)animatedTypeDisplayItemSpacingFactorForCellularType:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clockBoundsForLayoutItem:(id)a0;
- (id)clockFont;
- (id)condensedFontForCellularType:(long long)a0 defaultFont:(id)a1 baselineOffset:(double *)a2;
- (void)dataUpdated:(id)a0;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)a0;
- (double)dualLineExpandedBaselineOffset;
- (double)expandedBaselineOffset;
- (id)expandedFont;
- (void)itemCreated:(id)a0;
- (id)normalFont;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)a0;
- (void)orientationUpdatedFromOrientation:(long long)a0;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)a0;
- (id)pillFont;
- (id)regionIdentifiersForPartWithIdentifier:(id)a0;
- (double)regionSpacing;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (void)setOnLockScreen:(BOOL)a0;
- (id)setupInContainerView:(id)a0;
- (void)statusBarRegionsUpdated;
- (void)updateDataForService:(id)a0;
- (BOOL)wantsExpandedLeadingPlacements;
- (id)willUpdateWithData:(id)a0;
- (id)regionIdentifiersForBackgroundLumaView:(id)a0;

@end
