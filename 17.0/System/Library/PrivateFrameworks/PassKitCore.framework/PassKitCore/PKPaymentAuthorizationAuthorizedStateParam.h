@class PKServiceProviderPurchase, PKPayment, NSString, PKPaymentRewrapResponseBase, PKAuthorizedPeerPaymentQuote, PKPaymentToken, PKApplePayTrustSignature;

@interface PKPaymentAuthorizationAuthorizedStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) PKPaymentToken *paymentToken;
@property (retain, nonatomic) PKPayment *payment;
@property (retain, nonatomic) PKServiceProviderPurchase *purchase;
@property (copy, nonatomic) NSString *purchaseTransactionIdentifier;
@property (retain, nonatomic) PKPaymentRewrapResponseBase *rewrapResponse;
@property (readonly, nonatomic) PKAuthorizedPeerPaymentQuote *authorizedPeerPaymentQuote;
@property (readonly, nonatomic) PKApplePayTrustSignature *applePayTrustSignature;
@property (readonly, copy, nonatomic) NSString *installmentAuthorizationToken;

+ (id)paramWithApplePayTrustSignature:(id)a0;
+ (id)paramWithAuthorizedPeerPaymentQuote:(id)a0;
+ (id)paramWithInstallmentAuthorizationToken:(id)a0;
+ (id)paramWithPayment:(id)a0;
+ (id)paramWithPaymentToken:(id)a0 rewrapResponse:(id)a1;
+ (id)paramWithPurchase:(id)a0 purchaseTransactionIdentifier:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
