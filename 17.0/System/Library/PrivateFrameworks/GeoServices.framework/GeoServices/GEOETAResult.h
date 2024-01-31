@class PBDataReader, GEOPlaceSearchResponse, NSMutableArray, PBUnknownFields;

@interface GEOETAResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_etaRouteIncidents;
    GEOPlaceSearchResponse *_placeSearchResponse;
    NSMutableArray *_sortedETAs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _distance;
    unsigned int _historicTravelTime;
    unsigned int _liveTravelTime;
    int _status;
    struct { unsigned char has_distance : 1; unsigned char has_historicTravelTime : 1; unsigned char has_liveTravelTime : 1; unsigned char has_status : 1; unsigned char read_unknownFields : 1; unsigned char read_etaRouteIncidents : 1; unsigned char read_placeSearchResponse : 1; unsigned char read_sortedETAs : 1; unsigned char wrote_anyField : 1; } _flags;
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
