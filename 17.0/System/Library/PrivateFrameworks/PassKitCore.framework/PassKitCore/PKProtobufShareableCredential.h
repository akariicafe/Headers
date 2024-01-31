@class NSString;

@interface PKProtobufShareableCredential : PBCodable <NSCopying> {
    struct { unsigned char status : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEncryptedPushProvisioningTarget;
@property (retain, nonatomic) NSString *encryptedPushProvisioningTarget;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasCredentialIdentifierHash;
@property (retain, nonatomic) NSString *credentialIdentifierHash;
@property (readonly, nonatomic) BOOL hasOwnerDisplayName;
@property (retain, nonatomic) NSString *ownerDisplayName;
@property (readonly, nonatomic) BOOL hasCredentialIdentifier;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (readonly, nonatomic) BOOL hasCardConfigurationIdentifier;
@property (retain, nonatomic) NSString *cardConfigurationIdentifier;
@property (readonly, nonatomic) BOOL hasSharingInstanceIdentifier;
@property (retain, nonatomic) NSString *sharingInstanceIdentifier;
@property (readonly, nonatomic) BOOL hasNonce;
@property (retain, nonatomic) NSString *nonce;

- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
