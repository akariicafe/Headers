@class NFECommercePaymentResponse, NFTrustSignResponse;

@interface NFTrustPaymentSignResponse : NFTrustObject

@property (retain, nonatomic) NFTrustSignResponse *signResponse;
@property (retain, nonatomic) NFECommercePaymentResponse *paymentResponse;

+ (BOOL)supportsSecureCoding;
+ (id)paymentSignResponseWithSignResponse:(id)a0 paymentResponse:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
