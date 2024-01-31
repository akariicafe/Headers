@class WBSSQLiteDatabase, NSURL, WBSSafariBookmarksSyncAgentProxy, NSObject;
@protocol OS_dispatch_queue;

@interface WBSPerSitePreferencesSQLiteStore : NSObject {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

@property (retain, nonatomic) WBSSafariBookmarksSyncAgentProxy *syncProxy;

+ (id)sharedStore;
+ (BOOL)isPreferenceSyncable:(id)a0;
+ (id)defaultDatabaseURL;
+ (id)staticSyncablePerSiteSettings;

- (id)init;
- (id)initWithDatabaseURL:(id)a0;
- (void)_setDeletedCloudKitSyncData:(id)a0 forRecordName:(id)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;
- (BOOL)_tryToPerformTransactionInBlock:(id /* block */)a0;
- (void)getDeletedCloudKitSyncDataForRecordName:(id)a0 completionHandler:(id /* block */)a1;
- (int)_migrateToSchemaVersion_5;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 completionHandler:(id /* block */)a3;
- (void)_closeDatabase;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (int)_migrateToSchemaVersion_2;
- (void)removePreferenceValueWithRecordName:(id)a0 completionHandler:(id /* block */)a1;
- (id)defaultValueForPreference:(id)a0;
- (int)_migrateToSchemaVersion_6;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 withTimestamp:(id)a3 completionHandler:(id /* block */)a4;
- (void)removeTombstoneWithRecordName:(id)a0 completionHandler:(id /* block */)a1;
- (void)removePreferenceValuesForDomainPrefixes:(id)a0 fromPreferences:(id)a1 completionHandler:(id /* block */)a2;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (int)_migrateToSchemaVersion_4;
- (void)removeAllPreferenceValuesFromPreferences:(id)a0 completionHandler:(id /* block */)a1;
- (void)closeDatabase;
- (void)_openDatabaseIfNecessary;
- (void)getValueOfPreference:(id)a0 forDomain:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (BOOL)_migrateToSchemaVersion:(int)a0;
- (id)_valueOfPreferences:(id)a0 forDomain:(id)a1;
- (int)_createFreshDatabaseSchema;
- (void)_setSyncData:(id)a0 forPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)getTimestampAndValueOfPreference:(id)a0 forDomain:(id)a1 completionHandler:(id /* block */)a2;
- (void)savePerSiteSettingCloudKitRecordToDisk:(id)a0 completionHandler:(id /* block */)a1;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 includeTimestamp:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (void)getValuesOfPreferences:(id)a0 forDomain:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (id)_queryListForPreferences:(id)a0;
- (void)getAllPreferenceInformationForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (id)valueOfPreference:(id)a0 forDomain:(id)a1;
- (void)removePreferenceValuesForDomains:(id)a0 fromPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)_openDatabase;
- (void)getSyncDataForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (id)_defaultValueForPreference:(id)a0;
- (void)removeAllPreferenceValuesFromPreference:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_isDatabaseOpen;
- (void)_setSyncData:(id)a0 forPreference:(id)a1 domain:(id)a2 recordName:(id)a3 completionHandler:(id /* block */)a4;
- (void)getDefaultValueForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (int)_migrateToSchemaVersion_3;
- (void)removeAllSyncData;
- (void)removeAllCloudKitRecordsWithCompletionHandler:(id /* block */)a0;
- (void)getSyncDataForPreference:(id)a0 domain:(id)a1 completionHandler:(id /* block */)a2;
- (void)setDefaultValue:(id)a0 forPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)getValuesOfPreference:(id)a0 forDomains:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (void)getAllDomainsConfiguredForPreference:(id)a0 completionHandler:(id /* block */)a1;

@end
