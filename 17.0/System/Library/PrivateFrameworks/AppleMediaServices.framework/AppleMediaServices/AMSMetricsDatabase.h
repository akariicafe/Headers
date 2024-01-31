@class NSObject, NSString, AMSSQLiteConnection;
@protocol OS_dispatch_queue;

@interface AMSMetricsDatabase : NSObject <AMSSQLiteConnectionDelegate>

@property (retain, nonatomic) AMSSQLiteConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSString *containerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDatabaseWithContainerId:(id)a0;

- (void)close;
- (id)_lockedById;
- (id)_cachePath;
- (BOOL)enumerateUnsyncedIdentifierStoresUsingBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)removeCrossDeviceIdentifiersWithError:(id *)a0;
- (void)dealloc;
- (BOOL)insertEvents:(id)a0 error:(id *)a1;
- (BOOL)connectionNeedsResetForCorruption:(id)a0;
- (BOOL)unlockAllEventsWithKey:(id)a0 error:(id *)a1;
- (id)lockAllEventsWithError:(id *)a0;
- (void)_performTransaction:(id /* block */)a0;
- (BOOL)removeIdentifiersForAccount:(id)a0 error:(id *)a1;
- (BOOL)enumerateUnsyncedIdentifiersUsingBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)cleanupInvalidIdentifiersWithError:(id *)a0;
- (id)initWithContainerId:(id)a0;
- (BOOL)dropAllEventsWithLockKey:(id)a0 error:(id *)a1;
- (BOOL)clearIdentifierSyncStateWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)unlockEvents:(id)a0 error:(id *)a1;
- (long long)countAllEventsWithLockKey:(id)a0 error:(id *)a1;
- (BOOL)dropEvents:(id)a0 error:(id *)a1;
- (id)identifierForKey:(id)a0 updateMaybe:(id /* block */)a1 error:(id *)a2;
- (id)identifierStoreForKey:(id)a0 updateMaybe:(id /* block */)a1 error:(id *)a2;
- (BOOL)permanentlyRemoveIdentifierForKey:(id)a0 error:(id *)a1;
- (void)enumerateEventsWithTopic:(id)a0 lockKey:(id)a1 objectBlock:(id /* block */)a2;

@end
