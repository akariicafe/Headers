@class PKCurrencyAmount, PKPaymentTransactionGroup, NSDate, PKCreditAccountMergeSummaryAccountDetails, PKFamilyMemberCollection, PKAccount, PKCreditAccountStatement, NSSet, NSString, NSArray, PKAccountUserCollection, PKPaymentWebService, PKCreditAccountSummary, PKTransactionSourceCollection;

@interface PKDashboardBalanceSummaryItem : NSObject <PKDashboardItem>

@property (retain, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKAccountUserCollection *accountUserCollection;
@property (retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection;
@property (retain, nonatomic) NSSet *physicalCards;
@property (retain, nonatomic) PKFamilyMemberCollection *familyCollection;
@property (retain, nonatomic) PKPaymentWebService *webService;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) PKPaymentTransactionGroup *transactionGroup;
@property (retain, nonatomic) PKCreditAccountMergeSummaryAccountDetails *mergeSummaryAccountDetails;
@property (retain, nonatomic) NSDate *mergeDate;
@property (retain, nonatomic) PKCreditAccountStatement *statement;
@property (retain, nonatomic) PKCreditAccountSummary *summary;
@property (retain, nonatomic) NSArray *statements;
@property (retain, nonatomic) PKCurrencyAmount *rewardsCurrencyAmount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;

@end
