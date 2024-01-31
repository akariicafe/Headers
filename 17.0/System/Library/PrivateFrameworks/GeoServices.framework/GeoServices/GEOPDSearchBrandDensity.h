@class NSString;

@interface GEOPDSearchBrandDensity : PBCodable <NSCopying> {
    unsigned long long _count;
    NSString *_geohash;
    float _popularitySum;
    struct { unsigned char has_count : 1; unsigned char has_popularitySum : 1; } _flags;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
