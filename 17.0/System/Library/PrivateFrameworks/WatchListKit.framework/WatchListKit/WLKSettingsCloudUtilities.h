@interface WLKSettingsCloudUtilities : NSObject

+ (id)_connection;
+ (id)_queue;
+ (void)forceUpdateWithCompletion:(id /* block */)a0;
+ (void)deleteAllHistoryWithCompletion:(id /* block */)a0;
+ (void)updateCloudStoreWithCompletion:(id /* block */)a0;
+ (void)_runResetAccountWithCompletion:(id /* block */)a0;
+ (void)updateLocalStoreWithCompletion:(id /* block */)a0;
+ (void)_cloudSyncEnabledWithCompletion:(id /* block */)a0;
+ (void)_fetchSyncDictionary:(id /* block */)a0;
+ (void)_postChangeDictionaryToCloud:(id)a0 completion:(id /* block */)a1;
+ (void)_runSynchronizeSettingsFromCloudIfNeededWithCompletion:(id /* block */)a0;
+ (void)_runUpdateCloudStoreAppSettings:(id)a0 deleteHistory:(BOOL)a1 removeEntry:(BOOL)a2 completion:(id /* block */)a3;
+ (BOOL)_shouldContinueWithCloudSyncResult:(BOOL)a0 onDisabledHandler:(id /* block */)a1;
+ (id)_syncDictionaryForAppSettings:(id)a0;
+ (id)_syncDictionaryForLocalStore;
+ (void)resetAccountWithCompletion:(id /* block */)a0;
+ (BOOL)synchronizeSettingsFromCloudIfNeeded:(id *)a0;
+ (void)synchronizeSettingsFromCloudIfNeededWithCompletion:(id /* block */)a0;
+ (void)updateCloudStoreAccountLevelSetting:(id)a0 value:(id)a1 completion:(id /* block */)a2;
+ (void)updateCloudStoreAppSettings:(id)a0 deleteHistory:(BOOL)a1 completion:(id /* block */)a2;
+ (void)updateCloudStoreAppSettings:(id)a0 deleteHistory:(BOOL)a1 removeEntry:(BOOL)a2 completion:(id /* block */)a3;

@end
