@class PBDataReader, NSString, NSMutableArray, GEOComposedWaypoint;

@interface GEONavigationRouteSummary : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_destinationName;
    GEOComposedWaypoint *_destination;
    NSString *_nextDestinationName;
    GEOComposedWaypoint *_origin;
    double _travelTime;
    NSMutableArray *_waypoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _transportType;
    struct { unsigned char has_travelTime : 1; unsigned char has_transportType : 1; unsigned char read_destinationName : 1; unsigned char read_destination : 1; unsigned char read_nextDestinationName : 1; unsigned char read_origin : 1; unsigned char read_waypoints : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) BOOL hasDestinationName;
@property (retain, nonatomic) NSString *destinationName;
@property (nonatomic) BOOL hasTravelTime;
@property (nonatomic) double travelTime;
@property (retain, nonatomic) NSMutableArray *waypoints;
@property (readonly, nonatomic) BOOL hasNextDestinationName;
@property (retain, nonatomic) NSString *nextDestinationName;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (retain, nonatomic) GEOComposedWaypoint *origin;
@property (readonly, nonatomic) BOOL hasDestination;
@property (retain, nonatomic) GEOComposedWaypoint *destination;

+ (BOOL)isValid:(id)a0;
+ (Class)waypointsType;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (int)StringAsTransportType:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)transportTypeAsString:(int)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (void)addWaypoints:(id)a0;
- (void)clearWaypoints;
- (void)updateRoute:(id)a0 destinationName:(id)a1;
- (id)waypointsAtIndex:(unsigned long long)a0;
- (unsigned long long)waypointsCount;

@end
