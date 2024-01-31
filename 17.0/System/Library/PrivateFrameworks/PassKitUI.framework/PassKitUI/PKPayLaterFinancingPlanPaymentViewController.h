@class PKPayLaterPayment, PKPayLaterFinancingPlanPaymentSectionController, PKPayLaterFinancingPlan;

@interface PKPayLaterFinancingPlanPaymentViewController : PKPayLaterViewController {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterPayment *_payment;
    PKPayLaterFinancingPlanPaymentSectionController *_sectionController;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)pageTag;
- (id)additionalAnalyticsDictionary;
- (void)didUpdateFinancingPlan:(id)a0;
- (id)initWithFinancingPlan:(id)a0 payment:(id)a1 payLaterAccount:(id)a2 paymentIntentController:(id)a3 merchantIcon:(id)a4;

@end
