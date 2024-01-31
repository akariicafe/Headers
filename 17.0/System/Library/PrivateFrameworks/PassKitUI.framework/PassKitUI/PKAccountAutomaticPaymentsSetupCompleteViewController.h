@class PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsSetupCompleteViewController : PKExplanationViewController {
    PKAccountAutomaticPaymentsController *_controller;
    unsigned long long _featureIdentifier;
}

- (void)viewDidLoad;
- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)_paymentDateString;
- (long long)_paymentDay;
- (id)_paymentDayNameString;
- (id)_paymentDayString;
- (id)bodyString;
- (void)explanationViewDidSelectContinue:(id)a0;

@end
