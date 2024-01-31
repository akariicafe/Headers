@class NSString, PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformActionRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *action;
@property (retain, nonatomic) PKServiceProviderPurchase *purchase;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;
- (id)initWithAction:(id)a0 purchase:(id)a1;

@end
