@class NSMutableArray, NSCalendar;

@interface HDMHValenceDistributionSummaryBuilder : NSObject

@property (retain, nonatomic) NSMutableArray *dailyValenceValues;
@property (retain, nonatomic) NSMutableArray *momentaryValenceDistributions;
@property (nonatomic) double valenceMergeInterval;
@property (readonly, nonatomic) struct { long long start; long long duration; } dayIndexRange;
@property (readonly, nonatomic) NSCalendar *gregorianCalendar;

- (void).cxx_destruct;
- (id)_calculateAverageDailyValenceDistribution;
- (void)_mergeAdjacentValenceDistributions:(id)a0;
- (void)_mergeStatesOfMind:(id)a0 intoValenceDistributions:(id)a1;
- (double)_valenceMergeInterval;
- (BOOL)_value:(double)a0 isBetweenMinValue:(double)a1 maxValue:(double)a2;
- (void)addDaySummary:(id)a0;
- (id)initWithDayIndexRange:(struct { long long x0; long long x1; })a0 gregorianCalendar:(id)a1;
- (id)valenceDistributionSummary;

@end
