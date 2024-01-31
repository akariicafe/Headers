@class NSString;

@interface PKPeerPaymentRecurringPaymentsRequest : PKPeerPaymentWebServiceRequest {
    NSString *_accountIdentifier;
}

- (id)initWithAccountIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
