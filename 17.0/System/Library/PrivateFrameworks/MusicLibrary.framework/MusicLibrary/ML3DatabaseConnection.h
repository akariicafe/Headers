@class ML3DatabaseConnectionPool, NSString, NSUUID, ML3DatabasePrivacyContext, ML3DatabaseStatementCache, NSMutableArray;
@protocol ML3DatabaseConnectionDelegate;

@interface ML3DatabaseConnection : NSObject {
    struct sqlite3 { } *_sqlitedb;
    BOOL _isOpen;
    ML3DatabaseStatementCache *_statementCache;
    unsigned long long _statementsSinceLastCheckpoint;
    unsigned long long _transactionLevel;
    BOOL _nestedTransactionWantsToRollback;
    NSMutableArray *_enqueuedTransactionCommitBlocks;
    ML3DatabaseConnectionPool *_owningPool;
    NSMutableArray *_registeredFunctions;
    NSMutableArray *_registeredModules;
    const void *_iTunesExtensions;
    int _willDeleteDatabaseNotifyToken;
    BOOL _isHandlingIOError;
    BOOL _alreadyAttemptedCorruptionRecovery;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<ML3DatabaseConnectionDelegate> connectionDelegate;
@property (readonly, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) BOOL isOpen;
@property (retain, nonatomic) ML3DatabasePrivacyContext *privacyContext;
@property (nonatomic, setter=setReadOnly:) BOOL isReadOnly;
@property (nonatomic) unsigned long long journalingMode;
@property (nonatomic) unsigned long long protectionLevel;
@property (readonly, nonatomic) BOOL isInTransaction;
@property (readonly, nonatomic) BOOL transactionMarkedForRollBack;
@property (readonly, nonatomic) NSUUID *currentTransactionID;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (nonatomic) BOOL automaticCheckpointingEnabled;
@property (nonatomic) unsigned long long checkpointStatementThreshold;
@property (nonatomic) BOOL logQueryPlans;

- (BOOL)close;
- (id)initWithDatabasePath:(id)a0;
- (BOOL)_alterTableNamed:(id)a0 withNewColumnDefinitions:(id)a1 newColumnNames:(id)a2 oldColumnNames:(id)a3;
- (void)_internalLogQuery:(id)a0 withParameters:(id)a1 limitProperty:(id)a2 limitValue:(long long)a3;
- (BOOL)schemaRenameColumn:(id)a0 inTable:(id)a1 toNewColumnName:(id)a2;
- (id)init;
- (id)_prepareStatement:(id)a0 error:(id *)a1;
- (BOOL)registerFunctionName:(id)a0 argumentCount:(int)a1 functionPointer:(void /* function */ *)a2;
- (void)dealloc;
- (BOOL)pushTransaction;
- (BOOL)schemaInsertColumnDefinition:(id)a0 intoTable:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)schemaAddColumnDefinition:(id)a0 toTable:(id)a1;
- (BOOL)open;
- (id)_internalExecuteQuery:(id)a0 withParameters:(id)a1 limitProperty:(id)a2 limitValue:(long long)a3;
- (void)flush;
- (id)sqliteError;
- (BOOL)registerModuleName:(id)a0 moduleMethods:(struct sqlite3_module { int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; } *)a1;
- (BOOL)_closeAndFlushTransactionState:(BOOL)a0;
- (BOOL)tableExists:(id)a0;
- (void)_createDatabaseDirectoryIfNonexistent;
- (void)setTransactionLevel:(unsigned long long)a0;
- (void)_logCurrentErrorWhilePerformingStatementOperation:(id)a0 statementSQL:(id)a1;
- (BOOL)executeUpdate:(id)a0;
- (id)_owningPool;
- (BOOL)performTransactionWithBlock:(id /* block */)a0 usingBehaviorType:(unsigned long long)a1;
- (BOOL)registerFunctionName:(id)a0 argumentCount:(int)a1 block:(id /* block */)a2;
- (BOOL)popTransactionAndCommit:(BOOL)a0;
- (BOOL)_validatePreparedStatement:(id)a0 error:(id *)a1;
- (BOOL)_handleDiskIOError;
- (BOOL)popToRootTransactionAndCommit:(BOOL)a0;
- (BOOL)_isDeviceMediaLibraryDatabase;
- (void)_enumerateTableColumnNamesAndDefinitionsFromTable:(id)a0 usingBlock:(id /* block */)a1;
- (int)checkpointDatabase;
- (void)_resetUnfinalizedStatements;
- (BOOL)executeUpdate:(id)a0 withParameters:(id)a1 error:(id *)a2;
- (BOOL)_handleZombieSQLiteConnection:(struct sqlite3 { } *)a0;
- (id)executeQuery:(id)a0 withParameters:(id)a1 limitProperty:(id)a2 limitValue:(long long)a3;
- (id)_databaseFilePaths;
- (BOOL)schemaDeleteColumn:(id)a0 inTable:(id)a1;
- (id)description;
- (void)_logCurrentErrorWhilePerformingStatementOperation:(id)a0 statement:(id)a1;
- (BOOL)_databaseFileExists;
- (void)_setOwningPool:(id)a0;
- (BOOL)databasePathExists;
- (BOOL)schemaInsertColumnDefinitions:(id)a0 intoTable:(id)a1 atIndex:(unsigned long long)a2;
- (void)_createDatabaseFileIfNonexistent;
- (BOOL)pushTransactionUsingBehaviorType:(unsigned long long)a0;
- (BOOL)_handleConnectionErrorWhileOpening:(int)a0;
- (BOOL)_internalExecuteUpdate:(id)a0 withParameters:(id)a1 error:(id *)a2;
- (void)_executeTransactionCommitBlocks:(BOOL)a0;
- (BOOL)_databaseFilesAreWritable;
- (id)_shortDescription;
- (BOOL)_executeStatement:(id)a0 withError:(id *)a1;
- (void).cxx_destruct;
- (BOOL)registerModule:(id)a0;
- (id)debugDescription;
- (unsigned long long)transactionLevel;
- (id)_registeredModuleNamed:(id)a0;
- (id)executeQuery:(id)a0;
- (BOOL)_handleBusyLockWithNumberOfRetries:(int)a0;
- (void)_logCurrentError;
- (BOOL)_internalEndTransactionAndCommit:(BOOL)a0;
- (void)_logDatabaseFileDebugInformation;
- (BOOL)_internalBeginTransactionWithBehaviorType:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)_alreadyAttemptedCorruptionRecovery;
- (void)_handleDatabaseCorruption;
- (BOOL)performTransactionWithBlock:(id /* block */)a0;
- (BOOL)_openWithFlags:(int)a0;
- (BOOL)schemaDeleteColumns:(id)a0 inTable:(id)a1;
- (void)setCurrentTransactionID:(id)a0;
- (void)_setAlreadyAttemptedCorruptionRecovery:(BOOL)a0;
- (void)_finalizeAllStatements;
- (long long)lastInsertionRowID;
- (BOOL)removeModuleNamed:(id)a0;
- (id)openBlobInTable:(id)a0 column:(id)a1 row:(long long)a2 readOnly:(BOOL)a3;
- (void)enqueueBlockForTransactionCommit:(id /* block */)a0;
- (BOOL)registerFunctionName:(id)a0 argumentCount:(int)a1 functionPointer:(void /* function */ *)a2 userData:(void *)a3;
- (BOOL)deleteDatabase;
- (id)executeQuery:(id)a0 withParameters:(id)a1;
- (void)_ensureConnectionIsOpen;
- (int)_distrustQueriesDuringBlock:(id /* block */)a0;
- (struct sqlite3 { } *)_sqliteHandle;

@end
