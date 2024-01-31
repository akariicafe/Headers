@class PKPayLaterPayment, NSString;

@interface PKPayLaterFinancingPlanPaymentScheduleComposerDeclinedInstallmentItem : PKPayLaterFinancingPlanPaymentScheduleComposerInstallmentItem <PKPayLaterFinancingPlanPaymentScheduleComposerItem>

@property (readonly, nonatomic) PKPayLaterPayment *payment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)paymentIdentifier;
- (id)initWithFinancingPlan:(id)a0 installment:(id)a1 payment:(id)a2;
- (void)populateRow:(id)a0;

@end
