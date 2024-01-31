@class NSManagedObjectModel, NSXPCStoreServer, NSPersistentStoreCoordinator, NSManagedObjectContext;

@interface AnalyticsPersistenceManager : NSObject

@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSManagedObjectContext *persistenceContext;
@property (retain, nonatomic) NSXPCStoreServer *xpcStoreServer;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistenceCoordinator;

+ (BOOL)isStoreCompatibleAtURL:(id)a0 withModel:(id)a1;

- (void).cxx_destruct;
- (id)initWithManagedObjectModel:(id)a0 storeDescriptor:(id)a1;

@end
