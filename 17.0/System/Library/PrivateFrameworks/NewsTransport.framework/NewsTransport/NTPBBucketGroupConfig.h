@interface NTPBBucketGroupConfig : PBCodable <NSCopying>

@property (nonatomic) int version;
@property (nonatomic) long long numberOfBuckets;
@property (nonatomic) long long byteCount;
@property (nonatomic) long long validUntilDate;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
