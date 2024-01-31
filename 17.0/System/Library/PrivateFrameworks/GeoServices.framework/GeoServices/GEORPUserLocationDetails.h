@class GEORPTimestamp, GEOLocation, NSMutableArray, PBDataReader;

@interface GEORPUserLocationDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEORPTimestamp *_currentTime;
    GEOLocation *_currentUserLocation;
    NSMutableArray *_deviceHistoricalLocations;
    GEOLocation *_lastKnownRoadLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_currentTime : 1; unsigned char read_currentUserLocation : 1; unsigned char read_deviceHistoricalLocations : 1; unsigned char read_lastKnownRoadLocation : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCurrentTime;
@property (retain, nonatomic) GEORPTimestamp *currentTime;
@property (readonly, nonatomic) BOOL hasCurrentUserLocation;
@property (retain, nonatomic) GEOLocation *currentUserLocation;
@property (readonly, nonatomic) BOOL hasLastKnownRoadLocation;
@property (retain, nonatomic) GEOLocation *lastKnownRoadLocation;
@property (retain, nonatomic) NSMutableArray *deviceHistoricalLocations;

+ (BOOL)isValid:(id)a0;
+ (Class)deviceHistoricalLocationType;

- (id)init;
- (unsigned long long)hash;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (unsigned long long)deviceHistoricalLocationsCount;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (void)clearDeviceHistoricalLocations;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)addDeviceHistoricalLocation:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
