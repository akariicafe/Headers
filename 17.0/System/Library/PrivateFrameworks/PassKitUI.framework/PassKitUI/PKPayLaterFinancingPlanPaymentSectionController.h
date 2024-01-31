@class PKPayLaterFinancingPlan, PKPayLaterPayment, UIImage, PKPayLaterBusinessChatTopicComposer, PKPayLaterFinancingPlanRow, PKBusinessChatController, PKPayLaterButtonRow, NSDateFormatter, PKPaymentPass, PKPayLaterPaymentIntentController;

@interface PKPayLaterFinancingPlanPaymentSectionController : PKPayLaterSectionController {
    PKPayLaterButtonRow *_reportIssueButton;
    PKPayLaterFinancingPlanRow *_financingPlanRow;
    PKPaymentPass *_payLaterPass;
    UIImage *_merchantIcon;
    UIImage *_resizedMerchantIcon;
    PKBusinessChatController *_businessChatController;
    NSDateFormatter *_paymentDateFormatter;
    PKPayLaterPaymentIntentController *_paymentIntentController;
    PKPayLaterBusinessChatTopicComposer *_topicsComposer;
}

@property (retain, nonatomic) PKPayLaterFinancingPlan *financingPlan;
@property (retain, nonatomic) PKPayLaterPayment *payment;

- (id)identifiers;
- (void).cxx_destruct;
- (void)_configurePaymentSummarySection:(id)a0;
- (void)_configureReportIssueSection:(id)a0;
- (void)configureHeaderView:(id)a0 forSectionIdentifier:(id)a1;
- (Class)headerViewClassForSectionIdentifier:(id)a0;
- (id)initWithFinancingPlan:(id)a0 payment:(id)a1 payLaterAccount:(id)a2 paymentIntentController:(id)a3 merchantIcon:(id)a4 delegate:(id)a5;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
