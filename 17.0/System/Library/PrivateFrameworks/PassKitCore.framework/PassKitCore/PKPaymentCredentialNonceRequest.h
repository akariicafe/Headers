@class NSString, PKSecureElementPass;

@interface PKPaymentCredentialNonceRequest : PKPaymentWebServiceRequest

@property (readonly, nonatomic) PKSecureElementPass *paymentPass;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;
- (id)initWithPaymentPass:(id)a0 deviceIdentifier:(id)a1;

@end
