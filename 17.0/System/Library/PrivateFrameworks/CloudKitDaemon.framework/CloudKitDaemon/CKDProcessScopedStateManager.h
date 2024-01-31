@interface CKDProcessScopedStateManager : NSObject <CKXPCProcessScopedDaemon>

+ (id)sharedManager;

- (void)fetchUsabilityForTestAccountCredentials:(id)a0 completionHandler:(id /* block */)a1;
- (id)initInternal;
- (void)accountsDidRevokeAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)accountsWillDeleteAccount:(id)a0 completionHandler:(id /* block */)a1;
- (void)accountsDidGrantAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)kickOffPendingLongLivedOperations;
- (void)wipeServerConfigurationsAndDie;
- (void)wipeAllCachesAndDie;
- (void)updatePushTokens;
- (void)_wipePersonaBasedClientCacheForAppRecord:(id)a0;
- (void)dumpAllClientsStatusReportToFileHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)globalDeviceIdentifierWithCompletionHandler:(id /* block */)a0;
- (void)accountWithID:(id)a0 changedWithChangeType:(long long)a1;
- (void)maxInlineMergeableDeltaSizeWithCompletionHandler:(id /* block */)a0;
- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(id /* block */)a0;

@end
