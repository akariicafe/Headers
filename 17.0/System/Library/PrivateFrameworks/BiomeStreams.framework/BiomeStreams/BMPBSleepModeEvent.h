@interface BMPBSleepModeEvent : PBCodable <NSCopying> {
    struct { unsigned char expectedEndDate : 1; unsigned char sleepModeChangeReason : 1; unsigned char sleepModeState : 1; } _has;
}

@property (nonatomic) BOOL hasSleepModeState;
@property (nonatomic) int sleepModeState;
@property (nonatomic) BOOL hasSleepModeChangeReason;
@property (nonatomic) int sleepModeChangeReason;
@property (nonatomic) BOOL hasExpectedEndDate;
@property (nonatomic) double expectedEndDate;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSleepModeChangeReason:(id)a0;
- (id)description;
- (id)sleepModeChangeReasonAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)sleepModeStateAsString:(int)a0;
- (int)StringAsSleepModeState:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
