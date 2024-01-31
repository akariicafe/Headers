@class PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformPaymentResponse : PKPaymentWebServiceResponse

@property (readonly, retain, nonatomic) PKServiceProviderPurchase *purchase;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
