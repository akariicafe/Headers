@class PKPayLaterInstallment, NSString, PKPayLaterFinancingPlan;

@interface PKPayLaterFinancingPlanPaymentScheduleComposerInstallmentItem : NSObject <PKPayLaterFinancingPlanPaymentScheduleComposerItem>

@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan;
@property (readonly, nonatomic) PKPayLaterInstallment *installment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)date;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)installmentIdentifier;
- (id)paymentIdentifier;
- (id)initWithFinancingPlan:(id)a0 installment:(id)a1;
- (void)populateRow:(id)a0;

@end
