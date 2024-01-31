@class NSString, NSDictionary, NSData, SKPaymentDiscount, SKPaymentAppleIDAuthorizationRequest;

@interface SKPaymentInternal : NSObject <NSCopying> {
    NSString *_applicationUsername;
    NSString *_partnerIdentifier;
    NSString *_partnerTransactionIdentifier;
    NSString *_productIdentifier;
    long long _quantity;
    NSData *_requestData;
    NSDictionary *_requestParameters;
    BOOL _simulatesAskToBuyInSandbox;
    BOOL _isStoreOriginated;
    SKPaymentDiscount *_paymentDiscount;
    SKPaymentAppleIDAuthorizationRequest *_appleIDAuthorizationClientInfo;
}

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
