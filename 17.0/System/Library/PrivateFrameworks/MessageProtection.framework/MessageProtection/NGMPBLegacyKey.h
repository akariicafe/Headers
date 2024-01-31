@class NSData;

@interface NGMPBLegacyKey : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *encryptionKey;
@property (retain, nonatomic) NSData *signingKey;

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
