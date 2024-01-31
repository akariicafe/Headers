@class ACHAwardsWorkoutClient, HKHealthStore, NSCalendar, NSDate;

@interface ACHMindfulMinutesAwardingEnvironment : NSObject

@property (weak, nonatomic) HKHealthStore *healthStore;
@property (weak, nonatomic) ACHAwardsWorkoutClient *workoutClient;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) double todayMindfulMinutesValue;
@property (readonly, nonatomic) double numberOfMindfulMinutesInCurrentMonth;

- (void).cxx_destruct;
- (void)logValues;
- (id)_dayDateIntervalForCurrentDate;
- (id)_monthDateIntervalForCurrentDate;
- (id)initWithHealthStore:(id)a0 workoutClient:(id)a1 calendar:(id)a2 currentDate:(id)a3;

@end
