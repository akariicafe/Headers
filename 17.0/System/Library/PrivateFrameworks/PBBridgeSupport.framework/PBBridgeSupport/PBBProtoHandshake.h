@interface PBBProtoHandshake : PBCodable <NSCopying>

@property (nonatomic) unsigned int position;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int state;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
