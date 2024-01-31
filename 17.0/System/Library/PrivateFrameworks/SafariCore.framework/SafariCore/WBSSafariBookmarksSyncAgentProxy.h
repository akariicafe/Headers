@class NSString, NSXPCConnection;

@interface WBSSafariBookmarksSyncAgentProxy : NSObject <WBSSafariBookmarksSyncAgentProtocol>

@property (retain) NSXPCConnection *_safariBookmarksSyncAgentConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProxy;

- (void)getCloudExtensionStatesWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)a0 deviceUUIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)saveExtensionDeviceWithDictionaryRepresentation:(id)a0 completionHandler:(id /* block */)a1;
- (void)getCloudTabDevicesWithCompletionHandler:(id /* block */)a0;
- (void)fetchCloudTabDevicesAndCloseRequests;
- (void)fetchRemoteMigrationStateWithCompletionHandler:(id /* block */)a0;
- (void)getCloudSettingsContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (void)beginMigrationFromDAV;
- (void)getCloudTabContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (void)fetchCloudSettingsChangesImmediately;
- (void)deleteDevicesWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)observeRemoteMigrationStateForSecondaryMigration;
- (void)migrateToCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)syncDownSafariSettingsSyncWithCompletion:(id /* block */)a0;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(id /* block */)a0;
- (void)triggerImmediateBackgroundImageSaveIfApplicable;
- (void)fetchProfileEntitiesWithCompletion:(id /* block */)a0;
- (void)fetchTabGroupEntitiesWithCompletion:(id /* block */)a0;
- (void)syncUpSafariPerSiteSettingsSyncWithCompletion:(id /* block */)a0;
- (void)setUsesOpportunisticPushTopic:(BOOL)a0;
- (void)deletePerSiteSettingsSyncData;
- (void)triggerSafariTabGroupSync;
- (void)userAccountDidChange:(long long)a0;
- (void)deleteCloudExtensionStatesDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)resetToDAVDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)saveCloudSettingWithDictionaryRepresentation:(id)a0 successCompletionHandler:(id /* block */)a1;
- (void)saveCloudPerSiteSettingWithDictionaryRepresentation:(id)a0 successCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)deleteBackgroundImageFromCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(id /* block */)a0;
- (void)clearLocalDataIncludingMigrationState:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)syncDownSafariPerSiteSettingsSyncWithCompletion:(id /* block */)a0;
- (void)collectDiagnosticsDataWithCompletionHandler:(id /* block */)a0;
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)a0 closeRequestUUIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)syncUpSafariSettingsSyncWithCompletion:(id /* block */)a0;
- (void)scheduleCloudBackgroundImageSaveWithURL:(id)a0 isLightAppearance:(BOOL)a1 successCompletionHandler:(id /* block */)a2;
- (void)deleteCloudExtensionDevicesWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerForPushNotificationsIfNeeded;
- (void)deleteBackgroundImageDirectory;
- (void)userDidUpdateBookmarkDatabase;
- (void)saveExtensionStatesWithDictionaryRepresentation:(id)a0 forDevice:(id)a1 completionHandler:(id /* block */)a2;

@end
