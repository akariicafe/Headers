@class PKTransactionReceipt, PKAccountUserCollection, NSString, NSSet, PKPaymentTransaction, PKTransactionSourceCollection, PKAccount, PKFamilyMemberCollection;

@interface PKDashboardTransactionReceiptItem : NSObject <PKDashboardItem>

@property (retain, nonatomic) PKTransactionReceipt *receipt;
@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection;
@property (retain, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKAccountUserCollection *accountUserCollection;
@property (retain, nonatomic) PKFamilyMemberCollection *familyCollection;
@property (copy, nonatomic) NSSet *physicalCards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;

@end
