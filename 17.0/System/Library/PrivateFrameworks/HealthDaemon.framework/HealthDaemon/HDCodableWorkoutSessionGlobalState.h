@class HDCodableWorkoutActivity, NSMutableArray;

@interface HDCodableWorkoutSessionGlobalState : PBCodable <NSCopying> {
    struct { unsigned char endDate : 1; unsigned char sessionState : 1; unsigned char sessionStateChangeDate : 1; unsigned char sessionStateEvent : 1; unsigned char sessionStateEventDate : 1; unsigned char startDate : 1; } _has;
}

@property (nonatomic) BOOL hasSessionState;
@property (nonatomic) long long sessionState;
@property (nonatomic) BOOL hasSessionStateChangeDate;
@property (nonatomic) double sessionStateChangeDate;
@property (nonatomic) BOOL hasSessionStateEvent;
@property (nonatomic) long long sessionStateEvent;
@property (nonatomic) BOOL hasSessionStateEventDate;
@property (nonatomic) double sessionStateEventDate;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (readonly, nonatomic) BOOL hasCurrentActivity;
@property (retain, nonatomic) HDCodableWorkoutActivity *currentActivity;
@property (retain, nonatomic) NSMutableArray *events;

+ (Class)eventsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addEvents:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearEvents;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
