@class NSData, PKPaymentRequest;

@interface PKPaymentAuthorizationRequest : NSObject

@property (retain, nonatomic) NSData *credential;
@property (retain, nonatomic) NSData *nonceData;
@property (readonly, nonatomic) PKPaymentRequest *paymentRequest;

- (void).cxx_destruct;
- (id)initWithPaymentRequest:(id)a0;

@end
