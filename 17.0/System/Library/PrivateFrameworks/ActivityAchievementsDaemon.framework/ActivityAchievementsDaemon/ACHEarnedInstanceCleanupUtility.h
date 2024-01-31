@class ACHAwardsKeyValueClient, HKHealthStore, ACHEarnedInstanceStore, HDProfile;

@interface ACHEarnedInstanceCleanupUtility : NSObject

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) ACHAwardsKeyValueClient *keyValueClient;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (retain, nonatomic) HDProfile *profile;

- (long long)_historicalEvaluationAdjustment;
- (id)_fastestRunAchievementsToRemoveFromEarnedInstances:(id)a0;
- (id)_firstWorkoutAchievementsToRemoveFromEarnedInstances:(id)a0;
- (id)_largestValueActivityAndWorkoutAchievementsToRemoveFromEarnedInstances:(id)a0;
- (id)_lifetimeMoveGoalAchievementsToRemoveFromEarnedInstances:(id)a0;
- (long long)_client_historicalEvaluationAdjustment;
- (long long)_daemon_historicalEvaluationAdjustment;
- (void).cxx_destruct;
- (id)initWithEarnedInstanceStore:(id)a0 profile:(id)a1;
- (void)performCleanup;
- (id)initWithHealthStore:(id)a0 keyValueClient:(id)a1 earnedInstanceStore:(id)a2;

@end
