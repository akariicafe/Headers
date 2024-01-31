@class HKCodableDayIndexRange, NSMutableArray;

@interface HKCodableStateOfMindValenceDistributionSummary : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDayIndexRange;
@property (retain, nonatomic) HKCodableDayIndexRange *dayIndexRange;
@property (retain, nonatomic) NSMutableArray *valenceDistributionDatas;

+ (Class)valenceDistributionDataType;

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
- (id)valenceDistributionDataAtIndex:(unsigned long long)a0;
- (void)addValenceDistributionData:(id)a0;
- (void)clearValenceDistributionDatas;
- (unsigned long long)valenceDistributionDatasCount;

@end
