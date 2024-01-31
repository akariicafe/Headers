@class _UIStatusBarDisplayItemPlacement, UIFont, NSDictionary, NSString, NSLayoutConstraint, _UIStatusBar;

@interface _UIStatusBarVisualProvider_Pad : _UIStatusBarVisualProvider_iOS <_UIStatusBarRegionCursorInsetProvider>

@property (class, readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } regionCursorInsets;
@property (class, readonly, nonatomic) BOOL regionCursorIsPill;
@property (class, readonly, nonatomic) double regionCursorCornerRadius;
@property (class, readonly, nonatomic) BOOL scalesWithScreenNativeScale;
@property (class, readonly, nonatomic) BOOL requiresIterativeOverflowLayout;

@property (retain, nonatomic) NSDictionary *orderedDisplayItemPlacements;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } expandedEdgeInsets;
@property (retain, nonatomic) NSLayoutConstraint *trailingRegionLeadingAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingRegionTrailingAnchorConstraint;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *datePlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *timePlacement;
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (readonly, nonatomic) BOOL supportsIndirectPointerTouchActions;
@property (readonly, nonatomic) UIFont *clockFont;
@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)height;
+ (double)baselineOffset;
+ (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
+ (Class)visualProviderSubclassForScreen:(id)a0 visualProviderInfo:(id)a1;

- (id)init;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })pillSize;
- (id)styleAttributesForStyle:(long long)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_dateTimePreferencesUpdated;
- (struct CGSize { double x0; double x1; })expandedPillSize;
- (struct CGSize { double x0; double x1; })smallPillSize;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id *)a0 animationType:(long long)a1;
- (void)_updateConstraintsForAvoidanceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_updateDateAndTimePlacements;
- (void)actionable:(id)a0 highlighted:(BOOL)a1 initialPress:(BOOL)a2;
- (double)airplaneShouldFadeForAnimationType:(long long)a0;
- (double)airplaneSpeedForAnimationType:(long long)a0;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAnimationSettings:(id)a1 options:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clockBoundsForLayoutItem:(id)a0;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)a0;
- (id)expandedFont;
- (id)expandedPillFont;
- (void)itemCreated:(id)a0;
- (id)normalFont;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)a0;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)a0;
- (id)pillFont;
- (id)pillSmallFont;
- (id)regionIdentifiersForPartWithIdentifier:(id)a0;
- (double)regionSpacing;
- (id)setupInContainerView:(id)a0;
- (void)sizeUpdatedFromSize:(struct CGSize { double x0; double x1; })a0;
- (void)statusBarEnabledPartsUpdated;
- (BOOL)wantsPillInExpandedTrailingPlacements;

@end
