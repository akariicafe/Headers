@class NSData, GEOEVStepFeedbackInfo, PBDataReader;

@interface GEOStepFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    double _completionTimeStamp;
    NSData *_etaTrafficUpdateResponseId;
    GEOEVStepFeedbackInfo *_evStepInfo;
    NSData *_routeID;
    double _stepEndPathPointOffset;
    NSData *_stepZilch;
    NSData *_tripID;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _expectedTime;
    int _maneuverType;
    unsigned int _routeIndex;
    unsigned int _stepID;
    int _stepEndPathPointIndex;
    unsigned int _waypointRouteID;
    BOOL _completedStep;
    BOOL _lightGuidance;
    BOOL _routePaused;
    BOOL _routeResumed;
    struct { unsigned char has_completionTimeStamp : 1; unsigned char has_stepEndPathPointOffset : 1; unsigned char has_expectedTime : 1; unsigned char has_maneuverType : 1; unsigned char has_routeIndex : 1; unsigned char has_stepID : 1; unsigned char has_stepEndPathPointIndex : 1; unsigned char has_waypointRouteID : 1; unsigned char has_completedStep : 1; unsigned char has_lightGuidance : 1; unsigned char has_routePaused : 1; unsigned char has_routeResumed : 1; unsigned char read_etaTrafficUpdateResponseId : 1; unsigned char read_evStepInfo : 1; unsigned char read_routeID : 1; unsigned char read_stepZilch : 1; unsigned char read_tripID : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) BOOL hasCompletionTimeStamp;
@property (nonatomic) double completionTimeStamp;
@property (nonatomic) BOOL hasCompletedStep;
@property (nonatomic) BOOL completedStep;
@property (readonly, nonatomic) BOOL hasRouteID;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) BOOL hasRouteIndex;
@property (nonatomic) unsigned int routeIndex;
@property (nonatomic) BOOL hasLightGuidance;
@property (nonatomic) BOOL lightGuidance;
@property (readonly, nonatomic) BOOL hasTripID;
@property (retain, nonatomic) NSData *tripID;
@property (nonatomic) BOOL hasRoutePaused;
@property (nonatomic) BOOL routePaused;
@property (nonatomic) BOOL hasRouteResumed;
@property (nonatomic) BOOL routeResumed;
@property (readonly, nonatomic) BOOL hasEvStepInfo;
@property (retain, nonatomic) GEOEVStepFeedbackInfo *evStepInfo;
@property (nonatomic) BOOL hasWaypointRouteID;
@property (nonatomic) unsigned int waypointRouteID;
@property (nonatomic) BOOL hasManeuverType;
@property (nonatomic) int maneuverType;
@property (nonatomic) BOOL hasExpectedTime;
@property (nonatomic) unsigned int expectedTime;
@property (readonly, nonatomic) BOOL hasStepZilch;
@property (retain, nonatomic) NSData *stepZilch;
@property (nonatomic) BOOL hasStepEndPathPointIndex;
@property (nonatomic) int stepEndPathPointIndex;
@property (nonatomic) BOOL hasStepEndPathPointOffset;
@property (nonatomic) double stepEndPathPointOffset;
@property (readonly, nonatomic) BOOL hasEtaTrafficUpdateResponseId;
@property (retain, nonatomic) NSData *etaTrafficUpdateResponseId;

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
- (int)StringAsManeuverType:(id)a0;
- (id)maneuverTypeAsString:(int)a0;

@end
