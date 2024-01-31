@class NSArray, NSString, _UIBackdropView, SBVoiceControlViewController;
@protocol SBVoiceControlTransientOverlayViewControllerDelegate;

@interface SBVoiceControlTransientOverlayViewController : SBTransientOverlayViewController <SBVoiceControlViewControllerDelegate, CSExternalBehaviorProviding> {
    _UIBackdropView *_backdropView;
    SBVoiceControlViewController *_contentViewController;
}

@property (copy, nonatomic) NSArray *nextRecognitionAudioInputPaths;
@property (nonatomic) BOOL shouldAllowSensitiveActions;
@property (nonatomic) BOOL shouldDisableHandlerActions;
@property (nonatomic) BOOL shouldDisableVoiceControlForBluetoothRequests;
@property (nonatomic, getter=isVoiceControlLoggingEnabled) BOOL voiceControlLoggingEnabled;
@property (weak, nonatomic) id<SBVoiceControlTransientOverlayViewControllerDelegate> voiceControlDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long scrollingStrategy;
@property (readonly, nonatomic) long long notificationBehavior;
@property (readonly, nonatomic) unsigned long long restrictedCapabilities;
@property (readonly, nonatomic) long long proximityDetectionMode;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (id)initWithSource:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)viewDidLoad;
- (long long)idleTimerMode;
- (long long)preferredStatusBarStyle;
- (BOOL)resignFirstResponder;
- (void)setContainerOrientation:(long long)a0;
- (void)conformsToCSExternalBehaviorProviding;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (long long)idleTimerDuration;
- (int)_preferredStatusBarVisibility;
- (void)viewDidAppear:(BOOL)a0;
- (void)conformsToCSBehaviorProviding;
- (BOOL)becomeFirstResponder;
- (long long)idleWarnMode;
- (void)viewDidDisappear:(BOOL)a0;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (BOOL)handleHomeButtonPress;
- (BOOL)canResignFirstResponder;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (BOOL)prefersEmbeddedDisplayPresentation;
- (BOOL)shouldDisableOrientationUpdates;
- (void)beginIgnoringAppearanceUpdates;
- (void)endIgnoringAppearanceUpdates;
- (void)handleGestureDismissal;
- (void)handleHeadsetButtonUpFromButtonDownSource:(BOOL)a0;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (long long)preferredLockedGestureDismissalStyle;
- (long long)preferredUnlockedGestureDismissalStyle;
- (BOOL)prefersProximityDetectionEnabled;
- (void)resetSessionWithSource:(id)a0;
- (void)voiceControlViewControllerPrefersProximityDetectionEnabledDidChange:(id)a0;
- (void)voiceControlViewControllerRequestsDismissal:(id)a0;

@end
