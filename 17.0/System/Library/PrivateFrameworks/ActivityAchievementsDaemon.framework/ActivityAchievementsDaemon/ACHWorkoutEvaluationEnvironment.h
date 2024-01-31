@class ACHWorkoutEvaluationWorkoutProperties;

@interface ACHWorkoutEvaluationEnvironment : NSObject

@property (readonly, nonatomic) ACHWorkoutEvaluationWorkoutProperties *workout;
@property (readonly, nonatomic) unsigned long long numberOfFirstPartyWorkoutsOver5MinutesWithType;
@property (readonly, nonatomic) unsigned long long numberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek;
@property (readonly, nonatomic) unsigned long long numberOfFirstPartyWorkoutsOver15MinutesWithType;
@property (readonly, nonatomic) unsigned long long numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
@property (readonly, nonatomic) double bestKilocaloriesForType;
@property (readonly, nonatomic) double bestKilometersForType;
@property (readonly, nonatomic) double bestElevationGainedForType;
@property (readonly, nonatomic) double best5KDuration;
@property (readonly, nonatomic) double best10KDuration;
@property (readonly, nonatomic) double bestWheelchair5KDuration;
@property (readonly, nonatomic) double bestWheelchair10KDuration;
@property (readonly, nonatomic) double bestHalfMarathonDuration;
@property (readonly, nonatomic) double bestMarathonDuration;
@property (readonly, nonatomic) double bestWheelchairHalfMarathonDuration;
@property (readonly, nonatomic) double bestWheelchairMarathonDuration;
@property (readonly, nonatomic) unsigned long long experienceType;
@property (readonly, nonatomic) BOOL isMetricLocale;

- (id)valueForUndefinedKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithWorkout:(id)a0 numberOfFirstPartyWorkoutsOver5MinutesWithType:(unsigned long long)a1 numberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek:(unsigned long long)a2 bestKilocaloriesForType:(double)a3 bestKilometersForType:(double)a4 bestElevationGainedForType:(double)a5 best5KDuration:(double)a6 best10KDuration:(double)a7 bestWheelchair5KDuration:(double)a8 bestWheelchair10KDuration:(double)a9 bestHalfMarathonDuration:(double)a10 bestMarathonDuration:(double)a11 bestWheelchairHalfMarathonDuration:(double)a12 bestWheelchairMarathonDuration:(double)a13 experienceType:(unsigned long long)a14 isMetricLocale:(BOOL)a15;

@end
