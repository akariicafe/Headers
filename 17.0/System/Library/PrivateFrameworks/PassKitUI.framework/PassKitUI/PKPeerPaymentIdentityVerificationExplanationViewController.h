@class NSString, PKPeerPaymentIdentityVerificationController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPeerPaymentIdentityVerificationExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate> {
    PKPeerPaymentIdentityVerificationController *_controller;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    unsigned long long _identityVerificaionError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cancel;
- (void)loadView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_snapshotSize;
- (id)_titleText;
- (id)_bodyText;
- (id)_bodyButtonText;
- (void)_processNextViewController;
- (void)_terminateFlow;
- (void)explanationViewDidSelectBodyButton:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithContext:(long long)a0 setupDelegate:(id)a1 identityVerificationController:(id)a2;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsDismissCurrentViewControllerAnimated:(BOOL)a1;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsPresentViewController:(id)a1 animated:(BOOL)a2;

@end
