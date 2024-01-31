@class NSMapTable, NSString, NSManagedObjectContext, NSMutableDictionary, NSObject, NSMutableSet, HMDCoreDataCloudTransformMergePolicy, HMDCoreData;
@protocol OS_os_log, HMMLogEventSubmitting, HMDCoreDataCloudTransformDelegate;

@interface HMDCoreDataCloudTransform : HMFObject <HMDCoreDataCloudTransformDelegate, HMFLogging, HMDCoreDataNotificationListener> {
    NSObject<OS_os_log> *_logger;
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
    unsigned long long _importSignpostID;
    HMDCoreDataCloudTransformMergePolicy *_mergePolicy;
    BOOL _fakeRecordsEnabled;
    NSManagedObjectContext *_lazyManagedObjectContext;
    NSMutableSet *_pendingChangedStoreIdentifiers;
    NSMutableSet *_cloudImportInProgressStoreIdentifiers;
    HMDCoreData *_coreData;
    id<HMMLogEventSubmitting> _logEventSubmitter;
    NSMutableDictionary *_historyTokensByStoreIdentifier;
    NSMapTable *_cloudChangeListeners;
}

@property (class, readonly, nonatomic) HMDCoreDataCloudTransform *sharedInstance;

@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (weak, nonatomic) id<HMDCoreDataCloudTransformDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)exportTransformableClassFromEntity:(id)a0;
+ (id)new;
+ (BOOL)transactionIsCloudStoreReset:(id)a0 context:(id)a1;
+ (id)localTransformableEntityFromEntity:(id)a0;
+ (void)wipeCoreDataStorageDueToPCSIdentityLossAndRelaunchHomeKitDaemon;
+ (Class)importTransformableClassFromEntity:(id)a0;
+ (id)exportTransformableEntityFromEntity:(id)a0;
+ (id)logCategory;

- (id)init;
- (void)coreData:(id)a0 cloudKitImportFinishedForStoreWithIdentifier:(id)a1 duration:(double)a2 error:(id)a3;
- (id)initWithCoreData:(id)a0 logEventSubmitter:(id)a1;
- (void)coreData:(id)a0 cloudKitImportStartedForStoreWithIdentifier:(id)a1;
- (void)coreData:(id)a0 cloudKitExportStartedForStoreWithIdentifier:(id)a1;
- (void)runTransformWithCompletion:(id /* block */)a0;
- (void)registerCloudChangeListener:(id)a0 forEntities:(id)a1;
- (void)coreData:(id)a0 persistentStoreWithIdentifierDidChange:(id)a1;
- (void)countResidentsInHomeWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)runCompleteMergeTransformForHomeWithModelID:(id)a0 completion:(id /* block */)a1;
- (id)newCloudMirrorExportStatusMonitor;
- (void).cxx_destruct;
- (void)coreData:(id)a0 cloudKitExportFinishedForStoreWithIdentifier:(id)a1 duration:(double)a2 error:(id)a3;
- (BOOL)runTransformWithError:(id *)a0;
- (id)initWithCoreData:(id)a0 fakeRecordsEnabled:(BOOL)a1 logEventSubmitter:(id)a2;
- (BOOL)cloudTransform:(id)a0 isPermittedForHomeWithModelID:(id)a1 isImport:(BOOL)a2;

@end
