@class PKPaymentPass, NSSet, PKPeerPaymentAccount, PKAccountUser, PKAccount;

@interface PKTransactionSource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSSet *transactionSourceIdentifiers;
@property (readonly, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, nonatomic) PKAccountUser *accountUser;
@property (readonly, nonatomic) PKAccount *account;

- (unsigned long long)hash;
- (id)initWithAccount:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccountUser:(id)a0;
- (id)initWithPaymentPass:(id)a0;
- (id)initWithPeerPaymentAccount:(id)a0;

@end
