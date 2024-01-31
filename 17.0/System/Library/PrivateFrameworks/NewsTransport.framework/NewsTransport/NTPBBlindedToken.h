@class NSData;

@interface NTPBBlindedToken : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *token;
@property (nonatomic) unsigned int keyId;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
