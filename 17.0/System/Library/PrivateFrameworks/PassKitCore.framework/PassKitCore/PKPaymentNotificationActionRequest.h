@class NSString;

@interface PKPaymentNotificationActionRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *action;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;

@end
