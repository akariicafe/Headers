@interface GEOTFCompactPredictedSpeed : PBCodable <NSCopying> {
    unsigned int _deltaMinutesInFuture;
    unsigned int _speedKph;
    struct { unsigned char has_deltaMinutesInFuture : 1; unsigned char has_speedKph : 1; } _flags;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
