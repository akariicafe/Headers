@class UIView, NSString, SBDeviceApplicationSceneHandle, SBIdleTimerCoordinatorHelper, _SBInCallProxySceneBackgroundView, SBInCallSettings, SBSUIInCallSceneClientSettingsDiffInspector, SBDeviceApplicationSceneViewController;
@protocol SBApplicationSceneBackgroundView, SBInCallTransientOverlayViewControllerDelegate;

@interface SBInCallTransientOverlayViewController : SBTransientOverlayViewController <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBIdleTimerCoordinating, BSInvalidatable> {
    UIView<SBApplicationSceneBackgroundView> *_existingSceneBackgroundView;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    SBSUIInCallSceneClientSettingsDiffInspector *_inCallSceneClientSettingsDiffInspector;
    _SBInCallProxySceneBackgroundView *_proxySceneBackgroundView;
    SBDeviceApplicationSceneViewController *_sceneViewController;
    SBInCallSettings *_settings;
}

@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (weak, nonatomic) id<SBInCallTransientOverlayViewControllerDelegate> delegate;
@property (nonatomic) BOOL shouldIgnoreHomeIndicatorAutoHiddenClientSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarAlphaTo:(double)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleTo:(long long)a1;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (void)dealloc;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarHiddenTo:(BOOL)a1 withAnimation:(long long)a2;
- (void)sceneWithIdentifier:(id)a0 didChangeBackgroundActivitiesToSuppressTo:(id)a1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)succinctDescriptionBuilder;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (BOOL)handleVolumeUpButtonPress;
- (id)associatedSceneIdentifiersToSuppressInSystemAperture;
- (void)invalidate;
- (void)setContainerOrientation:(long long)a0;
- (void)setIdleTimerCoordinator:(id)a0;
- (BOOL)prefersStatusBarHidden;
- (BOOL)handleLockButtonPress;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (id)idleTimerProvider:(id)a0 didProposeBehavior:(id)a1 forReason:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (id)associatedBundleIdentifiersToSuppressInSystemAperture;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)supportsAlwaysOnDisplay;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)handleVolumeDownButtonPress;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)handleHomeButtonPress;
- (BOOL)canResignFirstResponder;
- (id)initWithSceneHandle:(id)a0;
- (BOOL)isContentOpaque;
- (int)serviceProcessIdentifier;
- (id)hostedSceneIdentityTokens;
- (BOOL)prefersEmbeddedDisplayPresentation;
- (id)preferredBackgroundActivitiesToSuppress;
- (BOOL)shouldDisableBanners;
- (id)_inCallSceneClientSettingsDiffInspector;
- (void)_registerForAmbientPresentationTraitChange;
- (BOOL)allowsStackingOverlayContentAbove;
- (void)handleGestureDismissal;
- (BOOL)isPresentedFromSceneWithIdentityTokenString:(id)a0;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)preferredDisplayLayoutElementIdentifier;
- (long long)preferredLockedGestureDismissalStyle;
- (long long)preferredUnlockedGestureDismissalStyle;
- (BOOL)preventsSystemApertureSuppressionFromBelow;
- (id /* block */)sceneDeactivationPredicate;
- (BOOL)shouldUseSceneBasedKeyboardFocus;

@end
