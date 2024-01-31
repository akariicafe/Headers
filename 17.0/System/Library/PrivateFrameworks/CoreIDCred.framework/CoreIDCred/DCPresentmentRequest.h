@class NSData, NSString, NSXPCListenerEndpoint;

@interface DCPresentmentRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *sessionEstablishment;
@property (retain, nonatomic) NSData *sessionTranscript;
@property (retain, nonatomic) NSData *sessionEncryptionIntermediateKeyMaterial;
@property (retain, nonatomic) NSData *requiredPublicKeyIdentifier;
@property (retain, nonatomic) NSXPCListenerEndpoint *seAccessEndpoint;
@property (retain) NSString *relyingPartyIdentifier;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionEstablishment:(id)a0 sessionTranscript:(id)a1;
- (id)initWithSessionEstablishment:(id)a0 sessionTranscript:(id)a1 seAccessEndpoint:(id)a2;

@end
