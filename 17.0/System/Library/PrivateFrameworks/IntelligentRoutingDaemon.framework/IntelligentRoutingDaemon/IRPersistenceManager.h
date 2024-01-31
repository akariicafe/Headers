@class IRDataContainer, NSManagedObjectModel, IRPersistenceStore, NSPersistentStoreCoordinator, NSURL;

@interface IRPersistenceManager : NSObject {
    NSURL *_modelsDirectory;
    NSURL *_storesDirectory;
    IRDataContainer *_dataContainer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (retain, nonatomic) IRPersistenceStore *persistenceStore;

+ (id)defaultModelsDirectory;

- (id)init;
- (id)createManagedObjectContext;
- (id)initWithModelsDirectory:(id)a0 storesDirectory:(id)a1;
- (void).cxx_destruct;
- (void)_enableConcurrencyDebug;
- (id)_getDefaultStoresDirectory;
- (BOOL)_isStoreConnected;
- (BOOL)connectToStore;
- (BOOL)disconnectFromStore;
- (id)getLocalStoreURL;

@end
