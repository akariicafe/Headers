@class NSString, PKEncryptedVPANPaymentCredentials;

@interface PKVPANPaymentCredentialResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *vpanIdentifier;
@property (readonly, copy, nonatomic) NSString *expiration;
@property (readonly, copy, nonatomic) PKEncryptedVPANPaymentCredentials *credentials;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
