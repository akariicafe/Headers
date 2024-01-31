@class NSString, PKPeerPaymentRegistrationFlowController, NSDictionary;

@interface PKPeerPaymentRegistrationViewController : UIViewController <PKPaymentSetupDelegate> {
    PKPeerPaymentRegistrationFlowController *_flowController;
    NSDictionary *_userInfo;
    id /* block */ _dismissHandler;
    BOOL _dismissed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setDismissHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithUserInfo:(id)a0;
- (void)_dismiss;
- (void)paymentSetupDidFinish:(id)a0;
- (void)startRegistrationFlowWithCompletion:(id /* block */)a0;

@end
