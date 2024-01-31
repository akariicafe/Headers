@class ACHActivitySummaryUtility, ACHWorkoutUtility, HDProfile, ACHAwardsWorkoutClient, HDDatabaseTransactionContext, ACHActivitySummaryIterator;

@interface ACHMonthlyChallengeDataSource : NSObject

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ACHWorkoutUtility *workoutUtility;
@property (weak, nonatomic) ACHActivitySummaryUtility *activitySummaryUtility;
@property (retain, nonatomic) ACHAwardsWorkoutClient *workoutClient;
@property (retain, nonatomic) ACHActivitySummaryIterator *activitySummaryIterator;
@property (readonly, nonatomic) BOOL requiresError;
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext;

- (long long)numberOfAllRingsClosedDuringDateComponentInterval:(id)a0 error:(id *)a1;
- (void)_getCurrentAndLongestStreakForStreakType:(unsigned long long)a0 duringDateComponentInterval:(id)a1 completion:(id /* block */)a2;
- (long long)numberOfDaysDoublingExerciseGoalDuringDateComponentInterval:(id)a0 error:(id *)a1;
- (double)walkingRunningDistanceDuringDateComponentInterval:(id)a0 error:(id *)a1;
- (double)caloriesDuringDateComponentInterval:(id)a0;
- (void)_getNoErrorLongestAndCurrentStreakForStreakType:(unsigned long long)a0 duringDateComponentInterval:(id)a1 completion:(id /* block */)a2;
- (long long)numberOfWorkoutsCompletedDuringDateInterval:(id)a0 error:(id *)a1;
- (double)valueForMonthlyChallengeType:(unsigned long long)a0 forDateComponentInterval:(id)a1 calendar:(id)a2 error:(id *)a3;
- (double)numberOfDaysWithAppleMoveTimeOver:(double)a0 forDateComponentInterval:(id)a1 calendar:(id)a2 error:(id *)a3;
- (long long)numberOfCompletedWorkoutsOfType:(unsigned long long)a0 andLocation:(unsigned long long)a1 duringDateInterval:(id)a2 error:(id *)a3;
- (long long)numberOfCompletedWorkoutsOfType:(unsigned long long)a0 andLocation:(unsigned long long)a1 duringDateInterval:(id)a2;
- (long long)numberOfWorkoutsCompletedDuringDateInterval:(id)a0;
- (long long)numberOfExerciseRingsClosedDuringDateComponentInterval:(id)a0 error:(id *)a1;
- (double)_numberOfDaysWithQuantity:(id /* block */)a0 overThreshold:(double)a1 forDateComponentInterval:(id)a2;
- (long long)numberOfDaysDoublingMoveGoalDuringDateComponentInterval:(id)a0;
- (id)initWithActivitySummaryIterator:(id)a0 workoutClient:(id)a1;
- (double)valueForMonthlyChallengeType:(unsigned long long)a0 forDateComponentInterval:(id)a1 inCalendar:(id)a2;
- (double)caloriesDuringDateComponentInterval:(id)a0 error:(id *)a1;
- (long long)numberOfDaysDoublingExerciseGoalDuringDateComponentInterval:(id)a0;
- (double)numberOfDaysWithExerciseMinutesOver:(double)a0 forDateComponentInterval:(id)a1 calendar:(id)a2 error:(id *)a3;
- (id)_inclusiveDateIntervalFor:(id)a0 andDateComponentInterval:(id)a1;
- (void).cxx_destruct;
- (double)numberOfDaysWithCaloriesBurnedOver:(double)a0 forDateComponentInterval:(id)a1 calendar:(id)a2 error:(id *)a3;
- (double)walkingRunningDistanceDuringDateComponentInterval:(id)a0;
- (double)_numberOfDaysWithQuantity:(id /* block */)a0 overThreshold:(double)a1 forDateComponentInterval:(id)a2 error:(id *)a3;
- (double)exerciseMinutesDuringDateComponentInterval:(id)a0;
- (double)exerciseMinutesDuringDateComponentInterval:(id)a0 error:(id *)a1;
- (double)_dailyAverageValueForMonthlyChallengeWithDailyTargetValue:(double)a0 andDateComponentInterval:(id)a1;
- (long long)numberOfMoveRingsClosedDuringDateComponentInterval:(id)a0;
- (long long)numberOfMoveRingsClosedDuringDateComponentInterval:(id)a0 error:(id *)a1;
- (double)moveTimeDuringDateComponentInterval:(id)a0;
- (long long)numberOfAllRingsClosedDuringDateComponentInterval:(id)a0;
- (double)moveTimeDuringDateComponentInterval:(id)a0 error:(id *)a1;
- (long long)numberOfStandRingsClosedDuringDateComponentInterval:(id)a0 error:(id *)a1;
- (double)numberOfDaysWithDistanceOver:(double)a0 forDateComponentInterval:(id)a1 calendar:(id)a2 error:(id *)a3;
- (long long)numberOfDaysDoublingMoveGoalDuringDateComponentInterval:(id)a0 error:(id *)a1;
- (long long)currentStreakOfType:(unsigned long long)a0 duringDateComponentInterval:(id)a1;
- (long long)longestStreakOfType:(unsigned long long)a0 duringDateComponentInterval:(id)a1 error:(id *)a2;
- (long long)longestStreakOfType:(unsigned long long)a0 duringDateComponentInterval:(id)a1;
- (long long)numberOfStandRingsClosedDuringDateComponentInterval:(id)a0;
- (long long)currentStreakOfType:(unsigned long long)a0 duringDateComponentInterval:(id)a1 error:(id *)a2;
- (long long)numberOfExerciseRingsClosedDuringDateComponentInterval:(id)a0;
- (id)initWithProfile:(id)a0 activitySummaryUtility:(id)a1 workoutUtility:(id)a2;

@end
