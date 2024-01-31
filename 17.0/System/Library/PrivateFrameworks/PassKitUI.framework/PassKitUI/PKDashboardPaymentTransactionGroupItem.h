@class PKAccountUserCollection, NSArray, NSString, NSSet, PKTransactionSourceCollection, PKAccount, PKPaymentTransactionGroup, PKFamilyMemberCollection;

@interface PKDashboardPaymentTransactionGroupItem : NSObject <PKDashboardItem>

@property (retain, nonatomic) PKPaymentTransactionGroup *group;
@property (retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection;
@property (retain, nonatomic) PKFamilyMemberCollection *familyCollection;
@property (retain, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKAccountUserCollection *accountUserCollection;
@property (copy, nonatomic) NSSet *physicalCards;
@property (retain, nonatomic) NSArray *tokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
