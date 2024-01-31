@interface HDActivityAWDActivityExerciseMinuteHour : PBCodable <NSCopying> {
    struct { unsigned char exerciseMinutes : 1; unsigned char hourSinceMidnight : 1; } _has;
}

@property (nonatomic) BOOL hasHourSinceMidnight;
@property (nonatomic) long long hourSinceMidnight;
@property (nonatomic) BOOL hasExerciseMinutes;
@property (nonatomic) long long exerciseMinutes;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
