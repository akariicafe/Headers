@class NSDictionary;

@interface PKPaymentCredentialAccountAttesationRequest : PKPaymentWebServiceRequest {
    NSDictionary *_requestBody;
}

- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2 webService:(id)a3 completion:(id /* block */)a4;
- (id)initWithCredential:(id)a0 attesationRequest:(id)a1;
- (id)requestBodyWithAttesationRequest:(id)a0;

@end
