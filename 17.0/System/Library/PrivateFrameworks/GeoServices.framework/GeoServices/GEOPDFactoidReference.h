@class PBUnknownFields;

@interface GEOPDFactoidReference : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _factoidItemIndex;
    int _style;
    struct { unsigned char has_factoidItemIndex : 1; unsigned char has_style : 1; } _flags;
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
