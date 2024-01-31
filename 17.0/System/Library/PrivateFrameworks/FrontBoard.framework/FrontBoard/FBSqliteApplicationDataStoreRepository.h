@class NSString, BSSqliteDatabaseConnection, NSURL, NSObject;
@protocol OS_dispatch_queue, FBApplicationDataStoreRepositoryDelegate;

@interface FBSqliteApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository> {
    NSURL *_storeURL;
    NSObject<OS_dispatch_queue> *_dbQueue;
    BSSqliteDatabaseConnection *_dbQueue_dbConnection;
    unsigned long long _dbQueue_batchDepth;
    int _dbQueue_firstUnlockToken;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (weak, nonatomic) id<FBApplicationDataStoreRepositoryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_generateParameterizedQuery:(id)a0 forKeyList:(id)a1 outBindings:(id *)a2;
+ (BOOL)_objectRequiresSerialization:(id)a0;
+ (id)_objectForResultRow:(id)a0 index:(unsigned long long)a1;

- (void)close;
- (id)initWithStorePath:(id)a0;
- (id)keysForApplication:(id)a0;
- (id)allObjectsForKeys:(id)a0;
- (BOOL)_isEligibleForSaving:(id)a0;
- (void)dealloc;
- (id)migrateIdentifier:(id)a0 toIdentifier:(id)a1;
- (id)objectForKey:(id)a0 forApplication:(id)a1;
- (BOOL)_dbQueue_executeStatement:(id)a0 bindings:(id)a1 resultRowHandler:(id /* block */)a2 error:(out id *)a3;
- (id)_dbQueue_applicationIdentifiersWithState;
- (void)removeObjectsForKeys:(id)a0 forApplication:(id)a1;
- (void)flushSynchronously;
- (void)_dbQueue_notifyDelegateOfStoreInvalidationForIdentifier:(id)a0;
- (BOOL)_inAlternateSystemApp;
- (BOOL)containsKey:(id)a0 forApplication:(id)a1;
- (BOOL)_dbQueue_databaseIntegrityCheck;
- (id)_dbQueue_objectForKey:(id)a0 forApplication:(id)a1;
- (long long)_dbQueue_databaseVersion;
- (BOOL)_dbQueue_executeStatement:(id)a0 bindings:(id)a1 resultRowHandler:(id /* block */)a2;
- (id)urlByAppendingString:(id)a0 toURL:(id)a1;
- (void)removeObjectForKey:(id)a0 forApplication:(id)a1;
- (BOOL)_dbQueue_tryPreserveDamagedDatabase;
- (id)_dbQueue_keysForApplication:(id)a0;
- (id)_dbQueue_objectsForKeys:(id)a0;
- (void)_dbQueue_notifyDelegateOfLateLoad;
- (BOOL)_dbQueue_containsKey:(id)a0 forApplication:(id)a1;
- (BOOL)_dbQueue_truncateDamagedDatabase;
- (void)removeAllObjectsForApplication:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 forApplication:(id)a2;
- (id)applicationIdentifiersWithState;
- (void).cxx_destruct;
- (void)_dbQueue_performWithSavepoint:(id)a0 handler:(id /* block */)a1;
- (void)beginBatchedUpdate;
- (id)_dbQueue_openDatabase;
- (void)_dbQueue_load;
- (void)_dbQueue_createTables;
- (void)_dbQueue_notifyDelegateOfChangeForKeys:(id)a0 application:(id)a1;
- (void)endBatchedUpdate;
- (BOOL)_preserveFileAtURL:(id)a0;
- (BOOL)_dbQueue_loadDatabase;

@end
