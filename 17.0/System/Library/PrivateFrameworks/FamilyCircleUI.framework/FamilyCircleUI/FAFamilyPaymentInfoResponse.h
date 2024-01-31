@class FAFamilyCreditCard;

@interface FAFamilyPaymentInfoResponse : AAResponse

@property (retain, nonatomic) FAFamilyCreditCard *creditCard;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
