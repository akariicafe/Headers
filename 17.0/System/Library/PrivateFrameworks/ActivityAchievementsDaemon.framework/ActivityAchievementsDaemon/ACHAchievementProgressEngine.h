@class NSMapTable, NSHashTable, NSObject, NSNumber;
@protocol OS_dispatch_queue, ACHAchievementStoring;

@interface ACHAchievementProgressEngine : NSObject

@property (retain, nonatomic) NSMapTable *providerDelayedOperations;
@property (retain, nonatomic) NSHashTable *providers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *providerQueue;
@property (retain, nonatomic) NSNumber *overrideDelay;
@property (weak, nonatomic) id<ACHAchievementStoring> achievementStore;

- (void)registerProgressProvider:(id)a0;
- (id)init;
- (void)processAchievementProgressUpdates:(id)a0;
- (BOOL)shouldPopulateProgressForAchievement:(id)a0;
- (void)requestProgressUpdateForProgressProvider:(id)a0;
- (id)_queue_providerForTemplate:(id)a0;
- (id)providerWithIdentifier:(id)a0;
- (void)populateProgressAndGoalForAchievements:(id)a0;
- (unsigned long long)providerCount;
- (void)deregisterProgressProvider:(id)a0;
- (void).cxx_destruct;

@end
