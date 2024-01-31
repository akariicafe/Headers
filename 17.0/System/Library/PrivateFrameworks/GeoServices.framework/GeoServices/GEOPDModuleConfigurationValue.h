@class GEOPDTemplatePlaceModuleConfiguration, GEOPDPlaceInfosModuleConfiguration, GEOPDHikingAssociationModuleConfiguration, PBDataReader, GEOPDBusinessInfosModuleConfiguration, GEOPDButtonModuleConfiguration, PBUnknownFields, GEOPDRelatedPlaceModuleConfiguration, GEOPDPlaceRibbonConfiguration, GEOPDUnifiedActionModuleConfiguration, GEOPDWebModuleConfiguration, GEOPDHeaderButtonsConfiguration;

@interface GEOPDModuleConfigurationValue : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDBusinessInfosModuleConfiguration *_businessInfosModuleConfiguration;
    GEOPDButtonModuleConfiguration *_buttonModuleConfiguration;
    GEOPDHeaderButtonsConfiguration *_headerButtonsConfiguration;
    GEOPDHikingAssociationModuleConfiguration *_hikingAssociationModuleConfiguration;
    GEOPDPlaceInfosModuleConfiguration *_placeInfosModuleConfiguration;
    GEOPDRelatedPlaceModuleConfiguration *_relatedPlaceModuleConfiguration;
    GEOPDPlaceRibbonConfiguration *_ribbonModuleConfiguration;
    GEOPDTemplatePlaceModuleConfiguration *_templatePlaceModuleConfiguration;
    GEOPDUnifiedActionModuleConfiguration *_unifiedActionModuleConfiguration;
    GEOPDWebModuleConfiguration *_webModuleConfiguration;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_businessInfosModuleConfiguration : 1; unsigned char read_buttonModuleConfiguration : 1; unsigned char read_headerButtonsConfiguration : 1; unsigned char read_hikingAssociationModuleConfiguration : 1; unsigned char read_placeInfosModuleConfiguration : 1; unsigned char read_relatedPlaceModuleConfiguration : 1; unsigned char read_ribbonModuleConfiguration : 1; unsigned char read_templatePlaceModuleConfiguration : 1; unsigned char read_unifiedActionModuleConfiguration : 1; unsigned char read_webModuleConfiguration : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
