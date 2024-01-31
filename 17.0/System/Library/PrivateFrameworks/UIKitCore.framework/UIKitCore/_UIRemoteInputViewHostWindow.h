@protocol _UIRemoteInputViewHostWindowDelegate;

@interface _UIRemoteInputViewHostWindow : UIAutoRotatingWindow

@property (weak, nonatomic) id<_UIRemoteInputViewHostWindowDelegate> hostWindowDelegate;

+ (BOOL)_isSecure;

- (void)_didChangeKeyplaneWithContext:(id)a0;
- (BOOL)_isHostedInAnotherProcess;
- (BOOL)_isWindowServerHostingManaged;
- (BOOL)inhibitSetupOrientation;
- (id)initWithWindowScene:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (long long)_orientationForSceneTransform;
- (id)firstResponder;
- (BOOL)_wantsSceneAssociation;
- (double)_adjustedWindowLevelFromLevel:(double)a0;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_alwaysGetsContexts;
- (long long)_orientationForRootTransform;
- (BOOL)isInternalWindow;
- (long long)_orientationForViewTransform;
- (void).cxx_destruct;
- (BOOL)_isRemoteInputHostWindow;

@end
