@class NSString;

@interface HDObjectAuthorizationEntity : HDHealthEntity <HDHealthEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseTable;
+ (id)foreignKeys;
+ (BOOL)resetAuthorizationForObjects:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)authorizationRecordsForSamples:(id)a0 sourceEntity:(id)a1 sessionIdentifier:(id)a2 profile:(id)a3 error:(id *)a4;
+ (id)authorizationRecordsBySourceForSampleWithUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)resetObjectAuthorizationRecordsForSource:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)propertyForSyncIdentity;
+ (id)pruneWithProfile:(id)a0 nowDate:(id)a1 limit:(unsigned long long)a2 error:(id *)a3;
+ (id)uniquedColumns;
+ (id)propertyForSyncProvenance;
+ (BOOL)setObjectAuthorizationRecords:(id)a0 syncProvenance:(long long)a1 syncIdentity:(long long)a2 profile:(id)a3 error:(id *)a4;
+ (id)authorizationStatusForSamplesOfType:(id)a0 sourceEntity:(id)a1 profile:(id)a2 error:(id *)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (BOOL)resetAllObjectAuthorizationRecordsForProfile:(id)a0 error:(id *)a1;


@end
