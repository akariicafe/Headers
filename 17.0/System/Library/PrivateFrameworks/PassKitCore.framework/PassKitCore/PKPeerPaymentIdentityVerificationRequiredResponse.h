@class NSString;

@interface PKPeerPaymentIdentityVerificationRequiredResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *prerequisiteIdentifier;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
