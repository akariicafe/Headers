@class NSString, SBDeviceApplicationRemoteTransientOverlayContainerViewController, NSMapTable, SBWindowScene, NSMutableArray;

@interface SBDeviceApplicationRemoteTransientOverlayViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBDeviceApplicationRemoteTransientOverlayViewProviding, SBTransientOverlayViewControllerDelegate> {
    NSMutableArray *_activePresentationContexts;
    SBDeviceApplicationRemoteTransientOverlayContainerViewController *_containerVC;
    NSMapTable *_keyboardFocusRedirectionsByRemoteVC;
    BOOL _needsDeactivationWithNoActiveTransientOverlays;
}

@property (readonly, nonatomic) BOOL handlesSceneBackedRemoteTransientOverlaysOnly;
@property (readonly, weak, nonatomic) SBWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredInterfaceOrientationForPresentation;
- (long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(id)a0;
- (void)transientOverlayViewController:(id)a0 requestZStackParticipantPreferencesUpdateWithReason:(id)a1;
- (void)dealloc;
- (BOOL)contentWantsTraitsArbiterBasedRotation;
- (BOOL)shouldFollowSceneOrientation;
- (void)transientOverlayViewControllerDidUpdatePresentationPrefersStatusBarHidden:(id)a0;
- (void)_activateIfPossible;
- (BOOL)isKeyboardVisibleForSpringBoardForTransientOverlayViewController:(id)a0;
- (void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(id)a0;
- (void)noteDisplayModeChange:(long long)a0;
- (BOOL)isPresentingOnBehalfOfApplication:(id)a0;
- (void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(id)a0;
- (BOOL)defaultShouldAutorotateForTransientOverlayViewController:(id)a0;
- (long long)preferredStatusBarStyle;
- (void)dismissRemoteTransientOverlayViewController:(id)a0;
- (void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(id)a0;
- (long long)priority;
- (void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(id)a0;
- (id)initWithSceneHandle:(id)a0 delegate:(id)a1 handlesSceneBackedRemoteTransientOverlaysOnly:(BOOL)a2;
- (void)presentRemoteTransientOverlayViewController:(id)a0 presentationRequest:(id)a1;
- (BOOL)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(id)a0;
- (BOOL)isPresentingTransientOverlay:(id)a0;
- (void)_deactivateIfPossible;
- (void)_dismissRemoteOverlayVC:(id)a0;
- (id)_realOverlayViewController;
- (BOOL)transientOverlayViewControllerIsForegroundActive:(id)a0;
- (void)transientOverlayViewControllerDidEndRotation:(id)a0;
- (void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(id)a0;
- (void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(id)a0;
- (void)transientOverlayViewControllerWillBeginRotation:(id)a0 toInterfaceOrientation:(long long)a1;
- (void)_handleCoverSheetDidPresent:(id)a0;
- (void)_handleAppSwitcherWillPresent:(id)a0;
- (void)transientOverlayViewControllerNeedsWindowHitTestingUpdate:(id)a0;
- (void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(id)a0;
- (void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(id)a0;

@end
