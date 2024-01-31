@class NSString, PKAccountTermsAndConditionsController, PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsHeroViewController : PKExplanationViewController <PKPaymentSetupViewControllerDelegate, UITextViewDelegate> {
    PKAccountAutomaticPaymentsController *_controller;
    unsigned long long _featureIdentifier;
    PKAccountTermsAndConditionsController *_termsController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;

@end
