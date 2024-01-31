@interface TRILogTime : PBCodable <NSCopying> {
    struct { unsigned char secondsSince1970 : 1; unsigned char minutesDstOffset : 1; unsigned char secondsFromUtc : 1; } _has;
}

@property (nonatomic) BOOL hasSecondsSince1970;
@property (nonatomic) unsigned long long secondsSince1970;
@property (nonatomic) BOOL hasSecondsFromUtc;
@property (nonatomic) int secondsFromUtc;
@property (nonatomic) BOOL hasMinutesDstOffset;
@property (nonatomic) int minutesDstOffset;

+ (id)logTimeFromDate:(id)a0;

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
