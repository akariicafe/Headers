@class SCLPBScheduleTime;

@interface SCLPBTimeInterval : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStartTime;
@property (retain, nonatomic) SCLPBScheduleTime *startTime;
@property (readonly, nonatomic) BOOL hasEndTime;
@property (retain, nonatomic) SCLPBScheduleTime *endTime;

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

@end
