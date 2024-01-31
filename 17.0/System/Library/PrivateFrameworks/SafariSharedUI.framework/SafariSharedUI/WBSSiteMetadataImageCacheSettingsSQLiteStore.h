@class WBSSQLiteDatabase, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WBSSiteMetadataImageCacheSettingsSQLiteStore : NSObject {
    BOOL _isClosed;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    long long _protectionType;
}

@property (readonly, nonatomic) WBSSQLiteDatabase *database;
@property (readonly, nonatomic) NSURL *databaseURL;

+ (Class)cacheSettingsEntryClass;
+ (long long)databaseSchemaVersion;

- (void)close;
- (id)initWithDatabaseURL:(id)a0;
- (void)dealloc;
- (void)_closeDatabase;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (void).cxx_destruct;
- (id)allEntries;
- (BOOL)_checkDatabaseIntegrity;
- (id)_createNewDatabaseSQLiteStatement;
- (BOOL)_createNewDatabaseSchema;
- (id)_deleteAllEntriesSQLiteStatement;
- (id)_deleteEntrySQLiteStatementWithHost:(id)a0;
- (id)_insertEntry:(id)a0;
- (id)_insertEntrySQLiteStatementWithEntry:(id)a0;
- (BOOL)_migrateToCurrentSchemaVersionifNeeded;
- (BOOL)_openDatabase:(id)a0 andCheckIntegrity:(BOOL)a1;
- (BOOL)_performMigrationStepToSchemaVersion:(long long)a0 withStatements:(id)a1;
- (id)_selectAllEntriesSQLiteStatement;
- (id)_selectEntrySQLiteStatementWithHost:(id)a0;
- (id)_statementsForMigrationToSchemaVersion:(long long)a0;
- (id)_updateEntry:(id)a0;
- (id)_updateEntrySQLiteStatementWithEntry:(id)a0;
- (BOOL)deleteAllEntries;
- (BOOL)deleteEntryWithHost:(id)a0;
- (id)entryWithHost:(id)a0;
- (id)initWithDatabaseURL:(id)a0 protectionType:(long long)a1;
- (id)saveEntry:(id)a0;

@end
