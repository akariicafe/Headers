@class NSData;

@interface PCSManateeShareInvitation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasExportedPCSData;
@property (retain, nonatomic) NSData *exportedPCSData;
@property (readonly, nonatomic) BOOL hasShareePublicKeyData;
@property (retain, nonatomic) NSData *shareePublicKeyData;

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
