@class PKAccountUserCollection, NSString, NSSet, PKPaymentTransaction, PKTransactionSourceCollection, PKTransactionSource, PKAccount, PKPaymentPass, PKFamilyMemberCollection;

@interface PKDashboardPaymentTransactionItem : NSObject <PKDashboardItem> {
    PKPaymentPass *_pass;
}

@property (readonly, nonatomic) PKPaymentTransaction *transaction;
@property (readonly, nonatomic) PKTransactionSourceCollection *transactionSourceCollection;
@property (retain, nonatomic) PKFamilyMemberCollection *familyCollection;
@property (retain, nonatomic) PKTransactionSource *secondaryTransactionSource;
@property (retain, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKAccountUserCollection *accountUserCollection;
@property (copy, nonatomic) NSSet *physicalCards;
@property (nonatomic) BOOL isFeaturedTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

@end
