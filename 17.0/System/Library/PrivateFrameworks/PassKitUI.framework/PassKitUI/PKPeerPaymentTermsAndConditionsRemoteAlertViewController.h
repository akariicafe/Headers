@class PKPeerPaymentTermsController;

@interface PKPeerPaymentTermsAndConditionsRemoteAlertViewController : SBUIRemoteAlertServiceViewController {
    PKPeerPaymentTermsController *_termsController;
}

+ (BOOL)_isSecureForRemoteViewService;

- (id)init;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)_dismiss;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)handleButtonActions:(id)a0;

@end
