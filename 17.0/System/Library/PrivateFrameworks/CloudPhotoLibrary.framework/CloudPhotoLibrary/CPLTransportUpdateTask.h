@interface CPLTransportUpdateTask : CPLEngineMultiscopeSyncTask

- (id)taskIdentifier;
- (id)enumerateScopesForTaskInTransaction:(id)a0;
- (id)newScopedTaskWithScope:(id)a0 session:(id)a1 transportScope:(id)a2 clientCacheIdentifier:(id)a3;
- (BOOL)shouldSkipScopesWithMissingTransportScope;

@end
