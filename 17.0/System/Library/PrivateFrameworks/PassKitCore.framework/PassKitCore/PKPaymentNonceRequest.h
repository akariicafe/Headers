@class NSString;

@interface PKPaymentNonceRequest : PKPaymentAugmentBaseRequest

@property (nonatomic) BOOL useLegacyGetAPI;
@property (copy, nonatomic) NSString *merchantIdentifier;

+ (id)nonceRequestWithBaseRequest:(id)a0;

- (void).cxx_destruct;
- (id)_legacyGetURLRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)bodyDictionary;
- (id)endpointComponents;

@end
