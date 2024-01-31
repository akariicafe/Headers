@class PBDataReader, GEOTimezone, GEOPDBasemapRegionMetadata, GEOLatLng, PBUnknownFields;

@interface GEOPDPlaceInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _area;
    GEOPDBasemapRegionMetadata *_basemapRegionMetadata;
    GEOLatLng *_center;
    GEOLatLng *_enhancedCenter;
    GEOLatLng *_labelPoint;
    GEOTimezone *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _knownAccuracy;
    BOOL _isApproximateCenter;
    struct { unsigned char has_area : 1; unsigned char has_knownAccuracy : 1; unsigned char has_isApproximateCenter : 1; unsigned char read_unknownFields : 1; unsigned char read_basemapRegionMetadata : 1; unsigned char read_center : 1; unsigned char read_enhancedCenter : 1; unsigned char read_labelPoint : 1; unsigned char read_timezone : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)placeInfoForPlaceData:(id)a0;

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
