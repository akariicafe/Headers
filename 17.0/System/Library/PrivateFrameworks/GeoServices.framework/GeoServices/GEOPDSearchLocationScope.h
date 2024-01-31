@class NSString, GEOLatLng, GEOMapRegion, GEOPDSearchMultiMapRegion, PBDataReader;

@interface GEOPDSearchLocationScope : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOLatLng *_center;
    double _displayRegionLimitKm;
    GEOMapRegion *_mapRegion;
    GEOPDSearchMultiMapRegion *_multiMapRegion;
    double _scopeDistanceLimitKm;
    NSString *_winDistanceGeohash4;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _locationScopeType;
    int _scopeDistanceType;
    float _winDistanceKmMean;
    float _winDistanceKmP50;
    float _winDistanceKmP80;
    float _winDistanceKmP90;
    float _winDistanceKmP95;
    float _winDistanceKmP99;
    BOOL _hasBelowStreetGeo;
    BOOL _isBlendingScope;
    BOOL _isMixedIntent;
    struct { unsigned char has_displayRegionLimitKm : 1; unsigned char has_scopeDistanceLimitKm : 1; unsigned char has_locationScopeType : 1; unsigned char has_scopeDistanceType : 1; unsigned char has_winDistanceKmMean : 1; unsigned char has_winDistanceKmP50 : 1; unsigned char has_winDistanceKmP80 : 1; unsigned char has_winDistanceKmP90 : 1; unsigned char has_winDistanceKmP95 : 1; unsigned char has_winDistanceKmP99 : 1; unsigned char has_hasBelowStreetGeo : 1; unsigned char has_isBlendingScope : 1; unsigned char has_isMixedIntent : 1; unsigned char read_center : 1; unsigned char read_mapRegion : 1; unsigned char read_multiMapRegion : 1; unsigned char read_winDistanceGeohash4 : 1; unsigned char wrote_anyField : 1; } _flags;
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
