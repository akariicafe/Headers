@class WebBookmarksXPCConnection;

@interface WebBookmarksSettingsGateway : NSObject {
    WebBookmarksXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)schedulePasswordIconsCleanup;
- (void)clearHistoryVisitsAddedAfterDate:(id)a0 beforeDate:(id)a1 profileIdentifiers:(id)a2 options:(long long)a3 completionHandler:(id /* block */)a4;
- (void)deleteAllSafariSecurityOriginsForProfileWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSafariPersistentURLCacheStorageWithCompletionHandler:(id /* block */)a0;
- (void)deleteSafariWebsiteDataRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)getSafariDataUsageByteCountWithCompletionHandler:(id /* block */)a0;
- (void)getSafariWebDataUsageWithCompletion:(id /* block */)a0;
- (void)scheduleBookmarksDatabaseMaintenance;
- (void)scheduleBookmarksDatabaseMigrationTask;
- (void)scheduleHSTSSuperCookieCleanup;

@end
