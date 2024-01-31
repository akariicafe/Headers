@class NSData;

@interface NGMPBOuterMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEncryptedPayload;
@property (retain, nonatomic) NSData *encryptedPayload;
@property (readonly, nonatomic) BOOL hasEphemeralPubKey;
@property (retain, nonatomic) NSData *ephemeralPubKey;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (readonly, nonatomic) BOOL hasSecondaryMessage;
@property (retain, nonatomic) NSData *secondaryMessage;
@property (readonly, nonatomic) BOOL hasKeyValidator;
@property (retain, nonatomic) NSData *keyValidator;

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
