@class NSString, PKAccount, PKCurrencyAmount;

@interface PKDashboardPayLaterAccountItem : NSObject <PKDashboardItem>

@property (readonly, nonatomic) PKAccount *payLaterAccount;
@property (readonly, nonatomic) PKCurrencyAmount *dueNext30Days;
@property (readonly, nonatomic) PKCurrencyAmount *totalPending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithPayLaterAccount:(id)a0 dueNext30Days:(id)a1 totalPending:(id)a2;

@end
