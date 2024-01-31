@interface HDCachedSecureCKRecordEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)protectedRecordDataForUnprotectedEntity:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)deleteRecordWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 zoneName:(id)a2 ownerName:(id)a3 recordName:(id)a4 profile:(id)a5 error:(id *)a6;
+ (BOOL)updateWithRecordData:(id)a0 recordID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)synchronizeRecordsWithProfile:(id)a0 error:(id *)a1;
+ (BOOL)insertOrUpdateWithRecordID:(long long)a0 recordData:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)insertOrUpdateWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 zoneName:(id)a2 ownerName:(id)a3 recordData:(id)a4 recordName:(id)a5 profile:(id)a6 error:(id *)a7;
+ (id)insertWithRecordID:(long long)a0 recordData:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;

@end
