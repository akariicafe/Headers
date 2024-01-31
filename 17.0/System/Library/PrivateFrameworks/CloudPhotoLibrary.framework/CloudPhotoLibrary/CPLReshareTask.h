@class NSDate;

@interface CPLReshareTask : CPLEngineMultiscopeSyncTask

@property (class, readonly, nonatomic) NSDate *cutoffDate;

- (id)taskIdentifier;
- (id)enumerateScopesForTaskInTransaction:(id)a0;
- (id)newScopedTaskWithScope:(id)a0 session:(id)a1 transportScope:(id)a2 clientCacheIdentifier:(id)a3;
- (id)scopeFilterInTransaction:(id)a0;

@end
