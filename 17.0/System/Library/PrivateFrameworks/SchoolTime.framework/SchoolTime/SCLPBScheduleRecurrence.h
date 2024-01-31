@class SCLPBTimeInterval;

@interface SCLPBScheduleRecurrence : PBCodable <NSCopying> {
    struct { unsigned char day : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTimeInterval;
@property (retain, nonatomic) SCLPBTimeInterval *timeInterval;
@property (nonatomic) BOOL hasDay;
@property (nonatomic) int day;

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
- (int)StringAsDay:(id)a0;
- (id)dayAsString:(int)a0;

@end
