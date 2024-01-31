@class HKQuery, REUpNextTimer, NSDate;

@interface REActiveWorkoutPredictor : REPredictor <REActiveWorkoutPredictorProperties> {
    int _workoutStateNotifyToken;
    float _dailyAverageWorkouts;
    unsigned long long _numberOfWorkoutsPerformedToday;
    HKQuery *_workoutObservationQuery;
    REUpNextTimer *_workoutQueryCoalesceTimer;
}

@property BOOL hasActiveWorkout;
@property (retain) NSDate *lastCompletedWorkoutDate;
@property (readonly, nonatomic, getter=isActiveWorkout) BOOL activeWorkout;
@property (readonly, nonatomic) NSDate *lastWorkoutDate;
@property (readonly, nonatomic) BOOL currentlyHasActiveWorkout;
@property (readonly, nonatomic) float dailyAverageWorkouts;
@property (readonly, nonatomic) unsigned long long numberOfWorkoutsPerformedToday;

+ (double)updateInterval;
+ (id)supportedFeatures;

- (void)pause;
- (void)dealloc;
- (id)_init;
- (void)update;
- (void)resume;
- (void).cxx_destruct;
- (void)_cancelMonitoringWorkoutIfNeeded;
- (void)_processWorkoutHistoryData:(id)a0 completion:(id /* block */)a1;
- (void)_queue_fetchWorkoutHistory;
- (void)_scheduleFetchWorkoutTimer;
- (void)_updateWorkoutState;
- (id)featureValueForFeature:(id)a0 element:(id)a1 engine:(id)a2 trainingContext:(id)a3;

@end
