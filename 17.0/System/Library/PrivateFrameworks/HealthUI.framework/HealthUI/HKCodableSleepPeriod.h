@class HKCodableDateInterval, NSMutableArray;

@interface HKCodableSleepPeriod : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *dateInterval;
@property (retain, nonatomic) NSMutableArray *segments;

+ (Class)segmentType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addSegment:(id)a0;
- (unsigned long long)segmentsCount;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)segmentAtIndex:(unsigned long long)a0;
- (void)clearSegments;

@end
