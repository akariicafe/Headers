@class NPSDomainAccessor, NSMutableDictionary, NPSManager;

@interface FIIntervalWorkoutDefinitionsManager : NSObject {
    NPSDomainAccessor *_domainAccessor;
    NPSManager *_syncManager;
    NSMutableDictionary *_rootIntervalWorkoutDefinitions;
}

- (id)init;
- (void).cxx_destruct;
- (void)_checkVersion;
- (id)_defaultUserIntervalWorkouts;
- (id)_deserializeIntervalWorkoutDefinitions:(id)a0;
- (id)_mockHIIT3010;
- (id)_mockQuarterMileSprints;
- (id)_mockVariedSpeed;
- (void)_saveDefaultIntervalWorkouts;
- (void)_saveRootIntervalWorkoutDefinitions:(id)a0;
- (void)_serializeAndSaveRootIntervalWorkoutDefinitions:(id)a0;
- (id)_serializeRootIntervalWorkoutDefinitions:(id)a0;
- (void)_trimRootIntervalWorkoutDefinitions:(id)a0;
- (void)_updateIntervalWorkoutDefinition:(id)a0 activityTypeIdentifier:(id)a1;
- (id)intervalWorkoutDefinitionsForActivityTypeIdentifier:(id)a0;
- (void)loadIntervalWorkoutDefinitions;
- (void)removeIntervalWorkoutDefinitionAtIndex:(long long)a0 activityTypeIdentifier:(id)a1;
- (void)saveIntervalWorkoutDefinition:(id)a0 activityTypeIdentifier:(id)a1;

@end
