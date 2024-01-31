@interface ATXHeuristicActionProducer : NSObject {
    id _expireNotificationHandle;
}

+ (id)sharedInstance;
+ (unsigned long long)actionExperienceForScoredHeuristicAction:(id)a0;
+ (double)generateScoreForHeuristic:(id)a0;

- (id)init;
- (void)dealloc;
- (void)scheduleNextHeuristicRefreshGivenActions:(id)a0;
- (id)firstUpdateDateForActions:(id)a0;
- (void)invalidate;
- (void)setUpdateJobForCriteria:(id)a0;
- (BOOL)isActionBlacklisted:(id)a0;
- (void)coalescedProduceActions;
- (id)produceActions;
- (id)bundleIdForAction:(id)a0;
- (void).cxx_destruct;
- (id)digitalHealthBlacklist;
- (id)_criteriaForJobOnDate:(id)a0;
- (id)actionPredictionBlacklist;
- (void)invalidateOnGlobalQueueWithDelay:(double)a0;
- (BOOL)userAlreadyEngagedWithAction:(id)a0;

@end
