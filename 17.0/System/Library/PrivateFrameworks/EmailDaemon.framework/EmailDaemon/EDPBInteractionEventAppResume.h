@interface EDPBInteractionEventAppResume : PBCodable <EDPBDataSetters, NSCopying>

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)withHasher:(id)a0 setMessage:(id)a1 data:(id)a2;

@end
