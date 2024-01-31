@class PKPaymentPass, NSString, PKPeerPaymentAccount, NSURL, PKBankAccountInformation, PKCurrencyAmount, PKAccount;

@interface PKAccountServiceTransferRequest : PKPaymentRequest {
    unsigned long long _featureIdentifier;
    PKCurrencyAmount *_currencyAmount;
}

@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, copy, nonatomic) NSURL *accountBaseURL;
@property (retain, nonatomic) PKBankAccountInformation *defaultBankAccount;
@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) unsigned long long transferType;
@property (readonly, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (readonly, nonatomic) PKPaymentPass *peerPaymentPass;
@property (readonly, nonatomic) BOOL supportsSplitPayment;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_bankAccountsForFundingSources:(id)a0;
- (id)initWithAccount:(id)a0 peerPaymentAccount:(id)a1 peerPaymentPass:(id)a2 transferType:(unsigned long long)a3 fundingSources:(id)a4 currencyAmount:(id)a5;
- (id)initWithAccount:(id)a0 peerPaymentAccount:(id)a1 peerPaymentPass:(id)a2 transferType:(unsigned long long)a3 fundingSources:(id)a4 currencyAmount:(id)a5 paymentDate:(id)a6 objectSettings:(id)a7;
- (BOOL)isEqualToAccountServicePaymentRequest:(id)a0;
- (void)paymentAmountsWithFundingSources:(unsigned long long)a0 apc:(id *)a1 ach:(id *)a2;
- (id)paymentSummaryItemsWithFundingSources:(unsigned long long)a0 bankAccount:(id)a1;

@end
