@class PKTransactionSourceCollection, PKFamilyMemberCollection, PKCreditInstallmentPlan, NSString, PKAccountUserCollection, PKAccount;

@interface PKDashboardInstallmentPlanStatusItem : NSObject <PKDashboardItem>

@property (retain, nonatomic) PKCreditInstallmentPlan *installmentPlan;
@property (retain, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection;
@property (retain, nonatomic) PKAccountUserCollection *accountUserCollection;
@property (retain, nonatomic) PKFamilyMemberCollection *familyMemberCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;

@end
