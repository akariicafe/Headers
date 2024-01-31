@interface HDWorkoutSessionEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)createSessionWithIdentifier:(id)a0 source:(id)a1 configuration:(id)a2 state:(long long)a3 profile:(id)a4 error:(id *)a5;
+ (id)lookupSessionWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)sessionsForSource:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)privateSubEntities;
+ (id)sessionIdentifierForRecoveryInProfile:(id)a0 expirationInterval:(double)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)sessionsExcludingIdentifiers:(id)a0 profile:(id)a1 error:(id *)a2;

- (BOOL)setHasFailed:(BOOL)a0 transaction:(id)a1 error:(id *)a2;
- (id)isMirroringInTransaction:(id)a0 error:(id *)a1;
- (BOOL)setStartDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)activityConfigurationsWithTransaction:(id)a0 error:(id *)a1;
- (id)associatedBuilderWithTransaction:(id)a0 error:(id *)a1;
- (id)clientApplicationIdentifier:(id)a0 error:(id *)a1;
- (id)clientBundleIdentifier:(id)a0 error:(id *)a1;
- (id)currentActivityWithTransaction:(id)a0 error:(id *)a1;
- (id)endDateInTransaction:(id)a0 error:(id *)a1;
- (BOOL)finishWithTransaction:(id)a0 error:(id *)a1;
- (id)firstActivityConfigurationWithTransaction:(id)a0 error:(id *)a1;
- (id)hasFailedInTransaction:(id)a0 error:(id *)a1;
- (BOOL)insertWorkoutEvent:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)latestActivityDateInTransaction:(id)a0 error:(id *)a1;
- (id)requestedEndDateInTransaction:(id)a0 error:(id *)a1;
- (id)requestedStartDateInTransaction:(id)a0 error:(id *)a1;
- (id)requestedTargetStateWithTransaction:(id)a0 error:(id *)a1;
- (id)sessionIdentifierWithTransaction:(id)a0 error:(id *)a1;
- (BOOL)setActivityConfigurations:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setAssociatedBuilder:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setClientApplicationIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setClientBundleIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setCurrentActivity:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setEndDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setFirstActivityConfiguration:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setIsMirroring:(BOOL)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setRequestedEndDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setRequestedStartDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setRequestedTargetState:(long long)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setSource:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setState:(long long)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setWorkoutConfiguration:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)sourceWithTransaction:(id)a0 error:(id *)a1;
- (id)startDateInTransaction:(id)a0 error:(id *)a1;
- (id)stateWithTransaction:(id)a0 error:(id *)a1;
- (BOOL)updateLatestActivityDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)updateLatestActivityDateWithTransaction:(id)a0 error:(id *)a1;
- (id)workoutConfigurationWithTransaction:(id)a0 error:(id *)a1;
- (id)workoutEventsInTransaction:(id)a0 error:(id *)a1;

@end
