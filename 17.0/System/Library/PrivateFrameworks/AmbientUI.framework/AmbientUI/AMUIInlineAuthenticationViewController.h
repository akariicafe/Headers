@class NSString, AMUIPasscodeButton, UIView, AMUIDateTimeDataLayerViewController, MTMaterialView;
@protocol AMAuthenticationHandling, AMUIInlineAuthenticationViewControllerDelegate, SBUIPasscodeLockView, AMUIDateProviding;

@interface AMUIInlineAuthenticationViewController : UIViewController <SBUIPasscodeLockViewDelegate, AMAuthenticationSender> {
    MTMaterialView *_materialView;
    UIView<SBUIPasscodeLockView> *_passcodeView;
    AMUIPasscodeButton *_passcodeButton;
    NSString *_unlockDestination;
    AMUIDateTimeDataLayerViewController *_dateTimeLayerViewController;
}

@property (weak, nonatomic) id<AMUIInlineAuthenticationViewControllerDelegate> delegate;
@property (weak, nonatomic) id<AMAuthenticationHandling> authenticationHandler;
@property (retain, nonatomic) id<AMUIDateProviding> dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)_reset;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)passcode;
- (void)resetForSuccess;
- (void)passcodeLockViewCancelButtonPressed:(id)a0;
- (void)passcodeLockViewPasscodeEntered:(id)a0;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)a0;
- (void)passcodeLockViewStateChange:(id)a0;
- (void)resetForFailedPasscode;
- (void)_attemptUnlockForBioUnlock:(BOOL)a0;
- (void)_handlePasscodeButtonAction;
- (void)_setDateTimeLayerHidden:(BOOL)a0;
- (void)_setPasscodeVisible:(BOOL)a0;
- (BOOL)_shouldSkipBiometricPresentation;
- (id)_unlockReason;
- (id)initWithUnlockDestination:(id)a0;

@end
