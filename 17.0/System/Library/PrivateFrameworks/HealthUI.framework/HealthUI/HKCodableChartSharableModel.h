@class HKCodableChartDataSourceQueryData, HKCodableDateInterval;

@interface HKCodableChartSharableModel : PBCodable <NSCopying> {
    struct APPLE_HKCodableChartSharableModel_1 { unsigned char latestSupportedVersion : 1; unsigned char minimumSupportedVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMonthData;
@property (retain, nonatomic) HKCodableChartDataSourceQueryData *monthData;
@property (readonly, nonatomic) BOOL hasMonthDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *monthDateInterval;
@property (readonly, nonatomic) BOOL hasSixMonthData;
@property (retain, nonatomic) HKCodableChartDataSourceQueryData *sixMonthData;
@property (readonly, nonatomic) BOOL hasSixMonthDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *sixMonthDateInterval;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) BOOL hasWeekData;
@property (retain, nonatomic) HKCodableChartDataSourceQueryData *weekData;
@property (readonly, nonatomic) BOOL hasWeekDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *weekDateInterval;
@property (readonly, nonatomic) BOOL hasDayData;
@property (retain, nonatomic) HKCodableChartDataSourceQueryData *dayData;
@property (readonly, nonatomic) BOOL hasDayDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *dayDateInterval;

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
