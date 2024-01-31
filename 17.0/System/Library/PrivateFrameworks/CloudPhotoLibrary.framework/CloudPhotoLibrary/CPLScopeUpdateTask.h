@class NSMutableSet;

@interface CPLScopeUpdateTask : CPLEngineMultiscopeSyncTask {
    NSMutableSet *_possibleStagedScopes;
}

- (id)taskIdentifier;
- (void).cxx_destruct;
- (id)enumerateScopesForTaskInTransaction:(id)a0;
- (id)newScopedTaskWithScope:(id)a0 session:(id)a1 transportScope:(id)a2 clientCacheIdentifier:(id)a3;
- (BOOL)shouldSkipScopesWithMissingTransportScope;
- (void)taskDidFinishWithError:(id)a0;

@end
