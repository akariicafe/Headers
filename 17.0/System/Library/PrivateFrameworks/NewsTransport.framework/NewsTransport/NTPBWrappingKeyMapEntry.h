@class NSData;

@interface NTPBWrappingKeyMapEntry : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasWrappingKeyId;
@property (retain, nonatomic) NSData *wrappingKeyId;
@property (readonly, nonatomic) BOOL hasWrappingKey;
@property (retain, nonatomic) NSData *wrappingKey;

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
