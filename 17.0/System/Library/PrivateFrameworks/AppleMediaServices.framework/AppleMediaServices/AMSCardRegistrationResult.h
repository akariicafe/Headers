@class NSData, NSURL;

@interface AMSCardRegistrationResult : NSObject

@property (readonly, nonatomic) NSData *cardData;
@property (readonly, nonatomic) NSURL *brokerURL;
@property (readonly, nonatomic) NSURL *paymentServicesURL;

- (void).cxx_destruct;
- (id)initWithCardRegistrationResponse:(id)a0;

@end
