@class PQLConnection, NSURL, NSObject;
@protocol OS_dispatch_source;

@interface QLThumbnailAdditionIndex : NSObject <QLThumbnailAdditionIndexInterface> {
    NSURL *_url;
    NSObject<OS_dispatch_source> *_dbWatcher;
    BOOL _exitsOnCorruption;
}

@property (readonly) PQLConnection *db;
@property (readonly, copy) NSURL *databaseURL;

+ (id)sharedInstance;
+ (void)registerCleanupXPCActivity;
+ (void)setUpCleanupXPCActivitySynchronously:(BOOL)a0;

- (void)close;
- (BOOL)dispatchSyncOnDatabaseQueue:(id /* block */)a0;
- (id)initWithURL:(id)a0;
- (id)init;
- (id)databaseConnection;
- (id)makeDatabaseAtURL:(id)a0 error:(id *)a1;
- (BOOL)open;
- (void)flush;
- (BOOL)updateLastHitDate:(id)a0 ofThumbnailForURL:(id)a1;
- (void)removeAllAdditions;
- (BOOL)hasThumbnailForURL:(id)a0 updateLastHitDate:(BOOL)a1 andSize:(unsigned long long)a2;
- (BOOL)updateFileSize:(unsigned long long)a0 ofThumbnailForURL:(id)a1;
- (id)initForTesting;
- (void)removeEntriesFromDatabase:(id)a0;
- (void)logError:(id)a0 onDB:(id)a1 statement:(id)a2;
- (void)_neuterAutoRollbackHandler;
- (void)_closeDatabaseOnItsQueue:(id)a0;
- (void)cleanUpBatchOfEntries:(id)a0;
- (id)whereClauseForURL:(id)a0;
- (void)setUpDatabase:(id)a0;
- (long long)purgeOnMountPoint:(id)a0 withUrgency:(int)a1 beforeDate:(id)a2;
- (void)updateFileSize:(unsigned long long)a0 ofThumbnailForURL:(id)a1 completion:(id /* block */)a2;
- (void)hasThumbnailForURLWrapper:(id)a0 updateLastHitDate:(BOOL)a1 andSize:(unsigned long long)a2 completion:(id /* block */)a3;
- (long long)purgeableSpaceOnMountPoint:(id)a0 withUrgency:(int)a1 beforeDate:(id)a2;
- (id)entriesEnumerator;
- (BOOL)removeDatabaseAtURL:(id)a0 error:(id *)a1;
- (void)addThumbnailForURLWrapper:(id)a0 size:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)addThumbnailForURL:(id)a0 size:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)removeThumbnailForURL:(id)a0 completion:(id /* block */)a1;
- (id)batchOfEntriesStartingAt:(unsigned long long)a0 endingAt:(unsigned long long *)a1;
- (int)deviceForHomeDirectory;
- (void)_cleanUpAfterClose;
- (void)retrieveAllAdditions:(id /* block */)a0;
- (id)volumeRestrictionForMountPoint:(id)a0;
- (void)_resetDatabaseOnItsQueue:(id)a0;
- (void)cancelCacheDeletePurge;
- (void)enumerateCacheEntriesWithHandler:(id /* block */)a0;
- (void)updateLastHitDate:(id)a0 ofThumbnailForURL:(id)a1 completion:(id /* block */)a2;
- (BOOL)removeThumbnailForURL:(id)a0;
- (id)upgradeDatabaseIfNeeded:(id)a0 error:(id *)a1;
- (id)allEntries;
- (id)openDatabaseAtURL:(id)a0 error:(id *)a1;
- (void)performDatabaseMaintenance;
- (BOOL)addThumbnailForURL:(id)a0 lastHitDate:(id)a1 size:(unsigned long long)a2;

@end
