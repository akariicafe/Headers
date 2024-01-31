@class NSString, LAPSFetchOldPasscodeViewControllerInput, LAPSPasscodeBackoffTimerController, LAPSPasscodeViewController, UIViewController;
@protocol LAPSFetchOldPasscodeViewControllerDelegate;

@interface LAPSFetchOldPasscodeViewController : UIViewController <LAPSPasscodeViewControllerDelegate> {
    LAPSFetchOldPasscodeViewControllerInput *_input;
    LAPSPasscodeBackoffTimerController *_timer;
    UIViewController *_currentChildVC;
    LAPSPasscodeViewController *_passcodeVC;
    id /* block */ _handler;
}

@property (weak, nonatomic) id<LAPSFetchOldPasscodeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_deactivate;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (BOOL)resignFirstResponder;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)finishWithError:(id)a0;
- (id)navigationItem;
- (void)_invokeHandlerWithOutput:(id)a0 error:(id)a1;
- (void)_addChildVC:(id)a0;
- (void)_invokeHandlerWithError:(id)a0;
- (void)_invokeHandlerWithOutput:(id)a0;
- (void)finishWithPasscode:(id)a0;
- (id)initWithInput:(id)a0 completion:(id /* block */)a1;
- (void)passcodeViewController:(id)a0 didCancelWithError:(id)a1;
- (void)passcodeViewController:(id)a0 verifyPasscode:(id)a1;
- (void)showPasscodeValidationError:(id)a0 completion:(id /* block */)a1;
- (void)startBackoffWithTimeout:(long long)a0;

@end
