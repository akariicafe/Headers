@class NSString, CPLPlatformObject;

@interface CPLEnginePendingRecordChecks : CPLEngineStorage <CPLAbstractObject>

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (id)nextBatchOfRecordsToCheckWithScopeIdentifier:(id)a0;
- (BOOL)enqueueCloudScopedIdentifiersToCheck:(id)a0 error:(id *)a1;
- (unsigned long long)scopeType;
- (BOOL)hasRecordsToCheckWithScopeIdentifier:(id)a0;
- (BOOL)dequeueCloudScopedIdentifiersToCheck:(id)a0 error:(id *)a1;

@end
