@class NSString;

@interface PKPeerPaymentPendingRequestPerformActionRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *requestToken;
@property (copy, nonatomic) NSString *action;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
