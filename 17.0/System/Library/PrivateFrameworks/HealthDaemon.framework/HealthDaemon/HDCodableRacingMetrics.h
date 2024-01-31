@class NSData, NSMutableArray;

@interface HDCodableRacingMetrics : PBCodable <NSCopying> {
    struct { unsigned char distance : 1; unsigned char duration : 1; unsigned char startDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasWorkoutUUID;
@property (retain, nonatomic) NSData *workoutUUID;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) double distance;
@property (retain, nonatomic) NSMutableArray *routePoints;

+ (Class)routePointsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addRoutePoints:(id)a0;
- (void)clearRoutePoints;
- (id)routePointsAtIndex:(unsigned long long)a0;
- (unsigned long long)routePointsCount;

@end
