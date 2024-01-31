@class PBUnknownFields;

@interface GEOSharedNavETAInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _etaTimestamp;
    double _latitude;
    double _longitude;
    double _remainingDistance;
    double _remainingTime;
    unsigned int _waypointIndex;
    struct { unsigned char has_etaTimestamp : 1; unsigned char has_latitude : 1; unsigned char has_longitude : 1; unsigned char has_remainingDistance : 1; unsigned char has_remainingTime : 1; unsigned char has_waypointIndex : 1; } _flags;
}

@property (nonatomic) BOOL hasRemainingDistance;
@property (nonatomic) double remainingDistance;
@property (nonatomic) BOOL hasRemainingTime;
@property (nonatomic) double remainingTime;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) BOOL hasEtaTimestamp;
@property (nonatomic) double etaTimestamp;
@property (nonatomic) BOOL hasWaypointIndex;
@property (nonatomic) unsigned int waypointIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
