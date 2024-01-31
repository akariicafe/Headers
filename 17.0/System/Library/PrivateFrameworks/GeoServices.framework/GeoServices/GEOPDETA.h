@class PBDataReader, GEORouteTrafficDetail, NSMutableArray, PBUnknownFields;

@interface GEOPDETA : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_etaRouteIncidents;
    GEORouteTrafficDetail *_routeTrafficDetail;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _distance;
    unsigned int _historicTravelTime;
    int _licensePlateRestrictionImpact;
    unsigned int _time;
    int _transportType;
    struct { unsigned char has_distance : 1; unsigned char has_historicTravelTime : 1; unsigned char has_licensePlateRestrictionImpact : 1; unsigned char has_time : 1; unsigned char has_transportType : 1; unsigned char read_unknownFields : 1; unsigned char read_etaRouteIncidents : 1; unsigned char read_routeTrafficDetail : 1; unsigned char wrote_anyField : 1; } _flags;
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
