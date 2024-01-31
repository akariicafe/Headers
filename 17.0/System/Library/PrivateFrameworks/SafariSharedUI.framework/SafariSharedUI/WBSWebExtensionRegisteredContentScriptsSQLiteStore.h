@interface WBSWebExtensionRegisteredContentScriptsSQLiteStore : WBSWebExtensionSQLiteStore

- (id)init;
- (int)_createFreshDatabaseSchema;
- (id)_databaseURL;
- (id)_getScriptsWithOutErrorMessage:(id *)a0;
- (int)_currentDatabaseSchemaVersion;
- (id)_getKeysAndValuesFromRowEnumerator:(id)a0;
- (void)_insertScript:(id)a0 inDatabase:(id)a1 errorMessage:(id *)a2;
- (BOOL)_isDatabaseEmpty;
- (int)_resetDatabaseSchema;
- (void)addScripts:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteScripts:(id)a0 completionHandler:(id /* block */)a1;
- (void)getRegisteredContentScriptsFromStorageWithCompletionHandler:(id /* block */)a0;
- (id)initWithComposedIdentifier:(id)a0 profileServerID:(id)a1 usesInMemoryDatabase:(BOOL)a2;
- (void)updateRegisteredContentScriptsInStorageByRemovingIDs:(id)a0 addScripts:(id)a1 completionHandler:(id /* block */)a2;

@end
