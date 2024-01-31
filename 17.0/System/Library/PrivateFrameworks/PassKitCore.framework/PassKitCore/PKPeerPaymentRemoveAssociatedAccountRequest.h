@class NSString;

@interface PKPeerPaymentRemoveAssociatedAccountRequest : PKPeerPaymentWebServiceRequest {
    NSString *_associatedAccountIdentifier;
}

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;
- (id)initWithAssociatedAccountIdentifier:(id)a0;

@end
