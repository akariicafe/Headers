@class NSString, BSAnimationSettings, NSLayoutConstraint;

@interface _UIStatusBarVisualProvider_DynamicSplit : _UIStatusBarVisualProvider_Split <_UIStatusBarRegionAxisSquishyLayoutDynamicHidingDelegate>

@property (retain, nonatomic) NSLayoutConstraint *cutoutWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *cutoutCenterConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingCenterYConstraint;
@property (copy, nonatomic) id /* block */ deferredAvoidanceFrameUpdateBlock;
@property (retain, nonatomic) BSAnimationSettings *currentAnimationSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)height;
+ (double)baseFontSize;
+ (double)expandedFontSize;
+ (Class)visualProviderSubclassForScreen:(id)a0 visualProviderInfo:(id)a1;

- (double)itemSpacing;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })expandedEdgeInsets;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (double)normalIconScale;
- (double)leadingItemSpacing;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })smallPillSize;
- (double)expandedIconScale;
- (id)normalRoundFont;
- (double)cutoutEdgeInset;
- (BOOL)_needsUpdateOfConstraintsForAvoidanceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cutoutOffset:(double *)a1 cutoutWidth:(double *)a2;
- (id)_orderedDisplayItemPlacements;
- (BOOL)_updateSystemNavigationWithData:(id)a0 avoidanceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAnimationSettings:(id)a1 options:(unsigned long long)a2;
- (double)bottomLeadingTopOffset;
- (void)dataUpdated:(id)a0;
- (double)effectiveTargetDisplayWidth;
- (id)leadingItemCutoffWidths;
- (unsigned long long)leadingNumberOfItemsForWidth:(double)a0;
- (double)leadingScaleForWidth:(double)a0;
- (double)minimumBottomLeadingWidth;
- (double)minimumItemScaleFactor;
- (void)orientationUpdatedFromOrientation:(long long)a0;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)a0;
- (id)region:(id)a0 willSetDisplayItems:(id)a1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (double)sensorAreaCenterOffsetFromTrailing;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sensorAreaRect;
- (struct CGSize { double x0; double x1; })sensorAreaSize;
- (id)setupInContainerView:(id)a0;
- (double)topLeadingCenterOffset;
- (id)trailingItemCutoffWidths;
- (unsigned long long)trailingNumberOfItemsForWidth:(double)a0 includingPrivacyIndicator:(BOOL)a1;
- (double)trailingScaleForWidth:(double)a0 includingPrivacyIndicator:(BOOL)a1;
- (void)updateDisplayItem:(id)a0 toDynamicallyHidden:(BOOL)a1 scale:(double)a2;
- (void)updateDisplayItem:(id)a0 toScale:(double)a1;

@end
