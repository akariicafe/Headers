@class HKCodableStatisticsCollection;

@interface HKCodableChartBloodPressureDataSourceQueryData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSystolicStatisticsCollection;
@property (retain, nonatomic) HKCodableStatisticsCollection *systolicStatisticsCollection;
@property (readonly, nonatomic) BOOL hasDiastolicStatisticsCollection;
@property (retain, nonatomic) HKCodableStatisticsCollection *diastolicStatisticsCollection;

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
