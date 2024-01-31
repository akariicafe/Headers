@class NSString, PKPayLaterPaymentIntentController, PKPayLaterFinancingPlan, PKPayLaterInstallment;

@interface PKDashboardFinancingPlanInstallmentItem : NSObject <PKDashboardItem>

@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan;
@property (readonly, nonatomic) PKPayLaterInstallment *relevantInstallment;
@property (readonly, nonatomic) PKPayLaterPaymentIntentController *paymentIntentController;
@property (readonly, copy, nonatomic) NSString *pageTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithFinancingPlan:(id)a0 relevantInstallment:(id)a1 paymentIntentController:(id)a2 pageTag:(id)a3;

@end
