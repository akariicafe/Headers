@class _UILumaTrackingGroup, STUIStatusBarDisplayItemPlacementGroup, STUIStatusBar, NSArray, STUIStatusBarDisplayItemPlacementNetworkGroup, UIFont, STUIStatusBarAnimation, NSString, STUIStatusBarDisplayItemPlacement;

@interface STUIStatusBarVisualProvider_iOS : NSObject <STUIStatusBarVisualProvider, _UILumaTrackingGroupDelegate>

@property (class, readonly) double height;
@property (class, readonly, nonatomic) BOOL scalesWithScreenNativeScale;
@property (class, readonly, nonatomic) BOOL requiresIterativeOverflowLayout;

@property (retain, nonatomic) STUIStatusBarDisplayItemPlacementGroup *secondaryWifiGroup;
@property (readonly) BOOL hasCellularCapability;
@property (readonly) BOOL wantsExpandedLeadingPlacements;
@property (readonly) BOOL wantsPillInExpandedTrailingPlacements;
@property (readonly) double leadingItemSpacing;
@property (readonly) double itemSpacing;
@property (readonly) double expandedItemSpacing;
@property (readonly) double regionSpacing;
@property (readonly) double bluetoothPaddingInset;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL onLockScreen;
@property (nonatomic) BOOL onAODLockScreen;
@property (readonly, nonatomic) STUIStatusBarDisplayItemPlacementNetworkGroup *expandedNetworkGroup;
@property (readonly, nonatomic) NSArray *expandedCellularPlacementsAffectedByAirplaneMode;
@property (readonly, nonatomic) NSArray *expandedLeadingPlacements;
@property (readonly, nonatomic) NSArray *expandedTrailingPlacements;
@property (readonly, nonatomic) STUIStatusBarDisplayItemPlacement *expandedPillPlacement;
@property (readonly, nonatomic) STUIStatusBarAnimation *animationForAirplaneMode;
@property (readonly, nonatomic) double airplaneObstacleFadeOutDuration;
@property (readonly, nonatomic) double airplaneObstacleFadeInDuration;
@property (readonly, nonatomic) STUIStatusBarAnimation *animationForProminentLocation;
@property (retain, nonatomic) _UILumaTrackingGroup *lumaTrackingGroup;
@property (weak, nonatomic) STUIStatusBar *statusBar;
@property (readonly, nonatomic) BOOL supportsIndirectPointerTouchActions;
@property (readonly, nonatomic) UIFont *clockFont;
@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cornerRadius;
+ (struct CGSize { double x0; double x1; })intrinsicContentSizeForOrientation:(long long)a0;
+ (Class)visualProviderSubclassForScreen:(id)a0 visualProviderInfo:(id)a1;

- (id)init;
- (id)styleAttributesForStyle:(long long)a0;
- (void).cxx_destruct;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id *)a0 animationType:(long long)a1;
- (void)_applyToAppearingRegions:(BOOL)a0 block:(id /* block */)a1;
- (void)_createExpandedPlacements;
- (void)actionable:(id)a0 highlighted:(BOOL)a1 initialPress:(BOOL)a2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (double)airplaneShouldFadeForAnimationType:(long long)a0;
- (double)airplaneSpeedForAnimationType:(long long)a0;
- (void)backgroundLumaGroup:(id)a0 didTransitionToLevel:(unsigned long long)a1 viewsWithDifferentLevels:(id)a2;
- (id)defaultAnimationForDisplayItemWithIdentifier:(id)a0;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)a0;
- (BOOL)hasCustomAnimationForDisplayItemWithIdentifier:(id)a0 removal:(BOOL)a1;
- (void)modeUpdatedFromMode:(long long)a0;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)a0;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (id)setupInContainerView:(id)a0;
- (void)updateDataForService:(id)a0;
- (void)updateDataForSystemNavigation:(id)a0;
- (BOOL)wantsBackgroundActivityPillInExpandedTrailingPlacements;
- (id)willUpdateWithData:(id)a0;
- (id)regionIdentifiersForBackgroundLumaView:(id)a0;
- (void)updateLumaTracking:(BOOL)a0;

@end
