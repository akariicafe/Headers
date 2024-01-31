@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOSharedNavRouteInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { double *list; unsigned long long count; unsigned long long size; } _coordinates;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _trafficColorOffsets;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _trafficColors;
    NSMutableArray *_chargingStations;
    NSMutableArray *_routingPathLegs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_coordinates : 1; unsigned char read_trafficColorOffsets : 1; unsigned char read_trafficColors : 1; unsigned char read_chargingStations : 1; unsigned char read_routingPathLegs : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long coordinatesCount;
@property (readonly, nonatomic) double *coordinates;
@property (readonly, nonatomic) unsigned long long trafficColorsCount;
@property (readonly, nonatomic) unsigned int *trafficColors;
@property (readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
@property (readonly, nonatomic) unsigned int *trafficColorOffsets;
@property (retain, nonatomic) NSMutableArray *chargingStations;
@property (retain, nonatomic) NSMutableArray *routingPathLegs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)chargingStationsType;
+ (Class)routingPathLegType;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)addCoordinates:(double)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (void)clearCoordinates;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (double)coordinatesAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)setCoordinates:(double *)a0 count:(unsigned long long)a1;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (void)addChargingStations:(id)a0;
- (void)addRoutingPathLeg:(id)a0;
- (void)addTrafficColor:(unsigned int)a0;
- (void)addTrafficColorOffset:(unsigned int)a0;
- (id)chargingStationsAtIndex:(unsigned long long)a0;
- (unsigned long long)chargingStationsCount;
- (void)clearChargingStations;
- (void)clearRoutingPathLegs;
- (void)clearTrafficColorOffsets;
- (void)clearTrafficColors;
- (id)routingPathLegAtIndex:(unsigned long long)a0;
- (unsigned long long)routingPathLegsCount;
- (void)setTrafficColorOffsets:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setTrafficColors:(unsigned int *)a0 count:(unsigned long long)a1;
- (unsigned int)trafficColorAtIndex:(unsigned long long)a0;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)a0;

@end
