@class NSString, NSManagedObjectModel, NSURL, NSPersistentStoreCoordinator, NSManagedObjectContext;

@interface CLSDBCache : NSObject

@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, copy, nonatomic) NSURL *diskCacheURL;
@property (readonly, copy, nonatomic) NSString *dataModelName;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) BOOL supportsVersioning;

+ (void)initialize;
+ (id)defaultCacheName;
+ (id)defaultCache;
+ (id)applicationDataUrlQueueWithURL:(id)a0;
+ (id)currentApplicationDataUrlQueue;
+ (id)diskCacheWithName:(id)a0;
+ (BOOL)locationIsValidForDatabaseAtURL:(id)a0;
+ (id)urlForGraphApplicationData;

- (id)formatVersion;
- (BOOL)_save;
- (id)initAtURL:(id)a0;
- (BOOL)save;
- (void).cxx_destruct;
- (void)invalidateMemoryCaches;
- (id)initWithDiskCacheName:(id)a0;
- (void)invalidateDiskCaches;
- (void)_resetCoreDataStack;
- (void)_saveAsync;
- (id)initWithDiskCacheName:(id)a0 dataModelName:(id)a1;

@end
