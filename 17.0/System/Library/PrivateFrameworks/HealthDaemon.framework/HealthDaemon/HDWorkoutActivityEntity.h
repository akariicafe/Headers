@interface HDWorkoutActivityEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)_workoutActivityFromRow:(struct HDSQLiteRow { } *)a0;
+ (id)_statisticsForWorkoutActivityWithPersistentId:(unsigned long long)a0 workoutActivity:(id)a1 database:(id)a2 error:(id *)a3;
+ (id)durationForPrimaryActivityOwnerID:(unsigned long long)a0 transaction:(id)a1 error:(id *)a2;
+ (id)primaryWorkoutActivityForOwnerID:(unsigned long long)a0 database:(id)a1 error:(id *)a2;
+ (Class)ownerEntityClass;
+ (BOOL)insertPrimaryActivity:(id)a0 ownerID:(unsigned long long)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)supportsNullableEndDate;
+ (id)_numberProperty:(id)a0 primaryActivityOwnerID:(unsigned long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)insertSubActivities:(id)a0 ownerID:(unsigned long long)a1 database:(id)a2 error:(id *)a3;
+ (id)activityTypeForPrimaryActivityOwnerID:(unsigned long long)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)enumerateActivityEntitiesForOwnerID:(unsigned long long)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)_allProperties;
+ (id)subActivityEntityWithUUID:(id)a0 ownerID:(unsigned long long)a1 database:(id)a2 error:(id *)a3;
+ (id)_primaryActivityPredicateForOwnerID:(unsigned long long)a0;
+ (id)indices;
+ (id)subActivitiesWithOwnerID:(unsigned long long)a0 database:(id)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)_insertOrReplaceWorkoutActivity:(id)a0 shouldReplace:(BOOL)a1 ownerID:(unsigned long long)a2 isPrimaryActivity:(BOOL)a3 database:(id)a4 error:(id *)a5;
+ (id)activityEntityWithUUID:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (long long)protectionClass;

- (id)UUIDInTransaction:(id)a0 error:(id *)a1;
- (BOOL)setDuration:(double)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setEndDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setMetadata:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)unitTest_validateInTransaction:(id)a0 error:(id *)a1;

@end
