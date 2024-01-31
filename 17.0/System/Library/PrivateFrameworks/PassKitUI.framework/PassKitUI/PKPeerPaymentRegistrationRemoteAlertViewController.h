@class NSString, PKPeerPaymentRegistrationFlowController;

@interface PKPeerPaymentRegistrationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentSetupDelegate> {
    PKPeerPaymentRegistrationFlowController *_flowController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isSecureForRemoteViewService;

- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)_dismiss;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)handleButtonActions:(id)a0;
- (void)paymentSetupDidFinish:(id)a0;

@end
