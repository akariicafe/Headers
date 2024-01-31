@interface MTConstants : NSObject

+ (id)sharedDocumentsDirectory;
+ (id)documentsDirectory;
+ (void)_repairFilePermissionsIfNeeded;
+ (id)sharedAssetsCacheURL;
+ (id)sharedContainerURL;
+ (BOOL)excludeDirectoryFromBackup:(id)a0;
+ (id)attributesForNewDirectory;
+ (id)artworkAssetURL;
+ (id)cachesDirectory;
+ (id)sharedCacheDirectory;
+ (void)repairPermissionsOfDirectoryIfNeeded:(id)a0;
+ (id)managedObjectModelDefinitionURL;
+ (id)managedAssetsDirectoryURL;
+ (id)dataAssetsCacheURL;
+ (void)removeExcludeFromBackupFlagFromDirectoryIfNeeded:(id)a0;
+ (id)libraryDirectory;
+ (id)_watchManagedAssetsDirectoryURL;

@end
