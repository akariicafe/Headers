@class NSString, STUIStatusBar_Wrapper, _SBStatusBarWindowRootViewController;

@interface SBStatusBarWindow : UIWindow <STUIStatusBarWindow> {
    _SBStatusBarWindowRootViewController *_statusBarWindowRootViewController;
}

@property (retain, nonatomic) STUIStatusBar_Wrapper *statusBar;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultStatusBarSceneReferenceBounds;
+ (BOOL)_isSystemWindow;

- (BOOL)_shouldAdjustSizeClassesAndResizeWindow;
- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (BOOL)_isStatusBarWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOrientation:(long long)a0 animationParameters:(id)a1;
- (BOOL)_shouldForceTraitPropagationThroughHierarchy;
- (void)_rotate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)windowSceneDidConnect:(id)a0;
- (id)_initWithOrientation:(long long)a0;
- (void)_setStatusBarWindowOrientation:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_statusBarWindowBoundsForOrientation:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_statusBarWindowFrame;

@end
