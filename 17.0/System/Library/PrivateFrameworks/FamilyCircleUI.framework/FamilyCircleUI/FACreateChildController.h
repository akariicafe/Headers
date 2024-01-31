@class FANavigationController, ACAccount, UIViewController;
@protocol FACreateChildControllerDelegate;

@interface FACreateChildController : NSObject <FANavigationControllerDelegate>

@property (retain, nonatomic) ACAccount *appleAccount;
@property (retain, nonatomic) FANavigationController *navController;
@property (weak, nonatomic) id<FACreateChildControllerDelegate> delegate;
@property (weak, nonatomic) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (id)initWithAppleAccount:(id)a0;
- (void)_dismissPresentedViewControllerWithCompletion:(id /* block */)a0;
- (id)_createChildAuthContext;
- (id)_repairAuthContextWithAuthResults:(id)a0;
- (id)_repairFAContextWithAuthResults:(id)a0;
- (id)_repairParametersFromAuthResults:(id)a0;
- (void)_setupPresentedViewController;
- (void)createChildAccountWithCompletion:(id /* block */)a0;
- (void)navigationController:(id)a0 didPresentInitialViewController:(id)a1;
- (void)navigationController:(id)a0 presentViewController:(id)a1;
- (void)repairChildAccountWithAuthenticationResults:(id)a0 completion:(id /* block */)a1;

@end
