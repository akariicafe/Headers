@class _HKSampleQueryUtility, NSArray, HKHealthStore, HKQuantitySeriesSampleQuery, HKWorkout;

@interface _HKHeartRateRecoveryQueryUtility : NSObject {
    HKHealthStore *_healthStore;
    HKWorkout *_workout;
    HKQuantitySeriesSampleQuery *_heartRateQuery;
    _HKSampleQueryUtility *_workoutQueryUtility;
    id /* block */ _handler;
    NSArray *_heartRateReadings;
}

+ (id)_recoveryEndDateWithStartDate:(id)a0;
+ (id)perMinuteWorkoutRecoveryHeartRateFromReadings:(id)a0 workoutEndDate:(id)a1;
+ (id)predicateForWorkoutRecoveryTimeWithWorkout:(id)a0;
+ (id)recoveryDateIntervalWithWorkout:(id)a0;
+ (id)workoutRecoveryDateIntervalForWorkout:(id)a0 overlappingWorkouts:(id)a1;
+ (id)workoutRecoveryHeartRatesForWorkout:(id)a0 recoveryDateInterval:(id)a1 readings:(id)a2;

- (void)dealloc;
- (void)execute;
- (void)stop;
- (void).cxx_destruct;
- (void)_heartRatesPostWorkout:(id)a0 workoutRecoveryTimePredicate:(id)a1 completionHandler:(id /* block */)a2;
- (void)_setupQueries;
- (id)initWithHealthStore:(id)a0 workout:(id)a1 handler:(id /* block */)a2;

@end
