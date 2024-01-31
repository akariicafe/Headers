@class NSMutableArray;

@interface HKCodableHorizontalTimePeriodData : PBCodable <NSCopying> {
    struct APPLE_HKCodableHorizontalTimePeriodData_1 { unsigned char value : 1; } _has;
}

@property (nonatomic) BOOL hasValue;
@property (nonatomic) long long value;
@property (retain, nonatomic) NSMutableArray *dateIntervals;

+ (Class)dateIntervalsType;

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
- (void)addDateIntervals:(id)a0;
- (void)clearDateIntervals;
- (id)dateIntervalsAtIndex:(unsigned long long)a0;
- (unsigned long long)dateIntervalsCount;

@end
