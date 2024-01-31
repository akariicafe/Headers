@class NSString, NSData, IDSAuthenticationCertificate;

@interface IDSAuthenticationCertificateSignature : NSObject

@property (readonly, nonatomic) NSString *subscriptionIdentifier;
@property (readonly, nonatomic) NSString *serverVerifiableEncoding;
@property (readonly, nonatomic) IDSAuthenticationCertificate *authenticationCertificate;
@property (readonly, nonatomic) NSData *signature;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSubscriptionIdentifier:(id)a0 authenticationCertificate:(id)a1 signature:(id)a2 nonce:(id)a3;
- (id)initWithSubscriptionIdentifier:(id)a0 authenticationCertificate:(id)a1 signature:(id)a2 serverVerifiableEncoding:(id)a3;

@end
