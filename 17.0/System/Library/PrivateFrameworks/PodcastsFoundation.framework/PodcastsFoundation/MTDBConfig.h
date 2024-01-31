@class NSManagedObjectModel;

@interface MTDBConfig : NSObject <MTCoreDataContainerConfigProvider>

@property (retain, nonatomic) NSManagedObjectModel *model;

- (id)managedObjectModel;
- (void).cxx_destruct;
- (id)persistentStoreOptions;
- (id)databaseFileUrl;

@end
