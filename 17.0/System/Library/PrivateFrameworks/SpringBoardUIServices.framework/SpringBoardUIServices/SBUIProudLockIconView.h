@class BSUICAPackageView, LAUIPearlGlyphView, UIView, _UILegibilitySettings, NSSet, SBUIFaceIDCoachingView, SBUIFaceIDCameraGlyphView, UIColor;

@interface SBUIProudLockIconView : UIView {
    UIView *_iconContainerView;
    BSUICAPackageView *_lockView;
    NSSet *_imageLayers;
    NSSet *_shadowImageLayers;
    NSSet *_shadowFilterLayers;
    long long _pearlGlyphStyle;
    LAUIPearlGlyphView *_lazy_pearlGlyphView;
    id _pearlGlyphViewSharedResources;
    SBUIFaceIDCoachingView *_lazy_faceIDCoachingView;
    BOOL _performingIncomingLayout;
    BOOL _changingAllowsAlongsideCoaching;
    BOOL _allowsAlongsideCoaching;
    BOOL _overridesSizing;
    struct CGSize { double width; double height; } _overrideSize;
    struct CGPoint { double x; double y; } _overrideOffset;
    double _overrideExtent;
}

@property (retain, nonatomic) UIColor *contentColor;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double durationOnCameraCoveredGlyphBeforeCoaching;
@property (nonatomic) long long state;
@property (readonly, nonatomic) SBUIFaceIDCameraGlyphView *cameraCoveredView;

- (void)setState:(long long)a0 animated:(BOOL)a1;
- (void)setState:(long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_zoomedTransform;
- (void)_resetfaceIDCoachingView;
- (double)_alphaForActiveViewForState:(long long)a0;
- (void)setOverrideGlyphStyle:(long long)a0;
- (BOOL)allowsAlongsideCoaching;
- (void)setOverrideSize:(struct CGSize { double x0; double x1; })a0 offset:(struct CGPoint { double x0; double x1; })a1 extent:(double)a2;
- (double)_scaleAmountForZoom;
- (id)_activeViewsForState:(long long)a0;
- (void)setState:(long long)a0 animated:(BOOL)a1 updateText:(BOOL)a2 options:(long long)a3 completion:(id /* block */)a4;
- (void)_forEachLayerInHierarchy:(id)a0 perform:(id /* block */)a1;
- (id)fileNameForCurrentDevice;
- (id)_pearlGlyphViewIfExists;
- (void)_resetCameraGlyphView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_defaultAnimationSettingsForTransitionFromViews:(id)a0 andState:(long long)a1 toViews:(id)a2 andState:(long long)a3;
- (void)_resetPearlGlyphView;
- (struct CGSize { double x0; double x1; })_smallLockSize;
- (id)_alphaAnimationSettingsForTransitionFromViews:(id)a0 andState:(long long)a1 toViews:(id)a2 andState:(long long)a3 forIncomingViews:(BOOL)a4;
- (void)setAllowsAlongsideCoaching:(BOOL)a0;
- (id)_transformAnimationSettingsForTransitionFromViews:(id)a0 andState:(long long)a1 toViews:(id)a2 andState:(long long)a3 forIncomingViews:(BOOL)a4;
- (id)_pearlGlyphView;
- (double)_lockToCoachingSpacing;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_outgoingTransformForView:(id)a0 fromState:(long long)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_smallLockSizeForTextSize:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForActiveView:(id)a0 forState:(long long)a1;
- (void)layoutSubviews;
- (id)_faceIDCoachingView;
- (struct CGSize { double x0; double x1; })_practicalProudLockSize;
- (double)proudLockLandscapeOffset;
- (id)_layoutAnimationSettingsForTransitionFromViews:(id)a0 andState:(long long)a1 toViews:(id)a2 andState:(long long)a3;
- (void)_configureShadowFromLegibilitySettings:(id)a0;
- (void)_transitionToState:(long long)a0 animated:(BOOL)a1 updateText:(BOOL)a2 options:(long long)a3 completion:(id /* block */)a4;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_incomingTransformForActiveView:(id)a0 forState:(long long)a1;

@end
