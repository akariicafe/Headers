@class NSString, PBDataReader;

@interface GEORPFeedbackRouteStep : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_routeStepImageId;
    NSString *_userPhotoId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _directionsResponseWaypointIndex;
    int _routeLegIndex;
    unsigned int _stepId;
    struct { unsigned char has_directionsResponseWaypointIndex : 1; unsigned char has_routeLegIndex : 1; unsigned char has_stepId : 1; unsigned char read_routeStepImageId : 1; unsigned char read_userPhotoId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasDirectionsResponseWaypointIndex;
@property (nonatomic) int directionsResponseWaypointIndex;
@property (nonatomic) BOOL hasRouteLegIndex;
@property (nonatomic) int routeLegIndex;
@property (nonatomic) BOOL hasStepId;
@property (nonatomic) unsigned int stepId;
@property (readonly, nonatomic) BOOL hasRouteStepImageId;
@property (retain, nonatomic) NSString *routeStepImageId;
@property (readonly, nonatomic) BOOL hasUserPhotoId;
@property (retain, nonatomic) NSString *userPhotoId;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
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
