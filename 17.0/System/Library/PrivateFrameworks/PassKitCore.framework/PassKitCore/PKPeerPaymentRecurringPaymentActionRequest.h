@class NSString;

@interface PKPeerPaymentRecurringPaymentActionRequest : PKPeerPaymentWebServiceRequest {
    NSString *_recurringPaymentIdentifier;
}

@property (copy, nonatomic) NSString *action;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;
- (id)initWithRecurringPaymentIdentifier:(id)a0;

@end
