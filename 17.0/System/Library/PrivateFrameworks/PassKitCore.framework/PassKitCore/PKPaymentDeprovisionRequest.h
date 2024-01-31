@class PKPaymentPass;

@interface PKPaymentDeprovisionRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPass *pass;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithPaymentPass:(id)a0;

@end
