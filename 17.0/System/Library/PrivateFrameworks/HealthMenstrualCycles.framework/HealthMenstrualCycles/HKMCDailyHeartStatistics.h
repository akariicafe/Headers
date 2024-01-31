@class NSString, HKMCHeartStatistics;

@interface HKMCDailyHeartStatistics : NSObject <NSSecureCoding, NSCopying, HKSampleAggregateCacheProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long dayIndex;
@property (readonly, copy, nonatomic) HKMCHeartStatistics *tenthPercentileAsleepHeartRateStatistics;
@property (readonly, copy, nonatomic) HKMCHeartStatistics *tenthPercentileAwakeHeartRateStatistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dailyHeartStatisticsWithDayIndex:(long long)a0 asleepStatistics:(id)a1 awakeStatistics:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (long long)bucketIndexForIntervalComponents:(id)a0 anchorDate:(id)a1;
- (BOOL)getData:(id *)a0 error:(id *)a1;
- (id)initWithDayIndex:(long long)a0 tenthPercentileAsleepHeartRateStatistics:(id)a1 tenthPercentileAwakeHeartRateStatistics:(id)a2;

@end
