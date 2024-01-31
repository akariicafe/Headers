@class EDPersistenceDatabase, NSString, EDPersistenceDatabaseJournalManager, EDPersistenceHookRegistry, NSObject, EFLocked;
@protocol OS_os_log, OS_dispatch_queue;

@interface EDProtectedDatabasePersistence : NSObject <EFLoggable, EFSignpostable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _initializationLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reconciliationLock;
    EDPersistenceDatabase *_database;
}

@property (class, readonly, copy, nonatomic) NSString *protectedDatabaseName;
@property (class, readonly, copy, nonatomic) NSString *journalDatabaseName;
@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (readonly, nonatomic) EDPersistenceDatabaseJournalManager *journalManager;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *reconciliationQueue;
@property (nonatomic) BOOL isInitialized;
@property (nonatomic) BOOL isReconciling;
@property (readonly, nonatomic) EFLocked *reconciliationMergeHandlers;
@property (readonly, nonatomic) BOOL supportsJournaling;
@property (readonly, nonatomic) BOOL protectedDataAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

+ (BOOL)_isRecoverableError:(id)a0;
+ (unsigned long long)_resultForConnection:(id)a0 success:(BOOL)a1 error:(id)a2 errorMessage:(id)a3;

- (void)setDatabase:(id)a0;
- (id)database;
- (void)scheduleRecurringActivity;
- (void)finishJournalReconciliation:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addAdditionalCriteriaToCleanupActivity:(id)a0;
- (id)initWithBasePath:(id)a0 hookRegistry:(id)a1;
- (id)_allReferencingColumnsForTable:(id)a0;
- (void)_attachJournalDatabaseToConnection:(id)a0 withSchema:(id)a1;
- (BOOL)_attachProtectedDatabaseToConnection:(id)a0 withSchema:(id)a1 error:(id *)a2;
- (id)_databaseIDsToDeleteForTable:(id)a0;
- (void)_deleteDatabaseIDs:(id)a0 fromTable:(id)a1;
- (unsigned long long)_deleteRowIDs:(id)a0 fromJournal:(id)a1 withConnection:(id)a2;
- (void)_detachJournalDatabaseFromConnection:(id)a0;
- (void)_detachProtectedDatabaseFromConnection:(id)a0;
- (void)_ensureJournalIsAttachedToConnection:(id)a0 withSchema:(id)a1;
- (void)_ensureProtectedDatabaseOrJournalIsAttachedToConnection:(id)a0 withSchema:(id)a1;
- (unsigned long long)_executeStatementString:(id)a0 onConnection:(id)a1 errorMessage:(id)a2;
- (unsigned long long)_executeUpdateStatement:(id)a0 onConnection:(id)a1 errorMessage:(id)a2;
- (BOOL)_initializeDatabase:(id)a0 withConnection:(id)a1 schema:(id)a2 error:(id *)a3;
- (BOOL)_isJournalMalformedForSchema:(id)a0 connection:(id)a1;
- (long long)_maxRowIDForColumn:(id)a0 withConnection:(id)a1;
- (unsigned long long)_mergeSchema:(id)a0 connection:(id)a1 journaledRows:(unsigned long long *)a2 newRows:(unsigned long long *)a3;
- (unsigned long long)_mergeTable:(id)a0 connection:(id)a1 journaledRows:(unsigned long long *)a2 newRows:(unsigned long long *)a3;
- (BOOL)_performOnDemandReconciliationForConnection:(id)a0 withSchema:(id)a1;
- (unsigned long long)_reconcileJournalsWithSchema:(id)a0 connection:(id)a1;
- (BOOL)_removeExistingDatabaseIDs:(id)a0 withColumn:(id)a1 connection:(id)a2;
- (unsigned long long)_runReconciliationWithSchema:(id)a0 connection:(id)a1;
- (BOOL)_updateSqliteSequenceForDatabase:(id)a0 schema:(id)a1 withConnection:(id)a2 error:(id *)a3;
- (BOOL)_upgradeJournalWithConnection:(id)a0 schema:(id)a1 error:(id *)a2;
- (void)attachProtectedOrJournalDatabaseToConnectionIfNecessary:(id)a0 withSchema:(id)a1;
- (void)detachProtectedOrJournalDatabaseFromConnectionIfNecessary:(id)a0;
- (id)initWithJournalManager:(id)a0 hookRegistry:(id)a1;
- (void)reconcileJournalsWithSchema:(id)a0 completionBlock:(id /* block */)a1;
- (void)registerMergeHandler:(id)a0 forTable:(id)a1;

@end
