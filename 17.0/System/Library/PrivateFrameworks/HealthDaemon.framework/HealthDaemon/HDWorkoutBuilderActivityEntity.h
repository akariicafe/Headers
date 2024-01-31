@interface HDWorkoutBuilderActivityEntity : HDWorkoutActivityEntity

+ (id)databaseTable;
+ (id)_statisticsForWorkoutActivityWithPersistentId:(unsigned long long)a0 workoutActivity:(id)a1 database:(id)a2 error:(id *)a3;
+ (Class)ownerEntityClass;
+ (BOOL)supportsNullableEndDate;
+ (long long)protectionClass;

@end
