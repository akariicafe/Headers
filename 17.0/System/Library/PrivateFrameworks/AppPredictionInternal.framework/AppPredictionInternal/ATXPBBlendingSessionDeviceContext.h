@interface ATXPBBlendingSessionDeviceContext : PBCodable <NSCopying> {
    struct { unsigned char secondsBeforeBlendingUpdate : 1; unsigned char currentLOIType : 1; unsigned char dayOfWeek : 1; unsigned char timeOfDay : 1; unsigned char dateInWeekend : 1; unsigned char lastUnlockMoreThan1HourAgo : 1; unsigned char lastUnlockMoreThan30MinutesAgo : 1; } _has;
}

@property (nonatomic) BOOL hasTimeOfDay;
@property (nonatomic) unsigned int timeOfDay;
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) unsigned int dayOfWeek;
@property (nonatomic) BOOL hasDateInWeekend;
@property (nonatomic) BOOL dateInWeekend;
@property (nonatomic) BOOL hasLastUnlockMoreThan30MinutesAgo;
@property (nonatomic) BOOL lastUnlockMoreThan30MinutesAgo;
@property (nonatomic) BOOL hasLastUnlockMoreThan1HourAgo;
@property (nonatomic) BOOL lastUnlockMoreThan1HourAgo;
@property (nonatomic) BOOL hasCurrentLOIType;
@property (nonatomic) int currentLOIType;
@property (nonatomic) BOOL hasSecondsBeforeBlendingUpdate;
@property (nonatomic) double secondsBeforeBlendingUpdate;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsCurrentLOIType:(id)a0;
- (id)currentLOITypeAsString:(int)a0;

@end
