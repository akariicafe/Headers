@class NSArray;

@interface PKPaymentPrepareToProvisionRequest : PKPaymentWebServiceRequest {
    NSArray *_credentials;
}

- (void).cxx_destruct;
- (id)initWithCredentials:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;

@end
