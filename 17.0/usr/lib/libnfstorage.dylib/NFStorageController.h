@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface NFStorageController : NSObject <NFStorageInternalMethods>

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void).cxx_destruct;
- (id)dbPath;
- (id)homePath;

@end
