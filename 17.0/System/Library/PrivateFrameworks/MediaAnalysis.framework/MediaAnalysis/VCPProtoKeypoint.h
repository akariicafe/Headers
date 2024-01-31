@interface VCPProtoKeypoint : PBCodable <NSCopying>

@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float confidence;

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
