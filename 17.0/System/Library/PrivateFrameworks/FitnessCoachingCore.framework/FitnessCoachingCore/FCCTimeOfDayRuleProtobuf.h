@interface FCCTimeOfDayRuleProtobuf : PBCodable <NSCopying> {
    struct { unsigned char minimumDayDuration : 1; unsigned char secondsBeforeEndOfDay : 1; } _has;
}

@property (nonatomic) BOOL hasMinimumDayDuration;
@property (nonatomic) double minimumDayDuration;
@property (nonatomic) BOOL hasSecondsBeforeEndOfDay;
@property (nonatomic) double secondsBeforeEndOfDay;

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
