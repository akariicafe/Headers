@class PBUnknownFields;

@interface GEOPDSearchClientBehavior : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _shouldEnableRedoSearch;
    struct { unsigned char has_shouldEnableRedoSearch : 1; } _flags;
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
