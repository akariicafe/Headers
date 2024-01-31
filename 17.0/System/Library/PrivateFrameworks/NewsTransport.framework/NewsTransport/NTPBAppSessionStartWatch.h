@interface NTPBAppSessionStartWatch : PBCodable <NSCopying> {
    struct { unsigned char sessionStartMethodWatch : 1; } _has;
}

@property (nonatomic) BOOL hasSessionStartMethodWatch;
@property (nonatomic) int sessionStartMethodWatch;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
