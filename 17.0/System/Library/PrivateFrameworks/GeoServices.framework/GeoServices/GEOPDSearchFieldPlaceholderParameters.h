@class PBUnknownFields;

@interface GEOPDSearchFieldPlaceholderParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _version;
    BOOL _isEditServerRecommendedStop;
    struct { unsigned char has_version : 1; unsigned char has_isEditServerRecommendedStop : 1; } _flags;
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
