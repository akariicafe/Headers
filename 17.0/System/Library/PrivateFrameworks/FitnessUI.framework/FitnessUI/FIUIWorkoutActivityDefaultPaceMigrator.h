@interface FIUIWorkoutActivityDefaultPaceMigrator : NSObject

+ (void)migrateDefaultOutdoorRunningWalkingPaceFromCurrentToAverage;
+ (void)migrateDefaultOutdoorRunningWalkingPaceFromCurrentToAverageWithSyncManager:(id)a0 domainAccessor:(id)a1;

@end
