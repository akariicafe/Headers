@interface HKHandwashingDateRangeDataSourceDelegate : NSObject <HKDateRangeDataSourceDelegate>

@property (nonatomic) double goal;

- (void)setUpdateDelegate:(id)a0;
- (id)initWithGoal:(double)a0;
- (id)dataForDateRange:(id)a0 timeScope:(long long)a1;

@end
