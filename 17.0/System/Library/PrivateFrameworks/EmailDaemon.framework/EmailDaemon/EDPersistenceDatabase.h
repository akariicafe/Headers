@class EFSQLSchema, NSString, EMForceBlankCellsController, EDPersistenceDatabaseConnectionPool, EDProtectedDatabasePersistence, NSObject, EFSQLPropertyMapper;
@protocol OS_os_log;

@interface EDPersistenceDatabase : NSObject <EDPersistenceDatabaseConnectionPoolDelegate, EFLoggable, EDPersistenceDatabaseConnectionDelegate> {
    EDPersistenceDatabaseConnectionPool *_connectionPool;
    EMForceBlankCellsController *_blankCellsController;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDProtectedDatabasePersistence *protectedDatabasePersistence;
@property (readonly, nonatomic) NSString *basePath;
@property (readonly, nonatomic) NSString *databaseName;
@property (readonly, nonatomic) NSString *fullPath;
@property (readonly, nonatomic) BOOL databaseIsCorrupt;
@property (readonly, nonatomic) BOOL enforceDataProtection;
@property BOOL setupIsComplete;
@property (readonly, nonatomic) BOOL isNestedDatabaseCall;
@property (readonly, nonatomic) BOOL writersAreWaiting;
@property (readonly, nonatomic) EFSQLSchema *schema;
@property (readonly, nonatomic) EFSQLSchema *protectedSchema;
@property (readonly, nonatomic) EFSQLPropertyMapper *propertyMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)checkOutConnectionIsWriter:(BOOL)a0;
- (void)checkInConnection:(id)a0;
- (void)scheduleRecurringActivity;
- (id)initWithBasePath:(id)a0 databaseName:(id)a1 maxConcurrentReaders:(unsigned long long)a2 schema:(id)a3 protectedSchema:(id)a4 propertyMapper:(id)a5 protectedDatabasePersistence:(id)a6;
- (void).cxx_destruct;
- (id)openConnectionIsWriter:(BOOL)a0;
- (void)closeAllConnections;
- (id)fileProtectionForDatabaseType:(long long)a0;
- (void)performDatabaseWorkInBlockWithHighPriority:(id /* block */)a0;
- (BOOL)performReadBlock:(id /* block */)a0;
- (BOOL)performWriteBlock:(id /* block */)a0;
- (void)reconcileJournalWithCompletionBlock:(id /* block */)a0;
- (id)urlForDatabasePath:(id)a0 type:(long long)a1;
- (id)urlForDatabasePath:(id)a0 type:(long long)a1 fileProtection:(id)a2;
- (void)handleExceptionCreatingConnection:(id)a0;
- (BOOL)performDatabaseSetupUsingTransaction:(BOOL)a0 block:(id /* block */)a1;
- (BOOL)performWithOptions:(unsigned long long)a0 block:(id /* block */)a1;

@end
