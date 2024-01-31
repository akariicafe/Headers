@class NSString, GEOPDRelatedSearchSuggestion, GEOPDMapsIdentifier, PBDataReader, PBUnknownFields, GEOPDResultRefinementMetadata, GEOLatLng, GEOMapRegion;

@interface GEOPDResultRefinementGuidesHome : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_center;
    NSString *_displayName;
    GEOPDRelatedSearchSuggestion *_hint;
    GEOMapRegion *_mapRegion;
    GEOPDResultRefinementMetadata *_metadata;
    GEOPDMapsIdentifier *_placeId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_type : 1; unsigned char read_unknownFields : 1; unsigned char read_center : 1; unsigned char read_displayName : 1; unsigned char read_hint : 1; unsigned char read_mapRegion : 1; unsigned char read_metadata : 1; unsigned char read_placeId : 1; unsigned char wrote_anyField : 1; } _flags;
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
