@interface AAUIDeviceLocatorConfirmationUtilities : NSObject

+ (void)_handleFMIPAuthenticationResponse:(id)a0 withError:(id)a1 forContext:(id)a2 completion:(id /* block */)a3;
+ (id)_messageForError:(id)a0 account:(id)a1;
+ (void)_performFMIPAuthenticationForContext:(id)a0 completion:(id /* block */)a1;
+ (id)_titleForError:(id)a0 account:(id)a1;
+ (void)checkIfWatchHasAppleIDAccount:(id /* block */)a0;
+ (void)showDisableAlertForAccount:(id)a0 presentingViewController:(id)a1 withCompletion:(id /* block */)a2;
+ (void)showDisableAlertForAccount:(id)a0 withCompletion:(id /* block */)a1;
+ (void)showDisableAlertForAccount:(id)a0 withMessage:(id)a1 confirmationButtonTitle:(id)a2 completion:(id /* block */)a3;
+ (void)showDisableAlertForAccount:(id)a0 withMessage:(id)a1 confirmationButtonTitle:(id)a2 presentingViewController:(id)a3 completion:(id /* block */)a4;
+ (void)showDisableAlertForContext:(id)a0 withCompletion:(id /* block */)a1;
+ (void)showEnableAlertWithCompletion:(id /* block */)a0;

@end
