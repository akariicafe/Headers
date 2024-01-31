@class NSPersistentContainer;

@interface CHCoreDataController : NSObject

@property (readonly) NSPersistentContainer *persistentContainer;

- (void).cxx_destruct;
- (void)addPersistentStoreFromDatabase;

@end
