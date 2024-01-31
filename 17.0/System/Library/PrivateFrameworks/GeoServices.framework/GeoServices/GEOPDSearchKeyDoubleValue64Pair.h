@interface GEOPDSearchKeyDoubleValue64Pair : PBCodable <NSCopying> {
    double _key;
    unsigned long long _value;
    struct { unsigned char has_key : 1; unsigned char has_value : 1; } _flags;
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
