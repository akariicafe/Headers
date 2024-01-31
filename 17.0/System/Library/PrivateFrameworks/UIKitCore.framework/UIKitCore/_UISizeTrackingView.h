@class NSString, UIView, _UIRemoteViewController;

@interface _UISizeTrackingView : UIView <_UIScrollToTopView, _UIRemoteViewFocusProxy, _UIViewBoundingPathChangeObserver> {
    _UIRemoteViewController *_remoteViewController;
    id _viewControllerOperatorProxy;
    id _textEffectsOperatorProxy;
    struct CGSize { double width; double height; } _intrinsicContentSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _formerTextEffectsContentFrame;
    BOOL _observingTextEffectsWindowRotation;
    long long _interfaceOrientation;
    UIView *_viewForRemoteTextEffectsWindowMatchAnimation;
    struct { unsigned char hasIntrinsicContentSize : 1; unsigned char observingBoundingPathChanges : 1; unsigned char needsRemoteViewServiceBoundingPathUpdate : 1; unsigned char remoteViewServiceBoundingPathUpdateScheduled : 1; } _sizeTrackingViewFlags;
}

@property (readonly, nonatomic) _UIRemoteViewController *remoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_supportsInvalidatingFocusCache;
+ (id)viewWithRemoteViewController:(id)a0 viewControllerOperatorProxy:(id)a1 textEffectsOperatorProxy:(id)a2;

- (void)_boundingPathMayHaveChangedForView:(id)a0 relativeToBoundsOriginOnly:(BOOL)a1;
- (void)dealloc;
- (id)nextResponder;
- (BOOL)isScrollEnabled;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canBecomeFocused;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_viewDidMoveFromScreen:(id)a0 toScreen:(id)a1;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inCoordinateSpace:(id)a1;
- (void).cxx_destruct;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } x5; id x6; id x7; id x8; id x9; } *)a0 forAncestor:(id)a1;
- (void)_didMoveFromWindow:(id)a0 toWindow:(id)a1;
- (void)_prepareForWindowDealloc;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint { double x0; double x1; })a0 resultHandler:(id /* block */)a1;
- (BOOL)_needsTextEffectsUpdateToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_remoteViewServiceSizeFromSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_sizeFromRemoteViewServiceSize:(struct CGSize { double x0; double x1; })a0;
- (id)_boundingPathForRemoteViewService;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForRemoteViewService;
- (BOOL)_canSendViewServiceActualBoundingPath;
- (void)_clearNeedsRemoteViewServiceBoundingPathUpdate;
- (BOOL)_fencingEffectsAreVisible;
- (long long)_interfaceOrientationForScene:(id)a0;
- (void)_prepareForWindowHostingSceneRemoval;
- (double)_remoteViewServiceGeometryValueFromValue:(double)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_remoteViewServiceInsetsFromInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_setNeedsRemoteViewServiceBoundingPathUpdate;
- (struct CGSize { double x0; double x1; })_sizeForRemoteViewService;
- (void)_textEffectsWindowDidRotate:(id)a0;
- (void)_updateSceneGeometries:(id)a0;
- (void)_updateSceneGeometries:(id)a0 forOrientation:(long long)a1;
- (void)_updateTextEffectsGeometries:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTextEffectsGeometries:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textEffectsWindow:(id)a1;
- (void)_updateTextEffectsGeometriesImmediately;
- (void)_updateTextEffectsWindowHostedViewSize;
- (void)_updateTextEffectsWindowSafeAreaInsets;
- (void)_willMoveToWindow:(id)a0;
- (void)updateIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;

@end
