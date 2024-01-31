@class NSString;

@interface GEOPDSearchKeyValue32Pair : PBCodable <NSCopying> {
    NSString *_key;
    unsigned int _value;
    struct { unsigned char has_value : 1; } _flags;
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
