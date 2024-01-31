@class PKPaymentPass, NSString, PKPeerPaymentAccount, PKPeerPaymentActionController, PKThresholdTopUpSetupViewController, PKPeerPaymentRecurringPayment;
@protocol PKPeerPaymentThresholdTopUpControllerDelegate, PKPassLibraryDataProvider;

@interface PKPeerPaymentThresholdTopUpController : NSObject <PKThresholdTopUpSetupViewControllerDelegate, PKPeerPaymentActionControllerDelegate, PKPaymentSetupDelegate, PKExplanationViewDelegate> {
    id<PKPeerPaymentThresholdTopUpControllerDelegate> _delegate;
    PKPeerPaymentAccount *_account;
    PKThresholdTopUpSetupViewController *_vc;
    long long _context;
    PKPaymentPass *_pass;
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
    PKPeerPaymentActionController *_controller;
    PKPeerPaymentRecurringPayment *_existingTopUp;
    id /* block */ _actionCompletedBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_messageForErrorCode:(unsigned long long)a0;
- (void)_openPaymentSetupWithNetworkWhitelist:(id)a0 paymentSetupMode:(long long)a1;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)a0;
- (id)_setupCompleteImage;
- (id)_titleForErrorCode:(unsigned long long)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithPeerPaymentAccount:(id)a0 pass:(id)a1 context:(long long)a2 passLibraryDataProvider:(id)a3 delegate:(id)a4;
- (void)paymentSetupDidFinish:(id)a0;
- (void)peerPaymentActionController:(id)a0 hasChangedState:(unsigned long long)a1;
- (void)peerPaymentActionController:(id)a0 requestPresentViewController:(id)a1;
- (void)presentTopUpFlowForRecurringPayment:(id)a0;
- (id)presentationSceneBundleIdentifierForPeerPaymentActionController:(id)a0;
- (id)presentationSceneIdentifierForPeerPaymentActionController:(id)a0;
- (void)thresholdTopUpDidSelectCancel:(id)a0;
- (void)thresholdTopUpDidSelectContinue:(id)a0 completion:(id /* block */)a1;
- (void)thresholdTopUpDidSelectUpdate:(id)a0 completion:(id /* block */)a1;
- (void)thresholdTopUpPerformCancel:(id)a0 completion:(id /* block */)a1;

@end
