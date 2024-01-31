@class LAContainerViewController, NSString, LAPSFetchNewPasscodeViewControllerInput, LAPSPasscodeViewController, LAPSPasscodeType, LAPSPasscode;
@protocol LAPSFetchNewPasscodeViewControllerDelegate;

@interface LAPSFetchNewPasscodeViewController : UIViewController <LAPSPasscodeViewControllerDelegate> {
    LAPSFetchNewPasscodeViewControllerInput *_input;
    id /* block */ _handler;
    LAContainerViewController *_containerVC;
    LAPSPasscodeType *_passcodeType;
    BOOL _isPasscodeRecoveryEnabled;
    LAPSPasscode *_passcode;
    LAPSPasscodeViewController *_passcodeVC;
}

@property (weak, nonatomic) id<LAPSFetchNewPasscodeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clear;
- (void)_deactivate;
- (void)viewDidLoad;
- (BOOL)resignFirstResponder;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)restart;
- (BOOL)becomeFirstResponder;
- (void)finishWithError:(id)a0;
- (id)navigationItem;
- (id)_currentChildVC;
- (void)_invokeHandlerWithOutput:(id)a0 error:(id)a1;
- (void)_invokeHandlerWithError:(id)a0;
- (void)_invokeHandlerWithOutput:(id)a0;
- (void)_presentNewPasscodeVCWithTransitionStyle:(long long)a0;
- (void)_presentVerifyPasscodeVCWithTransitionStyle:(long long)a0;
- (void)_presentViewController:(id)a0 transitionStyle:(long long)a1;
- (void)continueWithPasscode:(id)a0;
- (void)finishWithPasscode:(id)a0;
- (id)initWithInput:(id)a0 completion:(id /* block */)a1;
- (void)passcodeViewController:(id)a0 didCancelWithError:(id)a1;
- (void)passcodeViewController:(id)a0 didSelectPasscodeType:(id)a1;
- (void)passcodeViewController:(id)a0 didSetPasscodeRecoveryEnabled:(BOOL)a1;
- (void)passcodeViewController:(id)a0 verifyPasscode:(id)a1;

@end
