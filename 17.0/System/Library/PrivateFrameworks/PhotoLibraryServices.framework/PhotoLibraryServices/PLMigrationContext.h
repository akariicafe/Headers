@class NSPersistentStore, NSString, NSURL, PLCoreAnalyticsEventManager, PLPhotoLibraryPathManager, NSDictionary, PLModelMigrationHistory, NSPersistentStoreCoordinator, PLLazyObject;

@interface PLMigrationContext : NSObject <PLModelMigrationContext> {
    PLLazyObject *_lazyModelMigrationHistory;
}

@property (retain, nonatomic) NSPersistentStoreCoordinator *coordinator;
@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSDictionary *options;
@property (retain, nonatomic) PLCoreAnalyticsEventManager *analyticsEventManager;
@property (retain, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property unsigned short previousStoreVersion;
@property unsigned int policy;
@property long long libraryIdentifier;
@property (retain, nonatomic) NSPersistentStore *store;
@property (readonly) PLModelMigrationHistory *modelMigrationHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
