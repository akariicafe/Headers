@class HKMCSampleInfo, HKMCStatistics, NSArray, HKMCRecentBasalBodyTemperature, NSNumber, NSString;

@interface HKMCAnalysis : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long numberOfDailySleepHeartRateStatisticsForPast100Days;
@property (readonly, nonatomic) long long numberOfDailyAwakeHeartRateStatisticsForPast100Days;
@property (copy, nonatomic) HKMCSampleInfo *latestSampleInfo;
@property (readonly, nonatomic) HKMCStatistics *statistics;
@property (readonly, nonatomic) NSArray *menstruationProjections;
@property (readonly, nonatomic) NSArray *fertileWindowProjections;
@property (readonly, nonatomic) BOOL menstruationProjectionsEnabled;
@property (readonly, nonatomic) BOOL fertileWindowProjectionsEnabled;
@property (readonly, nonatomic) NSArray *cycles;
@property (readonly, nonatomic) NSArray *deviations;
@property (readonly, nonatomic) unsigned long long recentSymptoms;
@property (readonly, nonatomic) HKMCRecentBasalBodyTemperature *recentBasalBodyTemperature;
@property (readonly, copy, nonatomic) NSNumber *lastLoggedDayIndex;
@property (readonly, copy, nonatomic) NSNumber *lastMenstrualFlowDayIndex;
@property (readonly, nonatomic) BOOL isPeriodLogLate;
@property (readonly, nonatomic) NSArray *ongoingCycleFactors;
@property (readonly, nonatomic) BOOL hasHealthAppDevicesWithHigherAlgorithmVersions;
@property (readonly, copy) NSString *hk_redactedDescription;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStatistics:(id)a0 menstruationProjections:(id)a1 fertileWindowProjections:(id)a2 menstruationProjectionsEnabled:(BOOL)a3 fertileWindowProjectionsEnabled:(BOOL)a4 cycles:(id)a5 deviations:(id)a6 recentSymptoms:(unsigned long long)a7 recentBasalBodyTemperature:(id)a8 lastLoggedDayIndex:(id)a9 lastMenstrualFlowDayIndex:(id)a10 isPeriodLogLate:(BOOL)a11 ongoingCycleFactors:(id)a12 numberOfDailySleepHeartRateStatisticsForPast100Days:(long long)a13 numberOfDailyAwakeHeartRateStatisticsForPast100Days:(long long)a14 hasHealthAppDevicesWithHigherAlgorithmVersions:(BOOL)a15;

@end
