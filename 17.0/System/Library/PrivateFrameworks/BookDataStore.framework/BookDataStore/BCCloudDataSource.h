@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface BCCloudDataSource : NSObject <BDSCloudKitSupportSignOutDeleteWithoutInstance>

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (id)_documentsDirectoryURL;
+ (id)_sharedLegacyRootDirectoryURL;
+ (id)_sharedRootDirectoryURL;
+ (void)deleteCloudDataWithCompletion:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithManagedObjectModel:(id)a0;
- (id)_persistentStoreOptions;
- (BOOL)_addStoreAtURL:(id)a0;
- (void)_createDirectoryForStoreAtURL:(id)a0;
- (void)_deleteDirectoryForStoreAtURL:(id)a0;
- (BOOL)_directoryExistsForStoreAtURL:(id)a0;
- (void)_logIf:(BOOL)a0 error:(id)a1 operation:(id)a2;
- (void)_migrateAndDestroyStoreAtLegacyURL:(id)a0 toModernURL:(id)a1;
- (void)_setupManagedObjectContext;
- (BOOL)_setupPersistentStoreWithRootDirectoryURL:(id)a0 legacyRootDirectoryURL:(id)a1 nameOnDisk:(id)a2;
- (id)initWithManagedObjectModel:(id)a0 nameOnDisk:(id)a1;
- (id)initWithManagedObjectModel:(id)a0 rootDirectoryURL:(id)a1 legacyRootDirectoryURL:(id)a2 nameOnDisk:(id)a3;

@end
