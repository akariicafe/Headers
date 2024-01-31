@interface MTLibraryMigrationUtil : NSObject

+ (BOOL)createPersistentStoreForModel:(id)a0 attemptMigration:(BOOL)a1;
+ (BOOL)needsDataMigration;
+ (id)libraryImageStoreType;
+ (BOOL)needsCoreDataMigration;
+ (BOOL)isMomCompatible:(id)a0;
+ (BOOL)isNewInstall;
+ (void)setLibraryImageStoreType:(id)a0;
+ (BOOL)needsImageStoreMigration;

@end
