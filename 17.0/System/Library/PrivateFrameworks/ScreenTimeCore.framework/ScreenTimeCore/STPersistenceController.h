@class STDebouncer, NSString, NSManagedObjectContext, NSPersistentStore, NSObject, NSPersistentContainer;
@protocol OS_dispatch_queue, STPersistentStoreChangeHandler;

@interface STPersistenceController : NSObject <STDebouncerDelegate, STPersistenceControllerProtocol>

@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *coreDataQueue;
@property (readonly) id<STPersistentStoreChangeHandler> changeHandler;
@property (readonly) STDebouncer *changeNotificationDebouncer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSManagedObjectContext *viewContext;
@property (readonly, nonatomic) BOOL hasStoreLoaded;
@property (readonly) NSPersistentStore *localStore;
@property (readonly) NSPersistentStore *cloudStore;

- (id)newBackgroundContext;
- (id)init;
- (void).cxx_destruct;
- (void)performBackgroundTask:(id /* block */)a0;
- (void)remotePersistentStoreDidChange:(id)a0;
- (void)_logAboutMissingStoreName:(id)a0;
- (void)_persistentStoreCoordinatorStoresDidChange:(id)a0;
- (void)_remotePersistentStoreChangesDidCoalesce:(id)a0;
- (void)debouncer:(id)a0 didDebounce:(id)a1;
- (id)descriptionForPersistentStore:(id)a0;
- (id)initWithPersistentContainer:(id)a0 persistentStoreChangeHandler:(id)a1 notificationDebouncer:(id)a2;
- (void)performBackgroundTaskAndWait:(id /* block */)a0;
- (BOOL)saveContext:(id)a0 error:(id *)a1;

@end
