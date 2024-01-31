@class GEOStyleAttributes, PBUnknownFields;

@interface GEOPDMiniBrowseCategory : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOStyleAttributes *_styleAttributes;
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
