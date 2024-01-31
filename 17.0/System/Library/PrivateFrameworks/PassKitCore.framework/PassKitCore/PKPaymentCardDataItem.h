@class PKPaymentPass, CNContact, PKPaymentApplication, PKCurrencyAmount;

@interface PKPaymentCardDataItem : PKPaymentDataItem

@property (nonatomic) BOOL showPeerPaymentBalance;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) PKPaymentApplication *paymentApplication;
@property (readonly, nonatomic) BOOL requiresBillingAddress;
@property (readonly, nonatomic) CNContact *billingAddress;
@property (readonly, nonatomic) BOOL shouldShowCardArt;

+ (long long)dataType;

- (long long)status;
- (long long)context;
- (BOOL)isValidWithError:(id *)a0;
- (void).cxx_destruct;
- (id)errors;
- (id)paymentContactFormatErrors;

@end
