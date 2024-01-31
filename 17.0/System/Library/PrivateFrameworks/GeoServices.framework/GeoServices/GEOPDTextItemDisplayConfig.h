@class PBUnknownFields;

@interface GEOPDTextItemDisplayConfig : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _maxItemsPerRow;
    unsigned int _maxRowCount;
    struct { unsigned char has_maxItemsPerRow : 1; unsigned char has_maxRowCount : 1; } _flags;
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
