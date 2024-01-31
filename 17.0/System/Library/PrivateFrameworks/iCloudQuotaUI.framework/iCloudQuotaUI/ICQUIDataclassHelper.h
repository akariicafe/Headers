@interface ICQUIDataclassHelper : NSObject

+ (BOOL)isBackupEnabledForAccount:(id)a0;
+ (BOOL)_isPhotosDataclass:(id)a0;
+ (id)dataclassesToEnableForAccount:(id)a0 excludedApps:(id)a1;
+ (void)enableDataclass:(id)a0 forAccount:(id)a1 completion:(id /* block */)a2;
+ (id)enabledAppsForAccount:(id)a0 deprioritizedApps:(id)a1;
+ (id)footerTextForSyncWithiCloudSpecifiersFromDataclasses:(id)a0 forAccount:(id)a1;
+ (id)iconForDataclass:(id)a0;
+ (BOOL)isSharedPhotoLibraryEnabled;
+ (BOOL)isiCPLEnabledForAccount:(id)a0;
+ (id)localizedTextForDataclass:(id)a0;
+ (id)unsyncedDataclassesExcludingPhotosForAccount:(id)a0;

@end
