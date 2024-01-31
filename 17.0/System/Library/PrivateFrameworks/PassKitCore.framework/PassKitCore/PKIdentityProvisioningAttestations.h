@class NSArray, NSData;

@interface PKIdentityProvisioningAttestations : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *authorizationKeyAttestation;
@property (readonly, nonatomic) NSArray *deviceEncryptionKeyAttestation;
@property (readonly, nonatomic) NSData *deviceEncryptionKeyAuthorization;
@property (readonly, nonatomic) NSData *transactionKeyCASDAttestation;
@property (readonly, nonatomic) NSData *transactionKeyCASDSignature;
@property (readonly, nonatomic) NSData *transactionKeyCASDAuthorization;
@property (readonly, nonatomic) NSData *progenitorKeyCASDAttestation;
@property (readonly, nonatomic) NSArray *transactionKeys;
@property (readonly, nonatomic) NSData *serverAttestedProvisioningData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAuthorizationKeyAttestation:(id)a0 deviceEncryptionKeyAttestation:(id)a1 deviceEncryptionKeyAuthorization:(id)a2 progenitorKeyCASDAttestation:(id)a3 transactionKeys:(id)a4 serverAttestedProvisioningData:(id)a5;
- (id)initWithAuthorizationKeyAttestation:(id)a0 deviceEncryptionKeyAttestation:(id)a1 deviceEncryptionKeyAuthorization:(id)a2 transactionKeyCASDAttestation:(id)a3 transactionKeyCASDSignature:(id)a4 transactionKeyCASDAuthorization:(id)a5;

@end
