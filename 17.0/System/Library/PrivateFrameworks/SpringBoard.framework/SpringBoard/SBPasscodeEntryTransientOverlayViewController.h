@class NSString, SBFUserAuthenticationController, SBUIPasscodeViewWithLockScreenStyle, CSPoseidonViewController, CSLockScreenPearlSettings;
@protocol SBPasscodeEntryTransientOverlayViewControllerDelegate, SBUIPasscodeLockView;

@interface SBPasscodeEntryTransientOverlayViewController : SBTransientOverlayViewController <PTSettingsKeyObserver, SBFAuthenticationResponder, SBUIPasscodeLockViewDelegate> {
    BOOL _attemptingUnlock;
    SBFUserAuthenticationController *_authenticationController;
    id<SBUIPasscodeLockView> _passcodeRequester;
    SBUIPasscodeViewWithLockScreenStyle *_passcodeView;
    CSLockScreenPearlSettings *_pearlSettings;
    CSPoseidonViewController *_poseidonViewController;
    BOOL _keyboardVisible;
}

@property (weak, nonatomic) id<SBPasscodeEntryTransientOverlayViewControllerDelegate> delegate;
@property (nonatomic) BOOL showEmergencyCallButton;
@property (nonatomic) BOOL useBiometricPresentation;
@property (copy, nonatomic) NSString *unlockDestination;
@property (nonatomic) int intent;
@property (nonatomic) long long overridePresentationOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (long long)idleTimerMode;
- (long long)preferredStatusBarStyle;
- (id)initWithAuthenticationController:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (long long)idleTimerDuration;
- (int)_preferredStatusBarVisibility;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (long long)idleWarnMode;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)isContentOpaque;
- (void)handleFailedAuthenticationRequest:(id)a0 error:(id)a1;
- (void)handleInvalidAuthenticationRequest:(id)a0;
- (void)handleSuccessfulAuthenticationRequest:(id)a0;
- (BOOL)prefersEmbeddedDisplayPresentation;
- (void)passcodeLockViewCancelButtonPressed:(id)a0;
- (void)passcodeLockViewEmergencyCallButtonPressed:(id)a0;
- (void)passcodeLockViewPasscodeDidChange:(id)a0;
- (void)passcodeLockViewPasscodeEntered:(id)a0;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)a0;
- (void)_passcodeLockViewPasscodeEntered:(id)a0 authenticationType:(unsigned long long)a1;
- (void)_attemptUnlock:(id)a0 passcode:(id)a1;
- (void)_updatePrototypeSettings;
- (BOOL)canBecomeLocalFirstResponder;
- (void)handleWillShowKeyboard:(BOOL)a0;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)preferredDisplayLayoutElementIdentifier;

@end
