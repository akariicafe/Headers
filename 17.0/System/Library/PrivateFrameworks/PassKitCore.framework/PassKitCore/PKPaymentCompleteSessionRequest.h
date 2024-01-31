@class PKPaymentMerchantSession;

@interface PKPaymentCompleteSessionRequest : PKPaymentRewrapRequestBase

@property (retain, nonatomic) PKPaymentMerchantSession *merchantSession;

- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)endpointComponents;

@end
