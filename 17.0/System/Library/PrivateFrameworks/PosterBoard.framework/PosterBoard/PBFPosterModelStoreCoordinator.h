@class NSUUID, NSString, NSURL, NSSet, NSMutableDictionary, NSDictionary, NSObject, NSFileManager, NSMapTable;
@protocol OS_dispatch_queue;

@interface PBFPosterModelStoreCoordinator : NSObject <PBFPosterSnapshotCoordinatorProviding> {
    NSURL *_providerInfoURL;
    NSURL *_containerVersionsURL;
    NSURL *_providerURL;
    NSURL *_transientInternalInfoURL;
    NSString *_role;
    BOOL _readonly;
    NSMutableDictionary *_accessQueue_posterIdentityBySupplementByVersion;
    NSMutableDictionary *_accessQueue_stagedPosterIdentityBySupplementByVersion;
    NSMapTable *_accessQueue_identityToPosterSnapshotCoordinator;
}

@property (class, readonly, nonatomic) BOOL shouldBeExcludedFromBackup;
@property (class, readonly, nonatomic) NSString *expectedFileProtection;
@property (class, readonly, nonatomic) NSDictionary *expectedURLResourceValuesForFiles;
@property (class, readonly, nonatomic) NSDictionary *expectedURLResourceValuesForDirectories;
@property (class, readonly, nonatomic) long long type;

@property (readonly, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) NSString *extensionIdentifier;
@property (readonly, copy, nonatomic) NSURL *identifierURL;
@property (readonly, copy, nonatomic) NSUUID *posterUUID;
@property (readonly, copy, nonatomic) NSString *role;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;
@property (copy, nonatomic) NSDictionary *providerInfo;
@property (readonly, nonatomic) NSSet *snapshotURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresDescriptorIdentifier;
+ (id)createNewStoreCoordinatorWithPath:(id)a0 error:(id *)a1;
+ (id)expectedSnapshotURLResourceValues;

- (id)pbf_posterSnapshotCoordinatorForIdentity:(id)a0;
- (void)abortStaged;
- (void)purgeSnapshotCache;
- (void)pbf_enumerateSnapshotCoordinators:(id /* block */)a0;
- (id)reapSnapshotsMatchingURLs:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)invalidate;
- (id)ensureFileSystemIntegrity;
- (BOOL)commitStagedWithError:(out id *)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)_accessQueue_buildIdentityForVersion:(unsigned long long)a0 supplement:(unsigned long long)a1;
- (void)reapEverythingExceptLatestVersion;
- (void)_accessQueue_purgeSnapshotCache;
- (id)_accessQueue_allPosterPaths;
- (void)_accessQueue_applyResourceValuesForURLs:(id)a0 expectedResourceValues:(id)a1 synchronous:(BOOL)a2;
- (id)_accessQueue_checkEnvironmentConsistency;
- (BOOL)_accessQueue_configureFileSystemForNewContents:(id)a0 atPath:(id)a1 error:(out id *)a2;
- (id)_accessQueue_contentsOfURLWithinStore:(id)a0 resourceKeys:(id)a1 standardizeURLs:(BOOL)a2;
- (void)_accessQueue_enumerateSnapshotCoordinators:(id /* block */)a0;
- (id)_accessQueue_fetchIdentityForVersion:(unsigned long long)a0 supplement:(unsigned long long)a1 error:(id *)a2;
- (void)_accessQueue_fixupResourceValuesWithinURL:(id)a0 synchronous:(BOOL)a1;
- (id)_accessQueue_identityOfLatestVersion;
- (void)_accessQueue_invalidate;
- (id)_accessQueue_posterPathForIdentity:(id)a0;
- (id)_accessQueue_posterSnapshotCoordinatorForIdentity:(id)a0;
- (id)_accessQueue_providerInfoWithError:(out id *)a0;
- (void)_accessQueue_removeSupplement:(unsigned long long)a0 forVersion:(unsigned long long)a1 error:(out id *)a2;
- (id)_accessQueue_setupNewSupplementWithOptions:(unsigned long long)a0 error:(out id *)a1;
- (id)_accessQueue_setupNewVersionWithOptions:(unsigned long long)a0 contents:(id)a1 error:(out id *)a2;
- (id)_accessQueue_snapshotURLs;
- (void)_accessQueue_writeProviderInfo:(id)a0 error:(out id *)a1;
- (void)_correctPermissionsForInternalDirectories:(out id *)a0;
- (id)_posterPathForIdentity:(id)a0;
- (id)addNewSupplementWithError:(out id *)a0;
- (id)addNewVersionWithContents:(id)a0 error:(out id *)a1;
- (id)allPosterPaths;
- (id)checkEnvironmentConsistency;
- (BOOL)hasKnownVersions;
- (id)identityForVersion:(unsigned long long)a0 supplement:(unsigned long long)a1;
- (id)identityOfLatestVersion;
- (id)initWithProvider:(id)a0 identifierURL:(id)a1 posterUUID:(id)a2;
- (id)initWithProvider:(id)a0 identifierURL:(id)a1 posterUUID:(id)a2 readonly:(BOOL)a3;
- (id)pathForIdentity:(id)a0;
- (id)pathForVersion:(unsigned long long)a0 supplement:(unsigned long long)a1;
- (id)pathOfLatestVersion;
- (void)reapSnapshots;
- (void)removeSupplement:(unsigned long long)a0 forVersion:(unsigned long long)a1 error:(out id *)a2;
- (BOOL)setProviderInfo:(id)a0 error:(out id *)a1;
- (id)stageNewSupplementWithError:(out id *)a0;
- (id)stageNewVersionWithContents:(id)a0 error:(out id *)a1;

@end
