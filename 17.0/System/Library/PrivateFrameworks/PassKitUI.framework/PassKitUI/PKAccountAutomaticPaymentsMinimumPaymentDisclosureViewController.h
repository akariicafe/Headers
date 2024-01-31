@class PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController : PKExplanationViewController {
    PKAccountAutomaticPaymentsController *_controller;
    unsigned long long _featureIdentifier;
}

- (void)viewDidLoad;
- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (void)explanationViewDidSelectContinue:(id)a0;

@end
