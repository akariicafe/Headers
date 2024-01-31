@class NSNumber, NSDateComponents, HKQuantity;

@interface HKSHGoalProgress : NSObject

@property (readonly, copy, nonatomic) NSNumber *standardDeviationActualTimeAsleep;
@property (readonly, copy, nonatomic) NSNumber *standardDeviationScheduledTimeAsleep;
@property (readonly, copy, nonatomic) NSNumber *standardDeviationActualVsScheduledTimeAsleep;
@property (readonly, nonatomic) struct { long long start; long long duration; } morningIndexRange;
@property (readonly, nonatomic) long long sleepAnalysisAsleepCount;
@property (readonly, nonatomic) long long sleepAnalysisInBedCount;
@property (readonly, nonatomic) long long sleepAnalysisCount;
@property (readonly, copy, nonatomic) HKQuantity *averageSleepDuration;
@property (readonly, copy, nonatomic) HKQuantity *averageInBedDuration;
@property (readonly, copy, nonatomic) HKQuantity *averageREMSleepDuration;
@property (readonly, copy, nonatomic) HKQuantity *averageCoreSleepDuration;
@property (readonly, copy, nonatomic) HKQuantity *averageDeepSleepDuration;
@property (readonly, copy, nonatomic) HKQuantity *averageUnspecifiedSleepDuration;
@property (readonly, copy, nonatomic) HKQuantity *averageAwakeDuration;
@property (readonly, nonatomic) long long bedtimeAchievedCount;
@property (readonly, nonatomic) long long sleepDurationGoalAchievedCount;
@property (readonly, nonatomic) long long sleepDurationGoalStreakCount;
@property (readonly, copy, nonatomic) HKQuantity *averageBedtimeMiss;
@property (readonly, copy, nonatomic) HKQuantity *averageSleepDurationGoalMiss;
@property (readonly, copy, nonatomic) NSDateComponents *averageBedtime;
@property (readonly, copy, nonatomic) NSDateComponents *averageWakeTime;
@property (readonly, copy, nonatomic) NSDateComponents *averageInBedStartTime;
@property (readonly, copy, nonatomic) NSDateComponents *averageInBedEndTime;
@property (readonly, copy, nonatomic) NSDateComponents *averageSleepStartTime;
@property (readonly, copy, nonatomic) NSDateComponents *averageSleepEndTime;

+ (id)goalProgressWithMorningIndexRange:(struct { long long x0; long long x1; })a0 sleepAnalysisAsleepCount:(long long)a1 sleepAnalysisInBedCount:(long long)a2 sleepAnalysisCount:(long long)a3 averageSleepDuration:(id)a4 averageInBedDuration:(id)a5 averageREMSleepDuration:(id)a6 averageCoreSleepDuration:(id)a7 averageDeepSleepDuration:(id)a8 averageUnspecifiedSleepDuration:(id)a9 averageAwakeDuration:(id)a10 bedtimeAchievedCount:(long long)a11 sleepDurationGoalAchievedCount:(long long)a12 sleepDurationGoalStreakCount:(long long)a13 averageBedtimeMiss:(id)a14 averageSleepDurationGoalMiss:(id)a15 averageBedtime:(id)a16 averageWakeTime:(id)a17 averageInBedStartTime:(id)a18 averageInBedEndTime:(id)a19 averageSleepStartTime:(id)a20 averageSleepEndTime:(id)a21 standardDeviationActualTimeAsleep:(id)a22 standardDeviationScheduledTimeAsleep:(id)a23 standardDeviationActualVsScheduledTimeAsleep:(id)a24;

- (void).cxx_destruct;

@end
