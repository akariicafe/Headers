@class NSString;

@interface PKPaymentIssuerProvisioningCertificatesRequest : PKPaymentWebServiceRequest {
    NSString *_encryptionScheme;
}

- (id)init;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithEncryptionScheme:(id)a0;

@end
