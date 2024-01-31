@class NSString, NSURL;

@interface PKPeerPaymentServiceRegistrationResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, copy, nonatomic) NSString *peerPaymentServicesPushTopic;
@property (readonly, copy, nonatomic) NSURL *peerPaymentServiceURL;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
