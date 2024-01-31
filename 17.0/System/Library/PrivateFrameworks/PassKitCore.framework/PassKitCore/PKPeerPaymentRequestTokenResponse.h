@class PKPeerPaymentRequestToken;

@interface PKPeerPaymentRequestTokenResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) PKPeerPaymentRequestToken *requestToken;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 deviceScoreIdentifier:(id)a1;

@end
