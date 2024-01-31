@class NSString, PKEncryptedPushProvisioningTarget;

@interface PKShareableCredential : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) PKEncryptedPushProvisioningTarget *encryptedPushProvisioningTarget;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSString *ownerDisplayName;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (retain, nonatomic) NSString *credentialIdentifierHash;
@property (retain, nonatomic) NSString *sharingInstanceIdentifier;
@property (retain, nonatomic) NSString *cardConfigurationIdentifier;
@property (retain, nonatomic) NSString *nonce;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)protoCredential;
- (id)initWithProtoCredential:(id)a0;
- (BOOL)isEqualToShareableCredential:(id)a0;

@end
