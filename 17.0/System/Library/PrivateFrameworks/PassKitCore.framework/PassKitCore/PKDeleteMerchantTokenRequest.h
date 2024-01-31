@class NSString;

@interface PKDeleteMerchantTokenRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *merchantTokenId;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
