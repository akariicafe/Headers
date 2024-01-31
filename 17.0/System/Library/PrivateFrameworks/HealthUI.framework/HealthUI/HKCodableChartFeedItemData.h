@class HKCodableChartSharableModel, NSMutableArray;

@interface HKCodableChartFeedItemData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasChartModel;
@property (retain, nonatomic) HKCodableChartSharableModel *chartModel;
@property (retain, nonatomic) NSMutableArray *trends;

+ (Class)trendsType;

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
- (void)addTrends:(id)a0;
- (void)clearTrends;
- (id)trendsAtIndex:(unsigned long long)a0;
- (unsigned long long)trendsCount;

@end
