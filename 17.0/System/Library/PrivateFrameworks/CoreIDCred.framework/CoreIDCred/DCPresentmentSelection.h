@class NSXPCListenerEndpoint, NSString, NSDictionary, NSData, NSArray;

@interface DCPresentmentSelection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *credentialIdentifier;
@property (retain, nonatomic) NSDictionary *elementsToPresent;
@property (retain, nonatomic) NSData *authData;
@property (retain, nonatomic) NSXPCListenerEndpoint *seAccessEndpoint;
@property (retain, nonatomic) NSDictionary *deviceNamespaces;
@property (retain, nonatomic) NSData *sessionTranscript;
@property (retain, nonatomic) NSArray *responseEncryptionCertificateChain;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCredentialIdentifier:(id)a0 elementsToPresent:(id)a1 authData:(id)a2 seAccessEndpoint:(id)a3;
- (id)initWithCredentialIdentifier:(id)a0 elementsToPresent:(id)a1 authData:(id)a2 seAccessEndpoint:(id)a3 deviceNamespaces:(id)a4;

@end
