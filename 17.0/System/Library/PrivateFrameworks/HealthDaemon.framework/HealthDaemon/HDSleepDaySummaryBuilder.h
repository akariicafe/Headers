@class HDProfile, NSDateInterval, NSMutableArray, HKCalendarCache;
@protocol HDStatisticsCollectionCalculatorSourceOrderProvider;

@interface HDSleepDaySummaryBuilder : NSObject {
    HDProfile *_profile;
    id<HDStatisticsCollectionCalculatorSourceOrderProvider> _sourceOrderProvider;
    struct { long long start; long long duration; } _dayIndexRange;
    NSDateInterval *_dateInterval;
    unsigned long long _weekday;
    HKCalendarCache *_calendarCache;
    unsigned long long _options;
    BOOL _containsAsleepOrInBedData;
    NSMutableArray *_sleepAnalysisSamples;
    NSMutableArray *_sleepScheduleSamples;
    NSMutableArray *_sleepDurationGoalSamples;
}

@property (readonly, nonatomic) long long morningIndex;
@property (readonly, nonatomic) long long numberOfDays;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) HKCalendarCache *calendarCache;

+ (id)dateIntervalForDayIndexRange:(struct { long long x0; long long x1; })a0 calendar:(id)a1;

- (void).cxx_destruct;
- (void)addOrderedSample:(id)a0;
- (id)applicableSleepSchedules;
- (id)createDaySummary;
- (id)initWithProfile:(id)a0 dayIndexRange:(struct { long long x0; long long x1; })a1 weekday:(unsigned long long)a2 options:(unsigned long long)a3 calendarCache:(id)a4 sourceOrderProvider:(id)a5;
- (id)initWithProfile:(id)a0 morningIndex:(long long)a1 weekday:(unsigned long long)a2 options:(unsigned long long)a3 calendarCache:(id)a4 sourceOrderProvider:(id)a5;
- (id)sleepAnalysisSamples;
- (id)sleepDurationGoalSamples;
- (id)sleepScheduleSamples;

@end
