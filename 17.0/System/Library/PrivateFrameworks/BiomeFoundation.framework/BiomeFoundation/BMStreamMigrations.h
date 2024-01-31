@interface BMStreamMigrations : NSObject

+ (id)libraryPathForStreamIdentifier:(id)a0;
+ (id)legacyClassNameForLibraryStream:(id)a0;
+ (long long)handleFloatReturnValue:(id)a0;
+ (id)libraryRestrictedStreamMigrationPaths;
+ (id)pathToVersionFile;
+ (long long)readCurrentDatabaseVersion;
+ (void)setDatabaseVersion:(long long)a0;

- (void)migrate;
- (void)migrateFromVersion:(long long)a0;
- (void)_migrateStreamsToLibrary:(id)a0 streamType:(unsigned long long)a1;
- (void)_moveStreamsWithPathMapping:(id)a0;
- (void)_removeStreamPaths:(id)a0;

@end
