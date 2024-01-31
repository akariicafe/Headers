@interface VUIAccountViewController : UIViewController <AAUISignInControllerDelegate> {
    void /* unknown type, empty encoding */ activeViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_accountSettingsViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_signInController;
}

- (void)signInController:(id)a0 didCompleteWithOperationsResults:(id)a1;
- (void)signInControllerDidCancel:(id)a0;
- (void)signInControllerDidSkip:(id)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
