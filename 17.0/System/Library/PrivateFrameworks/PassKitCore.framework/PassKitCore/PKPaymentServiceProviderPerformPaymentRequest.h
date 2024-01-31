@class PKServiceProviderOrder, PKPaymentPass, NSString, NSData, PKSecureElementCertificateSet;

@interface PKPaymentServiceProviderPerformPaymentRequest : PKPaymentWebServiceRequest {
    PKSecureElementCertificateSet *_certificates;
}

@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKServiceProviderOrder *serviceProviderOrder;
@property (copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSString *targetDeviceSerialNumber;
@property (nonatomic) long long cryptogramType;

- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2 webService:(id)a3 completion:(id /* block */)a4;

@end
