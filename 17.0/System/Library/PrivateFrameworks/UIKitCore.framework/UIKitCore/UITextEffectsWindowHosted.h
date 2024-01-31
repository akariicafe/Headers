@interface UITextEffectsWindowHosted : UITextEffectsWindow

- (BOOL)_isTextEffectsWindowNotificationOwner;
- (BOOL)_isWindowServerHostingManaged;
- (void)_sceneBoundsDidChange;
- (BOOL)_isTextEffectsWindowHosting;
- (long long)_orientationForSceneTransform;
- (BOOL)_usesWindowServerHitTesting;
- (long long)_orientationForRootTransform;
- (BOOL)_isFullscreen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })actualSceneBoundsForLandscape:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (long long)_orientationForViewTransform;
- (void)adjustTextEffectsWindowSizeIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })actualSceneBounds;

@end
