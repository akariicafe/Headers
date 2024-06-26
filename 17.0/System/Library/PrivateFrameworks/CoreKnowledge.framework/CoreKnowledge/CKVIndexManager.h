@class NSDate, NSMutableDictionary, CKVGlobalInfoLog, TRIClient, CKVSettings, NSObject, CKVFilesystemBase;
@protocol OS_dispatch_queue;

@interface CKVIndexManager : NSObject <KVSkitAccessProvider> {
    CKVFilesystemBase *_filesystemBase;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_migrationStartTime;
    NSMutableDictionary *_instanceLogCache;
    NSMutableDictionary *_readOnlyDatabaseCache;
    NSMutableDictionary *_readOnlySkitCache;
    CKVGlobalInfoLog *_globalLog;
    TRIClient *_trialClient;
}

@property (readonly, nonatomic) CKVSettings *settings;

+ (id)sharedReaderInstance;

- (BOOL)_executeDatabaseTransactionForUser:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)_rebuildSpeechProfileForUser:(id)a0;
- (id)captureProfileSnapshot:(id)a0;
- (unsigned short)_executeDatabaseAndSkitTransactionForUser:(id)a0 usingBlock:(id /* block */)a1;
- (id)init;
- (void)_registerTrialExperimentUpdateHandler;
- (BOOL)_executeDatabaseTransactionWithDatabase:(id)a0 instanceLog:(id)a1 description:(id)a2 usingBlock:(id /* block */)a3;
- (void)_speechProfileAccessAtDataDirectory:(id)a0 userId:(id)a1 description:(id)a2 usingBlock:(id /* block */)a3;
- (unsigned short)performMaintenanceWithShouldDefer:(id /* block */)a0;
- (void)_cacheAllLocalAccess;
- (id)lastMaintenanceForUser:(id)a0;
- (void)performSpeechProfileVerification;
- (void)_clearCachedDatabaseAccessAtDataDirectory:(id)a0;
- (void)_cleanupSnapshotDirectory;
- (id)accessReadOnlySkitForUser:(id)a0;
- (BOOL)_shouldRunMigration;
- (void)_verifySkitAtDataDirectory:(id)a0 description:(id)a1 clean:(BOOL)a2 shouldDefer:(id /* block */)a3;
- (void)_clearAllCaches;
- (BOOL)_dataDirectoryExists:(id)a0;
- (id)_openReadWriteDatabaseOrCreate:(BOOL)a0 atDataDirectory:(id)a1 description:(id)a2;
- (BOOL)deleteDataForUser:(id)a0 deviceId:(id)a1 ifMatching:(BOOL)a2 didDelete:(BOOL *)a3;
- (void)_loadGlobalLog;
- (void)performSkitVerification;
- (void)completeMigration;
- (BOOL)_destroySpeechProfileAtDataDirectory:(id)a0;
- (BOOL)submitDatabaseTransactionForUser:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)_purgeProfileSnapshots;
- (void)_speechProfileAccessForUser:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)_deleteDataForUser:(id)a0 deviceId:(id)a1 ifMatching:(BOOL)a2 didDelete:(BOOL *)a3;
- (BOOL)_executeSkitRebuildTransactionForUser:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)supportsMultiUser;
- (BOOL)updateStoredSiriLanguageCode:(id)a0 dictationLanguageCodes:(id)a1;
- (id)accessReadOnlyDatabaseForAllUsers;
- (id)_cachedReadOnlySkitAccessAtDataDirectoryURL:(id)a0;
- (id)_localSkitDirectoryURL;
- (BOOL)_resetAllState;
- (void)_clearAllCachedAccessAtDataDirectory:(id)a0;
- (id)_cachedReadOnlyDatabaseAccessAtDataDirectoryURL:(id)a0;
- (BOOL)submitSkitRebuildTransactionForUser:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithFilesystemBase:(id)a0 settings:(id)a1 isWriter:(BOOL)a2;
- (BOOL)updateStoredEnablementOptions:(unsigned char)a0;
- (id)accessReadOnlyDatabaseForUser:(id)a0;
- (BOOL)_destroyStateAtDataDirectory:(id)a0;
- (id)_localDataDirectoryURL;
- (id)_snapshotDirectoryURL;
- (void).cxx_destruct;
- (BOOL)rebuildSpeechProfileForUser:(id)a0;
- (BOOL)setItems:(id)a0 error:(id *)a1;
- (id)userIdHash:(id)a0;
- (id)_accessReadOnlyDatabaseForAllUsers;
- (BOOL)_executeSkitRebuildTransactionAtDataDirectory:(id)a0 description:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)_destroySkitAtDataDirectory:(id)a0;
- (id)_getFilesSortedByCreationDateForDirectoryPath:(id)a0;
- (BOOL)_shouldCleanupDatabaseAtDataDirectory:(id)a0 instanceLog:(id)a1;
- (void)storedSiriLanguageCode:(id *)a0 dictationLanguageCodes:(id *)a1;
- (void)registerSpeechProfileUpdateForUser:(id)a0 originAppId:(id)a1 itemType:(long long)a2 fieldTypes:(id)a3 options:(unsigned short)a4;
- (id)findProfileSnapshotsNearDate:(id)a0;
- (BOOL)deleteDataForUser:(id)a0;
- (id)_localDatabaseFileURL;
- (int)_protectionClassForDataDirectory:(id)a0;
- (void)_verifyAllManagedDataDirectories;
- (BOOL)resetAllState;
- (void)_verifySpeechProfileAtDataDirectory:(id)a0 description:(id)a1 userId:(id)a2 clean:(BOOL)a3;
- (unsigned char)storedEnablementOptions;
- (unsigned short)submitDatabaseAndSkitTransactionForUser:(id)a0 usingBlock:(id /* block */)a1;
- (id)_writeOnlySkitAccessAtDataDirectory:(id)a0 description:(id)a1 flushThreshold:(unsigned long long)a2;
- (void)resetWithFilesystemBase:(id)a0;
- (void)_clearCachedSkitAccessAtDataDirectory:(id)a0;
- (id)_dataDirectoryURLForUser:(id)a0;
- (void)closeAllConnections;
- (BOOL)initiateMigration:(BOOL)a0;
- (id)_instanceLogAtDataDirectory:(id)a0;
- (BOOL)_initiateMigration:(BOOL)a0;
- (void)_refreshRankedItemCachesAtDataDirectory:(id)a0 description:(id)a1 userId:(id)a2;

@end
