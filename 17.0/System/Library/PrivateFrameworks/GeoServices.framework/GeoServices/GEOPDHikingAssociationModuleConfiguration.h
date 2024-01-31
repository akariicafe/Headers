@class GEOPDTemplatePlaceModuleConfiguration, PBUnknownFields;

@interface GEOPDHikingAssociationModuleConfiguration : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDTemplatePlaceModuleConfiguration *_templatePlaceConfiguration;
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
