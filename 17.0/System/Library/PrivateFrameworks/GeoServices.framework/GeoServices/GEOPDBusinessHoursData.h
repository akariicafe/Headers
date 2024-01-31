@class GEOPDBusinessHours, PBUnknownFields;

@interface GEOPDBusinessHoursData : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDBusinessHours *_businessHours;
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
