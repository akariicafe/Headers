@class HKQuantitySample, HKUnit, NSDate;

@interface WFLogWorkoutActionWorkout : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) HKQuantitySample *caloriesSample;
@property (retain, nonatomic) HKQuantitySample *distanceSample;
@property (retain, nonatomic) HKUnit *calorieUnit;
@property (retain, nonatomic) HKUnit *distanceUnit;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 caloriesSample:(id)a2 calorieUnit:(id)a3 distanceSample:(id)a4 distanceUnit:(id)a5;

@end
