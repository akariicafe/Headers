@class RemoteUIController, NSString, PKPaymentProvisioningController, PKSecureElementPass;
@protocol PKPaymentPassAMPEnrollmentViewControllerFlowDelegate;

@interface PKPaymentPassAMPEnrollmentViewController : PKExplanationViewController <RemoteUIControllerDelegate, UITextViewDelegate, PKLoadingUIProviding> {
    PKPaymentProvisioningController *_provisioningController;
    PKSecureElementPass *_pass;
    RemoteUIController *_termsController;
}

@property (weak, nonatomic) id<PKPaymentPassAMPEnrollmentViewControllerFlowDelegate> flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)shouldOfferAMPEnrollmentForPass:(id)a0 provisioningController:(id)a1 withCompletion:(id /* block */)a2;

- (void)loadView;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)_done;
- (struct CGSize { double x0; double x1; })_snapshotSize;
- (id)_createBodyImage:(id)a0;
- (void)_displayTermsWithCompletion:(id /* block */)a0;
- (void)_performAMPEnrollmentWithPass:(id)a0 asDefault:(BOOL)a1 completion:(id /* block */)a2;
- (void)_performTerms;
- (void)_updateBodyImage;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithProvisioningController:(id)a0 paymentPass:(id)a1 context:(long long)a2;
- (void)proceedToNextScreen;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (void)showLoadingUI:(BOOL)a0 animated:(BOOL)a1;

@end
