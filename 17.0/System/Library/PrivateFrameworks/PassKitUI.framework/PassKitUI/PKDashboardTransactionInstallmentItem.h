@class PKTransactionSourceCollection, NSString, PKCreditInstallmentPlan, PKAccount;

@interface PKDashboardTransactionInstallmentItem : NSObject <PKDashboardItem>

@property (retain, nonatomic) PKCreditInstallmentPlan *installmentPlan;
@property (retain, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;

@end
