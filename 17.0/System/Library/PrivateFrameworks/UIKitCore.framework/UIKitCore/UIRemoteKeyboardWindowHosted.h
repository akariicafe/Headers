@interface UIRemoteKeyboardWindowHosted : UIRemoteKeyboardWindow

+ (BOOL)_isHostedInAnotherProcess;
+ (BOOL)_isSecure;

- (struct CGSize { double x0; double x1; })keyboardScreenReferenceSize;
- (BOOL)_isTextEffectsWindowHosting;
- (long long)_orientationForSceneTransform;
- (double)_adjustedWindowLevelFromLevel:(double)a0;
- (long long)_orientationForRootTransform;
- (double)keyboardWidthForCurrentDevice;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (long long)_orientationForViewTransform;

@end
