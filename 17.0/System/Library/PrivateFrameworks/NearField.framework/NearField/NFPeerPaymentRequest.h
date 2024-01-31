@class NFECommercePaymentRequest, NFPeerPaymentTransferRequest;

@interface NFPeerPaymentRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NFECommercePaymentRequest *topUpRequest;
@property (retain, nonatomic) NFPeerPaymentTransferRequest *transferRequest;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
