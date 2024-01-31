@class PKAccount, PKPayLaterFinancingPlan;

@interface PKAccountWebServiceFinancingPlanCancellationResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan;

+ (BOOL)jsonDataOptional;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
