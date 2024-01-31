@class PKPaymentMerchantSession;

@interface PKPaymentAugmentSessionRequest : PKPaymentAugmentBaseRequest

@property (retain, nonatomic) PKPaymentMerchantSession *merchantSession;

+ (id)augmentSessionRequestWithBaseRequest:(id)a0;

- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)endpointComponents;

@end
