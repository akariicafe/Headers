@class PKAccountUserCollection, NSArray, NSString, NSSet, PKContactAvatarManager, PKSpendingSummary, PKTransactionSourceCollection, PKAccount, PKSpendingSummaryFetcher, PKFamilyMemberCollection;

@interface PKDashboardCreditAccountItem : NSObject <PKDashboardItem>

@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) PKAccountUserCollection *accountUserCollection;
@property (readonly, nonatomic) NSSet *physicalCards;
@property (retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection;
@property (retain, nonatomic) PKFamilyMemberCollection *familyCollection;
@property (retain, nonatomic) PKContactAvatarManager *avatarManager;
@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *weeks;
@property (retain, nonatomic) NSArray *months;
@property (retain, nonatomic) NSArray *years;
@property (retain, nonatomic) PKSpendingSummary *summary;
@property (retain, nonatomic) PKSpendingSummaryFetcher *summaryFetcher;
@property (retain, nonatomic) NSArray *mostRecentTransactions;
@property (retain, nonatomic) NSArray *pendingPayments;
@property (retain, nonatomic) NSArray *upcomingScheduledPayments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 accountUserCollection:(id)a1 physicalCards:(id)a2 transactionSourceCollection:(id)a3 familyCollection:(id)a4 avatarManager:(id)a5 type:(unsigned long long)a6;

@end
