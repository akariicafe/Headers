@class NSString, CPLPlatformObject;

@interface CPLEngineTransientRepository : CPLEngineStorage <CPLAbstractObject>

@property (readonly, nonatomic) unsigned long long countOfUnmingledRecords;
@property (nonatomic) unsigned long long maximumCountOfRecordsInBatches;
@property (readonly, nonatomic) BOOL hasUnmingledChanges;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)orderedClassesForChanges;
+ (id)orderedClassesForChangesForLargeSync;
+ (id)orderedClassesForDelete;

- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (BOOL)stashChangeWithScopedIdentifier:(id)a0 error:(id *)a1;
- (BOOL)hasUnmingledOrStashedRecordsWithScopeFilter:(id)a0;
- (BOOL)hasRecordWithScopedIdentifier:(id)a0;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (id)allUnmingledChangesWithClass:(Class)a0 relatedScopedIdentifier:(id)a1;
- (BOOL)appendBatch:(id)a0 alreadyMingled:(BOOL)a1 countOfAssetChanges:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)resetMingledRecordsForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)hasStashedChangesForScopeWithIdentifier:(id)a0;
- (id)cachedRecordWithScopedIdentifier:(id)a0;
- (BOOL)popChangeBatchOfRemappedRecords:(id *)a0 scope:(id)a1 maximumCount:(unsigned long long)a2 error:(id *)a3;
- (id)allUnmingledNonDeletedChangesWithClass:(Class)a0 scopeIdentifier:(id)a1;
- (id)nextBatchOfRemappedRecordsInScope:(id)a0 maximumCount:(unsigned long long)a1;
- (id)allUnmingledChangesWithClass:(Class)a0 scopeIdentifier:(id)a1;
- (unsigned long long)scopeType;
- (BOOL)hasUnmingledChangesForScope:(id)a0;
- (id)allUnmingledDeletedChangesWithClass:(Class)a0 scopeIdentifier:(id)a1;
- (BOOL)resetTransientRepositoryForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)deleteMingledRecordsForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)hasUnmingledNonStashedRecordsForScopeWithIdentifier:(id)a0;
- (BOOL)hasMingledRecordsForScopeWithIdentifier:(id)a0;
- (BOOL)unstashRecordsForScopeWithIdentifier:(id)a0 maxCount:(unsigned long long)a1 hasMore:(BOOL *)a2 error:(id *)a3;
- (id)unmingledChangeWithScopedIdentifier:(id)a0;
- (BOOL)shouldKeepDeleteChange:(id)a0 forRecordWithScopedIdentifier:(id)a1;
- (BOOL)_appendBatchToStorage:(id)a0 alreadyMingled:(BOOL)a1 countOfAssetChanges:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)resetMingledRecordsWithScopeFilter:(id)a0 error:(id *)a1;
- (BOOL)markUnmingledChangeWithScopedIdentifierAsMingled:(id)a0 error:(id *)a1;
- (BOOL)openWithError:(id *)a0;
- (id)_sharedDeleteFromDelete:(id)a0;
- (BOOL)hasStashedRecordWithScopedIdentifier:(id)a0;
- (id)changeWithScopedIdentifier:(id)a0;
- (id)batchStorageForScope:(id)a0;
- (id)allUnmingledChangesWithScopeIdentifier:(id)a0;
- (BOOL)hasOnlyMingledRecordsWithScopeIdentifier:(id)a0;

@end
