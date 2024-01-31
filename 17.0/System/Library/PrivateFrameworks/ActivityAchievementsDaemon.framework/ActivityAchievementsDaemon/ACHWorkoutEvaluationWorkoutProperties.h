@interface ACHWorkoutEvaluationWorkoutProperties : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double kilocalories;
@property (readonly, nonatomic) double kilometers;
@property (readonly, nonatomic) double meters;
@property (readonly, nonatomic) double elevationGained;
@property (readonly, nonatomic) double elevationGainedInMeters;
@property (readonly, nonatomic) BOOL isDuathlon;
@property (readonly, nonatomic) BOOL isSprintTriathlon;
@property (readonly, nonatomic) BOOL isFiftyKilometerTriathlon;
@property (readonly, nonatomic) BOOL isHalfDistanceTriathlon;
@property (readonly, nonatomic) BOOL isFullDistanceTriathlon;
@property (readonly, nonatomic) double best5KDuration;
@property (readonly, nonatomic) double best10KDuration;
@property (readonly, nonatomic) double bestWheelchair5KDuration;
@property (readonly, nonatomic) double bestWheelchair10KDuration;
@property (readonly, nonatomic) double bestHalfMarathonDuration;
@property (readonly, nonatomic) double bestMarathonDuration;
@property (readonly, nonatomic) double bestWheelchairHalfMarathonDuration;
@property (readonly, nonatomic) double bestWheelchairMarathonDuration;
@property (readonly, nonatomic) BOOL isFirstParty;
@property (readonly, nonatomic) BOOL isIndoor;

- (id)valueForUndefinedKey:(id)a0;
- (id)_nonMetaActivitiesForWorkout:(id)a0;
- (BOOL)_workoutIsDuathlon:(id)a0;
- (BOOL)_workoutIsTriathlon:(id)a0 swimmingDistanceInKilometers:(double)a1 cyclingDistanceInKilometers:(double)a2 runningDistanceInKilometers:(double)a3;
- (id)initWithWorkout:(id)a0;

@end
