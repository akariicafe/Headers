@class HKQuantity, NSArray, NSDictionary, HKWorkoutActivity;

@interface HKWorkout : HKSample {
    unsigned long long _workoutActivityType;
    double _duration;
    NSArray *_workoutEvents;
}

@property (retain, nonatomic, getter=_primaryActivity, setter=_setPrimaryActivity:) HKWorkoutActivity *primaryActivity;
@property (retain, nonatomic, getter=_subActivities, setter=_setSubActivities:) NSArray *subActivities;
@property (copy, nonatomic, getter=_zonesByType, setter=_setZonesByType:) NSDictionary *zonesByType;
@property (nonatomic, getter=_goalType, setter=_setGoalType:) unsigned long long goalType;
@property (retain, nonatomic, getter=_goal, setter=_setGoal:) HKQuantity *goal;
@property (retain, nonatomic, getter=_totalBasalEnergyBurned, setter=_setTotalBasalEnergyBurned:) HKQuantity *totalBasalEnergyBurned;
@property (nonatomic, getter=_isWatchWorkout, setter=_setIsWatchWorkout:) BOOL isWatchWorkout;
@property (readonly, nonatomic, getter=_activityMoveMode) long long activityMoveMode;
@property (readonly) unsigned long long workoutActivityType;
@property (readonly, copy) NSArray *workoutEvents;
@property (readonly, copy) NSArray *workoutActivities;
@property (readonly) double duration;
@property (readonly) HKQuantity *totalEnergyBurned;
@property (readonly) HKQuantity *totalDistance;
@property (readonly) HKQuantity *totalSwimmingStrokeCount;
@property (readonly) HKQuantity *totalFlightsClimbed;
@property (readonly, copy) NSDictionary *allStatistics;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isConcreteObjectClass;
+ (id)_stringFromWorkoutActivityType:(unsigned long long)a0;
+ (unsigned long long)_workoutActivityTypeFromString:(id)a0;
+ (id)_activityTypeMappings;
+ (id)_allWorkoutActivityTypes;
+ (id)_allWorkoutTypeNames;
+ (id)_statisticsFromTotalActiveEnergyBurned:(id)a0 totalBasalEnergyBurned:(id)a1 totalDistance:(id)a2 totalSwimmingStrokeCount:(id)a3 totalFlightsClimbed:(id)a4 workoutActivityType:(unsigned long long)a5 startDate:(id)a6 endDate:(id)a7;
+ (BOOL)_workoutWithActivityType:(unsigned long long)a0 acceptsSubActivityType:(unsigned long long)a1;
+ (id)_workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2;
+ (id)_workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 workoutEvents:(id)a3 duration:(double)a4 totalActiveEnergyBurned:(id)a5 totalBasalEnergyBurned:(id)a6 totalDistance:(id)a7 goalType:(unsigned long long)a8 goal:(id)a9 device:(id)a10 metadata:(id)a11;
+ (id)_workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 workoutEvents:(id)a3 totalEnergyBurned:(id)a4 totalDistance:(id)a5 device:(id)a6 metadata:(id)a7;
+ (id)_workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 workoutEvents:(id)a3 workoutActivities:(id)a4 duration:(double)a5 statistics:(id)a6 goalType:(unsigned long long)a7 goal:(id)a8 device:(id)a9 metadata:(id)a10;
+ (id)_workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 workoutEvents:(id)a3 workoutActivities:(id)a4 duration:(double)a5 totalActiveEnergyBurned:(id)a6 totalBasalEnergyBurned:(id)a7 totalDistance:(id)a8 totalSwimmingStrokeCount:(id)a9 totalFlightsClimbed:(id)a10 goalType:(unsigned long long)a11 goal:(id)a12 device:(id)a13 metadata:(id)a14;
+ (id)workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2;
+ (id)workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 duration:(double)a3 totalEnergyBurned:(id)a4 totalDistance:(id)a5 device:(id)a6 metadata:(id)a7;
+ (id)workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 duration:(double)a3 totalEnergyBurned:(id)a4 totalDistance:(id)a5 metadata:(id)a6;
+ (id)workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 workoutEvents:(id)a3 totalEnergyBurned:(id)a4 totalDistance:(id)a5 device:(id)a6 metadata:(id)a7;
+ (id)workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 workoutEvents:(id)a3 totalEnergyBurned:(id)a4 totalDistance:(id)a5 metadata:(id)a6;
+ (id)workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 workoutEvents:(id)a3 totalEnergyBurned:(id)a4 totalDistance:(id)a5 totalFlightsClimbed:(id)a6 device:(id)a7 metadata:(id)a8;
+ (id)workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 workoutEvents:(id)a3 totalEnergyBurned:(id)a4 totalDistance:(id)a5 totalSwimmingStrokeCount:(id)a6 device:(id)a7 metadata:(id)a8;

- (void)_setDuration:(double)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_setUUID:(id)a0;
- (void)_enumerateTimePeriodsWithBlock:(id /* block */)a0;
- (long long)hk_integerValue;
- (id)_detailedDescriptionComponents;
- (id)_detailedDescriptionString;
- (void)_enumerateActiveTimePeriods:(id /* block */)a0;
- (double)_goalInCanonicalUnit;
- (void)_setTotalDistance:(id)a0;
- (void)_setTotalEnergyBurned:(id)a0;
- (void)_setTotalFlightsClimbed:(id)a0;
- (void)_setTotalSwimmingStrokeCount:(id)a0;
- (void)_setWorkoutActivityType:(unsigned long long)a0;
- (void)_setWorkoutEvents:(id)a0;
- (double)_totalBasalEnergyBurnedInCanonicalUnit;
- (double)_totalDistanceInCanonicalUnit;
- (double)_totalDistanceIncludingAllTypesForUnit:(id)a0;
- (double)_totalEnergyBurnedInCanonicalUnit;
- (double)_totalFlightsClimbedInCanonicalUnit;
- (double)_totalSwimmingStrokeCountInCanonicalUnit;
- (id)_validateWorkoutActivities:(id)a0 withConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a1;
- (id)_validateWorkoutEvents:(id)a0 withConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a1;
- (id)statisticsForType:(id)a0;
- (id)zonesForType:(id)a0;

@end
