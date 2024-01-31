@class NSArray;

@interface _HKSleepDurationAverageFormatter : HKInteractiveChartDataFormatter

@property (retain, nonatomic) NSArray *rangeDataForTimeInBedAverage;
@property (retain, nonatomic) NSArray *rangeDataForTimeAsleepAverage;

- (id)init;
- (void).cxx_destruct;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (void)_setRangeData:(id)a0 isTimeInBed:(BOOL)a1;
- (void)setCurrentVisibleAverageNumber:(id)a0 isTimeInBed:(BOOL)a1 isHighlighted:(BOOL)a2 useAverageCopy:(BOOL)a3;

@end
