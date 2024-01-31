@class NSString, PKAccount, PKPaymentPass;

@interface PKDashboardAccountItem : NSObject <PKDashboardItem>

@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) PKPaymentPass *presentingPass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 presentingPass:(id)a1;

@end
