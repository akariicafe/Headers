@class HMFPromise, NSMapTable, NSObject, NSManagedObjectModel, HMFFuture, NSString, NSSet, NSHashTable, HMCContext, NSUserDefaults, NSPersistentCloudKitContainer, NSArray, NSPersistentStore, NSPersistentStoreCoordinator, NSPersistentStoreDescription;
@protocol OS_os_log, HMDCoreDataNotificationCenter;

@interface HMDCoreData : HMFObject <HMFLogging> {
    NSObject<OS_os_log> *_logger;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _setupSignpostID;
    BOOL _firstCloudKitImportComplete;
    BOOL _usingLiveCloudKit;
    NSPersistentStore *_workingStore;
    NSPersistentStore *_cloudPrivateStore;
    NSPersistentStore *_cloudSharedStore;
    NSPersistentStore *_localStore;
    NSHashTable *_listeners;
    NSMapTable *_contexts;
    HMFPromise *_firstCloudKitImportPromise;
    NSUserDefaults *_userDefaults;
}

@property (class, readonly, copy, nonatomic) NSPersistentStoreDescription *cloudPrivateStoreDescription;
@property (class, readonly, copy, nonatomic) NSPersistentStoreDescription *cloudSharedStoreDescription;
@property (class, readonly, copy, nonatomic) NSPersistentStoreDescription *localStoreDescription;
@property (class, readonly, copy, nonatomic) NSPersistentStoreDescription *workingStoreDescription;
@property (class, readonly, copy, nonatomic) NSArray *defaultPersistentStoreDescriptions;
@property (class, readonly, nonatomic) HMDCoreData *sharedInstance;
@property (class, readonly, nonatomic) NSManagedObjectModel *managedObjectModel;

@property (readonly, copy, nonatomic) NSSet *allContexts;
@property (readonly, nonatomic) id<HMDCoreDataNotificationCenter> notificationCenter;
@property (readonly, nonatomic) HMFFuture *firstCloudKitImportFuture;
@property (readonly, nonatomic) NSPersistentCloudKitContainer *container;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *coordinator;
@property (readonly, nonatomic) NSPersistentStore *workingStore;
@property (readonly, nonatomic) NSPersistentStore *cloudPrivateStore;
@property (readonly, nonatomic) NSPersistentStore *cloudSharedStore;
@property (readonly, nonatomic) NSPersistentStore *localStore;
@property (readonly, nonatomic) HMCContext *contextWithRootPartition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithDefaultPersistentStoresWithoutLiveCloudKit;
+ (void)cleanUpSharedInstance;
+ (id)createWithPersistentStoreDescriptions:(id)a0;
+ (id)createWithPersistentStoreDescriptions:(id)a0 notificationCenter:(id)a1 userDefaults:(id)a2;
+ (id)logCategory;

- (id)newManagedObjectContext;
- (void)startWatchingManagedObjectChanges;
- (void)addNotificationListener:(id)a0;
- (BOOL)isRelatedContext:(id)a0;
- (id)dumpCloudKitConfiguration:(BOOL)a0 localConfiguration:(BOOL)a1 workingConfiguration:(BOOL)a2 includeFakeModels:(BOOL)a3 context:(id)a4 error:(id *)a5;
- (id)dumpConfiguration:(id)a0 includeFakeModels:(BOOL)a1 context:(id)a2 error:(id *)a3;
- (void)stopWatchingManagedObjectChanges;
- (void)_handleChangeNotification:(id)a0;
- (id)initWithCloudKitContainer:(id)a0 notificationCenter:(id)a1 userDefaults:(id)a2;
- (id)contextWithHomeUUID:(id)a0;
- (void).cxx_destruct;
- (void)_handleDidResetSyncNotification:(id)a0;
- (void)_handlePersistentCloudKitContainerEventChangedNotification:(id)a0;
- (BOOL)_shouldPruneWorkingStoreHistory;
- (void)_handleWillResetSyncNotification:(id)a0;
- (id)initWithPersistentStoreDescriptions:(id)a0 notificationCenter:(id)a1 userDefaults:(id)a2;
- (BOOL)_pruneWorkingStoreHistoryWhenHistoryPercentageOfStoreIsGreaterThan:(long long)a0;
- (void)removeNotificationListener:(id)a0;

@end
