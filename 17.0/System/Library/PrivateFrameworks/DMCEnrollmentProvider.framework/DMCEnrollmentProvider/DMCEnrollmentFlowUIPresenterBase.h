@class DMCActivityViewController, DMCPINEntryViewController, DMCDismissalAwareNavigationController, NSString, UIViewController;

@interface DMCEnrollmentFlowUIPresenterBase : NSObject <DevicePINControllerDelegate>

@property (copy, nonatomic) id /* block */ passcodeCompletionHandler;
@property (retain, nonatomic) DMCPINEntryViewController *pinEntryViewController;
@property (weak) UIViewController *baseViewController;
@property (retain, nonatomic) DMCDismissalAwareNavigationController *navigationController;
@property (retain, nonatomic) DMCActivityViewController *activityController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAcceptEnteredPIN:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)didCancelEnteringPIN;
- (void)pushViewController:(id)a0;
- (id)initWithBaseViewController:(id)a0;
- (void)presentActivityPageWithText:(id)a0 showButtomView:(BOOL)a1;
- (void)pushViewController:(id)a0 foundationViewController:(id)a1;
- (void)requestDevicePasscodeWithDescriptionText:(id)a0 completionHandler:(id /* block */)a1;

@end
