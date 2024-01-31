@class NSString, PKPaymentDocumentSubmissionController;

@interface PKPaymentDocumentSubmissionInfoViewController : PKExplanationViewController <PKPaymentDocumentSubmissionControllerDelegate, PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPaymentSetupPresentationProtocol> {
    PKPaymentDocumentSubmissionController *_controller;
    long long _context;
    long long _currentState;
    long long _currentSide;
    unsigned long long _featureIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)_secondaryButton;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_cancelPressed;
- (void)_reportViewDidAppear:(BOOL)a0;
- (void)captureController:(id)a0 didChangeStateTo:(long long)a1;
- (void)captureController:(id)a0 showLoading:(BOOL)a1;
- (void)didSelectSetupLater;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithController:(id)a0 context:(long long)a1 featureIdentifier:(unsigned long long)a2;
- (unsigned long long)onPresentationRemoveViewControllersAfterMarker;
- (unsigned long long)paymentSetupMarker;
- (void)updateUIWithState:(long long)a0;

@end
