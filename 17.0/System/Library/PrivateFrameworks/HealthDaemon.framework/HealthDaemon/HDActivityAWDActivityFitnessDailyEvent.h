@class NSString, NSMutableArray;

@interface HDActivityAWDActivityFitnessDailyEvent : PBCodable <NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _standEventMinutesSinceMidnightRoundedTo10s;
    struct { unsigned char monthsSinceFirstWatchUsage : 1; unsigned char moveRingCompletionPercentage : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasUserToken;
@property (retain, nonatomic) NSString *userToken;
@property (readonly, nonatomic) unsigned long long standEventMinutesSinceMidnightRoundedTo10sCount;
@property (readonly, nonatomic) long long *standEventMinutesSinceMidnightRoundedTo10s;
@property (retain, nonatomic) NSMutableArray *exerciseMinuteHours;
@property (nonatomic) BOOL hasMoveRingCompletionPercentage;
@property (nonatomic) long long moveRingCompletionPercentage;
@property (nonatomic) BOOL hasMonthsSinceFirstWatchUsage;
@property (nonatomic) long long monthsSinceFirstWatchUsage;

+ (Class)exerciseMinuteHoursType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addExerciseMinuteHours:(id)a0;
- (void)addStandEventMinutesSinceMidnightRoundedTo10:(long long)a0;
- (void)clearExerciseMinuteHours;
- (void)clearStandEventMinutesSinceMidnightRoundedTo10s;
- (id)exerciseMinuteHoursAtIndex:(unsigned long long)a0;
- (unsigned long long)exerciseMinuteHoursCount;
- (void)setStandEventMinutesSinceMidnightRoundedTo10s:(long long *)a0 count:(unsigned long long)a1;
- (long long)standEventMinutesSinceMidnightRoundedTo10AtIndex:(unsigned long long)a0;

@end
