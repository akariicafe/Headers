@class NSString, CPLPlatformObject;

@interface CPLEngineChangePipe : CPLEngineStorage <CPLAbstractObject>

@property (readonly, nonatomic) unsigned long long countOfQueuedBatches;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasQueuedBatches;
- (BOOL)deleteAllChangesWithScopeFilter:(id)a0 error:(id *)a1;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (BOOL)deleteAllChangeBatchesWithError:(id *)a0;
- (id)allChangeBatches;
- (unsigned long long)scopeType;
- (BOOL)popNextBatchWithError:(id *)a0;
- (BOOL)appendChangeBatch:(id)a0 error:(id *)a1;
- (id)nextBatch;
- (BOOL)hasSomeChangeWithScopeFilter:(id)a0;
- (BOOL)compactChangeBatchesWithError:(id *)a0;
- (BOOL)hasSomeChangeInScopesWithIdentifiers:(id)a0;
- (BOOL)popChangeBatch:(id *)a0 error:(id *)a1;
- (BOOL)hasSomeChangeWithScopedIdentifier:(id)a0;
- (BOOL)isEmpty;

@end
