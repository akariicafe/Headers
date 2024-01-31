@class NSString, PKAccount, PKPayLaterPaymentIntentController;

@interface PKDashboardFinancingPlanGroupItem : NSObject <PKDashboardItem>

@property (readonly, nonatomic) long long financingPlansCount;
@property (readonly, nonatomic) PKAccount *payLaterAccount;
@property (readonly, nonatomic) PKPayLaterPaymentIntentController *paymentIntentController;
@property (readonly, copy, nonatomic) NSString *pageTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithFinancingPlansCount:(long long)a0 payLaterAccount:(id)a1 paymentIntentController:(id)a2 pageTag:(id)a3;

@end
