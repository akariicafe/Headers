@class NSString, NSMutableDictionary;

@interface _SYSharedServiceDB : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct sqlite3 { } *_db;
    NSString *_name;
    NSMutableDictionary *_schemaSetupCallbacks;
}

@property (readonly, nonatomic, getter=_dbPath) NSString *dbPath;

+ (id)sharedInstanceForServiceName:(id)a0;
+ (void)initialize;
+ (void)pairingStorePathWasReset;
+ (void)_releaseSharedInstanceForServiceName:(id)a0;

- (BOOL)_LOCKED_ensureDBExists;
- (void)dealloc;
- (BOOL)_LOCKED_hasSchemaVersionForClient:(id)a0;
- (long long)_LOCKED_getClientVersion:(id)a0;
- (BOOL)inTransaction:(id /* block */)a0;
- (void)setSchemaVersion:(long long)a0 forClient:(id)a1;
- (id)initWithServiceName:(id)a0;
- (void)_ensureSchemaVersionsTable;
- (void)_LOCKED_setVersion:(long long)a0 forClient:(id)a1;
- (void)updateSchemaForClient:(id)a0 usingBlock:(id /* block */)a1;
- (void)withDBRef:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_addSkipBackupAttributeToItemAtPath:(id)a0 error:(id *)a1;
- (void)_LOCKED_ensureSchemaVersionsTableInDB:(struct sqlite3 { } *)a0;
- (BOOL)inExclusiveTransaction:(id /* block */)a0;
- (BOOL)_ensureParentExists:(id)a0 error:(id *)a1;
- (BOOL)_LOCKED_createOrOpenDBForServiceName:(id)a0 error:(id *)a1;
- (BOOL)_runTransactionBlock:(id /* block */)a0 exclusive:(BOOL)a1;
- (void)_LOCKED_runSchemaUpdate:(id /* block */)a0 forClientNamed:(id)a1;
- (long long)schemaVersionForClient:(id)a0;

@end
