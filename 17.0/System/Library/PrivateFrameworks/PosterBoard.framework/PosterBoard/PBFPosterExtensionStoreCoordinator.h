@class NSDate, NSString, NSURL, NSMutableDictionary, NSDictionary, BSAtomicFlag, NSFileManager, BSBuildVersion;

@interface PBFPosterExtensionStoreCoordinator : NSObject <PBFDataComponentRefreshStateProviding, PBFPosterSnapshotCoordinatorProviding, BSInvalidatable> {
    NSURL *_descriptorsContainerURL;
    NSURL *_staticDescriptorsContainerURL;
    NSURL *_configurationContainerURL;
    NSURL *_transientInternalInfoURL;
    NSURL *_providerInfoURL;
    NSDictionary *_accessLock_providerInfo;
    NSDictionary *_accessLock_transientInfo;
    NSMutableDictionary *_accessLock_posterDescriptorStoreCoordinatorsForUUID;
    NSMutableDictionary *_accessLock_staticPosterDescriptorStoreCoordinatorsForUUID;
    NSMutableDictionary *_accessLock_posterConfigurationStoreCoordinatorsForUUID;
    NSMutableDictionary *_accessLock_stagedPosterConfigurationStoreCoordinatorsForUUID;
    NSFileManager *_fileManager;
    BSAtomicFlag *_invalidationFlag;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
}

@property (readonly, copy, nonatomic) NSURL *containerURL;
@property (readonly, copy, nonatomic) NSString *extensionIdentifier;
@property (readonly, nonatomic) BOOL readonly;
@property (readonly, copy, nonatomic) BSBuildVersion *lastRefreshStashedBuildVersion;
@property (readonly, copy, nonatomic) NSDate *lastRefreshDescriptorDate;
@property (readonly, copy, nonatomic) NSString *lastRefreshDescriptorReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerInfoURLForContainerURL:(id)a0;

- (id)init;
- (id)createStaticDescriptorStoreCoordinatorForIdentifier:(id)a0 role:(id)a1 error:(out id *)a2;
- (void)deleteProviderInfo;
- (void)enumerateDescriptorStoreCoordinators:(id /* block */)a0;
- (id)providerInfoObjectForKey:(id)a0;
- (id)pbf_posterSnapshotCoordinatorForIdentity:(id)a0;
- (id)modelStoreCoordinatorForPosterUUID:(id)a0;
- (void)abortStaged;
- (id)staticDescriptorStoreCoordinatorsWithError:(out id *)a0;
- (void)purgeSnapshotCache;
- (void)pbf_enumerateSnapshotCoordinators:(id /* block */)a0;
- (id)initWithContainerURL:(id)a0 extensionIdentifier:(id)a1 readonly:(BOOL)a2;
- (void)reapSnapshotsMatchingURLs:(id)a0;
- (id)configurationStoreCoordinatorForPosterUUID:(id)a0;
- (id)dynamicDescriptorStoreCoordinatorForPosterUUID:(id)a0;
- (BOOL)teardownConfigurationStoreCoordinatorForPosterUUID:(id)a0 version:(unsigned long long)a1 error:(out id *)a2;
- (id)dynamicPosterDescriptorLatestVersionPaths;
- (void)invalidate;
- (id)createConfigurationStoreCoordinatorForPosterUUID:(id)a0 descriptorIdentifier:(id)a1 role:(id)a2 error:(id *)a3;
- (void)enumerateConfigurationStoreCoordinators:(id /* block */)a0;
- (void)enumerateDynamicDescriptorStoreCoordinators:(id /* block */)a0;
- (id)staticDescriptorStoreCoordinatorForIdentifier:(id)a0;
- (void)teardownAllDynamicDescriptors;
- (id)initWithContainerURL:(id)a0 extensionIdentifier:(id)a1;
- (BOOL)providerInfoSetObject:(id)a0 forKey:(id)a1;
- (id)deleteEnvironment;
- (void)enumerateStaticDescriptorStoreCoordinators:(id /* block */)a0;
- (id)latestPosterConfigurationForUUID:(id)a0;
- (id)setupEnvironmentIfNecessary;
- (id)ensureFileSystemIntegrity;
- (void)removeLastRefreshDescriptorDate;
- (BOOL)commitStagedWithError:(out id *)a0;
- (id)configurationStoreCoordinatorsWithError:(id *)a0;
- (id)stageNewConfigurationStoreCoordinatorForPosterUUID:(id)a0 descriptorIdentifier:(id)a1 role:(id)a2 error:(out id *)a3;
- (BOOL)providerInfoSetObject:(id)a0 forKey:(id)a1 error:(out id *)a2;
- (void).cxx_destruct;
- (id)dynamicDescriptorStoreCoordinatorForIdentifier:(id)a0;
- (id)determineRefreshStateWithContext:(id)a0;
- (id)staticDescriptorStoreCoordinatorForPosterUUID:(id)a0;
- (void)updateLastRefreshDescriptorDateWithReason:(id)a0;
- (void)teardownAllStaticDescriptorStoreCoordinators;
- (id)posterStaticDescriptorLatestVersionPaths;
- (BOOL)teardownConfigurationStoreCoordinatorForPosterUUID:(id)a0 error:(id *)a1;
- (id)createDynamicDescriptorStoreCoordinatorForIdentifier:(id)a0 role:(id)a1 error:(id *)a2;
- (id)dynamicDescriptorStoreCoordinatorsWithError:(id *)a0;
- (BOOL)teardownDynamicDescriptorStoreCoordinatorForPosterUUID:(id)a0 error:(id *)a1;
- (void)reapEverythingExceptLatestVersion;
- (id)dynamicDescriptorStoreCoordinatorForIdentifier:(id)a0 role:(id)a1 createIfNil:(BOOL)a2 error:(id *)a3;

@end
