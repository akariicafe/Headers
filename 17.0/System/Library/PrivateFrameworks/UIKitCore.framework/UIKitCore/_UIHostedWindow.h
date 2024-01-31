@class UIColor, NSString, _UIHostedWindowHostingHandle, UITraitCollection;
@protocol _UIHostedWindowDelegate;

@interface _UIHostedWindow : UIWindow {
    BOOL __hostViewUnderlapsStatusBar;
    BOOL _hostSupportsStrictTouchVerification;
    NSString *__hostBundleIdentifier;
    struct { unsigned int val[8]; } _hostAuditToken;
}

@property (nonatomic, setter=_setHostTintAdjustmentMode:) long long _hostTintAdjustmentMode;
@property (retain, nonatomic, setter=_setHostTraitCollection:) UITraitCollection *_hostTraitCollection;
@property (nonatomic, setter=_setWantsTraitPropagation:) BOOL _wantsTraitPropagation;
@property (retain, nonatomic, setter=_setHostTintColor:) UIColor *_hostTintColor;
@property (weak, nonatomic) id<_UIHostedWindowDelegate> _hostedWindowDelegate;
@property (readonly, nonatomic) _UIHostedWindowHostingHandle *hostingHandle;

- (BOOL)_isWindowServerHostingManaged;
- (long long)_orientationForSceneTransform;
- (BOOL)_usesWindowServerHitTesting;
- (void)_configureContextOptions:(id)a0;
- (void)dealloc;
- (long long)_orientationForRootTransform;
- (BOOL)_extendsScreenSceneLifetime;
- (long long)_orientationForViewTransform;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_normalInheritedTintColor;
- (void)_setFirstResponder:(id)a0;
- (void).cxx_destruct;
- (unsigned int)contextID;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)__hostViewUnderlapsStatusBar;
- (void)__setHostViewUnderlapsStatusBar:(BOOL)a0;
- (BOOL)_allowsLinkPreviewInteractionInViewServices;
- (BOOL)_canPromoteFromKeyWindowStack;
- (long long)_defaultTintAdjustmentMode;
- (void)_didCreateRootPresentationController;
- (void)_didMoveFromScreen:(id)a0 toScreen:(id)a1;
- (BOOL)_needsShakesWhenInactive;
- (BOOL)_preventsRootPresentationController;
- (void)_registerScrollToTopView:(id)a0;
- (BOOL)_shouldPropagateTraitCollectionChanges;
- (double)_systemReferenceAngle;
- (unsigned long long)_systemReferenceAngleMode;
- (id)_systemReferenceAngleProvider;
- (id)_traitCollectionForSize:(struct CGSize { double x0; double x1; })a0 parentCollection:(id)a1;
- (void)_unregisterScrollToTopView:(id)a0;
- (void)_updateStrictTouchVerificationIfNecessary;
- (void)_updateWindowTraitsAndNotify:(BOOL)a0;
- (BOOL)_updatesSafeAreaInsetsOnRead;

@end
