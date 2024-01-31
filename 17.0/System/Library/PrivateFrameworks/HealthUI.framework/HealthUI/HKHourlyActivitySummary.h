@class NSDateComponents;

@interface HKHourlyActivitySummary : HKActivitySummary

@property (retain, nonatomic) NSDateComponents *hourlyDateComponents;

- (id)dateComponentsForCalendar:(id)a0;
- (BOOL)_useHourlyGoalComparison;
- (void).cxx_destruct;

@end
