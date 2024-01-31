@interface HDSyncSampleOriginUtilities : NSObject

+ (BOOL)generateStateSyncCodableContributors:(id *)a0 predicate:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)generateStateSyncCodableDevices:(id *)a0 predicate:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (long long)ingestContributorSyncObjects:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;
+ (long long)ingestSourceSyncObjects:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;

@end
