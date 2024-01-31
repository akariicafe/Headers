@class NSData;

@interface PKInAppPaymentSessionAuthorizeParamaters : NSObject

@property (retain, nonatomic) NSData *nonce;
@property (retain, nonatomic) NSData *authenticationCredential;
@property (retain, nonatomic) NSData *networkMerchantIdentifier;
@property (nonatomic) long long cryptogramType;
@property (nonatomic) BOOL *isFeatureNotSupportedError;

- (void).cxx_destruct;
- (id)initWithNonce:(id)a0 authenticationCredential:(id)a1 networkMerchantIdentifier:(id)a2 cryptogramType:(long long)a3;

@end
