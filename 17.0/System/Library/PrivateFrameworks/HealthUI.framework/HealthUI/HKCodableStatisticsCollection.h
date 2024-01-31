@class HKCodableDateComponents, NSMutableArray;

@interface HKCodableStatisticsCollection : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStatisticsInterval;
@property (retain, nonatomic) HKCodableDateComponents *statisticsInterval;
@property (retain, nonatomic) NSMutableArray *statistics;

+ (Class)statisticsType;

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
- (unsigned long long)statisticsCount;
- (void)clearStatistics;
- (void)addStatistics:(id)a0;
- (id)statisticsAtIndex:(unsigned long long)a0;

@end
