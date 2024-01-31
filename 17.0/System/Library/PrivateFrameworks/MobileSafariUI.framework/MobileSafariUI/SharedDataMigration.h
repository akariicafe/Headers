@interface SharedDataMigration : NSObject

+ (BOOL)_migrateCacheFileFromSubpath:(id)a0 toSubpath:(id)a1 ensureIsDirectory:(BOOL)a2;
+ (id)_userCachesDirectoryPath;
+ (void)migratePersistentStorageDefaults;
+ (BOOL)migrateRecentSearches;
+ (void)migrateTabDatabaseIfNeeded;
+ (BOOL)migrateThumbnails;

@end
