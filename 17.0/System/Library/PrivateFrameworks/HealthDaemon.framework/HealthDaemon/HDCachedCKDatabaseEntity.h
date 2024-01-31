@interface HDCachedCKDatabaseEntity : HDHealthEntity

+ (id)databaseTable;
+ (BOOL)deleteDatabasesNotMatchingUserRecordName:(id)a0 profile:(id)a1 error:(id *)a2;
+ (long long)previousEpochForTransaction:(id)a0 error:(id *)a1;
+ (id)serverChangeTokenForContainerIdentifier:(id)a0 databaseScope:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)insertWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 userRecordName:(id)a2 serverChangeToken:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (BOOL)insertIfDoesNotExistWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 userRecordName:(id)a2 serverChangeToken:(id)a3 profile:(id)a4 error:(id *)a5;
+ (id)uniquedColumns;
+ (BOOL)insertOrUpdateWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 userRecordName:(id)a2 serverChangeToken:(id)a3 profile:(id)a4 error:(id *)a5;
+ (id)entityForContainerIdentifier:(id)a0 databaseScope:(long long)a1 userRecordName:(id)a2 transaction:(id)a3 shouldCreate:(BOOL)a4 error:(id *)a5;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (BOOL)updateServerChangeToken:(id)a0 containerIdentifier:(id)a1 databaseScope:(long long)a2 transaction:(id)a3 error:(id *)a4;

- (BOOL)setCurrentEpoch:(long long)a0 transaction:(id)a1 error:(id *)a2;

@end
