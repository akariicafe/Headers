@class SBSwitcherChamoisSnapPaddingSettings, SBFFluidBehaviorSettings, SBSwitcherChamoisLayoutAttributes;
@protocol BSDefaultObserver;

@interface SBSwitcherChamoisSettings : PTSettings {
    SBSwitcherChamoisLayoutAttributes *_cachedChamoisLayoutAttributes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedChamoisLayoutAttributes_containerBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedChamoisLayoutAttributes_nativeContainerReferencePixelBounds;
    long long _cachedChamoisLayoutAttributes_interfaceOrientation;
    double _cachedChamoisLayoutAttributes_floatingDockHeight;
    double _cachedChamoisLayoutAttributes_statusBarHeight;
    BOOL _cachedChamoisLayoutAttributes_requiresFullScreen;
    BOOL _cachedChamoisLayoutAttributes_prefersStripHidden;
    BOOL _cachedChamoisLayoutAttributes_prefersDockHidden;
    BOOL _cachedChamoisLayoutAttributes_isEmbeddedDisplay;
    BOOL _cachedChamoisLayoutAttributes_stripDisabledWhenHidden;
    id<BSDefaultObserver> _appSwitcherDefaultsObserver;
    BOOL _cachedChamoisHideStrips;
    BOOL _cachedChamoisHideStripsExternal;
    BOOL _cachedChamoisHideDock;
    BOOL _cachedChamoisHideDockExternal;
}

@property unsigned long long numberOfVisibleItemsPerGroup;
@property unsigned long long numberOfRowsWhileInAppOnEmbeddedDisplay;
@property unsigned long long numberOfRowsWhileInAppOnExternalDisplay;
@property unsigned long long numberOfRowsWhileInAppOnExternalDisplayHighRes;
@property unsigned long long externalDisplayHighResVerticalResolution;
@property unsigned long long stripsHoverRevealZoneWidthType;
@property double stripsHoverRevealZoneWidthFixed;
@property double stripsHoverRevealZoneWidthScale;
@property double pinWindowEdgeForResizeMargin;
@property unsigned long long maximumNumberOfAppsOnStage;
@property double stripDropZoneMultiplier;
@property BOOL useLeadingWindowEdgeForDropZoneCalculations;
@property BOOL rejectDropsWhenStageIsFull;
@property BOOL allowTrueMaximizeForAllApps;
@property BOOL rasterizeScaledApps;
@property BOOL changeFocusOnClickDown;
@property BOOL blurWallpaperInApps;
@property BOOL useLowFatigueStripAnimation;
@property BOOL tapWallpaperToGoHome;
@property double stageOccludedAppScaleFactor;
@property (retain) SBSwitcherChamoisSnapPaddingSettings *embeddedDisplaySnapPaddingSettings;
@property (retain) SBSwitcherChamoisSnapPaddingSettings *externalDisplaySnapPaddingSettings;
@property double switcherHeightForIconAndLabelsUnderEachPile;
@property double switcherPileCardMinimumPeekAmount;
@property double switcherPileCompactingFactor;
@property double switcherCornerRadius;
@property double rimShadowOpacity;
@property double rimShadowRadius;
@property double diffuseShadowOpacity;
@property double diffuseShadowRadius;
@property struct CGSize { double width; double height; } diffuseShadowOffset;
@property (retain) SBFFluidBehaviorSettings *liveResizeDuringDragLayoutAnimationSettings;
@property (retain) SBFFluidBehaviorSettings *liveResizeAfterReleaseLayoutAnimationSettings;
@property (retain) SBFFluidBehaviorSettings *windowDragAnimationSettings;
@property (retain) SBFFluidBehaviorSettings *appToAppLayoutSettings;
@property (retain) SBFFluidBehaviorSettings *appToAppOpacitySettings;
@property (retain) SBFFluidBehaviorSettings *stageFocusChangeSettings;
@property (nonatomic) double homeGestureMinimumYDistanceForHomeOrAppSwitcher;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void)dealloc;
- (void).cxx_destruct;
- (double)_statusBarHeight;
- (id)initWithDefaultValues;
- (id)_gridHeightsForSafeHeight:(double)a0 minimumHeight:(double)a1 stageInterItemSpacing:(double)a2;
- (id)_gridWidthsForSafeWidth:(double)a0 minimumWidth:(double)a1 stageInterItemSpacing:(double)a2;
- (struct CGSize { double x0; double x1; })_nearestGridSizeForSize:(struct CGSize { double x0; double x1; })a0 gridWidths:(id)a1 gridHeights:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)_observeAppSwitcherDefaults;
- (BOOL)_shouldPreferDockHiddenForWindowScene:(id)a0;
- (BOOL)_shouldPreferStripHiddenForWindowScene:(id)a0 interfaceOrientation:(long long)a1;
- (double)_stripCardScaleForContainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 screenEdgePadding:(double)a1 stripVerticalEdgeSpacing:(double)a2 stripInterItemSpacing:(double)a3 floatingDockHeight:(double)a4 numberOfRows:(unsigned long long)a5;
- (double)_stripWidthForContainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 screenEdgePadding:(double)a1 stripStackDistance:(double)a2 stripCardScale:(double)a3 stripTiltAngle:(double)a4 containerPerspective:(double)a5;
- (void)_updateCachedAppSwitcherDefaults;
- (id)layoutAttributesForContainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 nativeContainerReferencePixelBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 interfaceOrientation:(long long)a2 floatingDockHeight:(double)a3 statusBarHeight:(double)a4 requiresFullScreen:(BOOL)a5 prefersStripHidden:(BOOL)a6 prefersDockHidden:(BOOL)a7 isEmbeddedDisplay:(BOOL)a8;
- (id)layoutAttributesForWindowScene:(id)a0 interfaceOrientation:(long long)a1 requiresFullScreen:(BOOL)a2 floatingDockHeight:(double)a3;

@end
