@class NSUUID, NSArray, NSURL, NSSet, NSMutableDictionary, NSOrderedSet, NSDictionary, NSNumber;

@interface PBFPosterExtensionDataStoreIntrospector : NSObject {
    NSArray *_extensionStoreCoordinators;
    NSURL *_dataStoreURL;
    NSURL *_dataStoreExtensionsURL;
    NSURL *_dataStoreDatabaseURL;
    BOOL _dataStoreDatabaseExists;
    NSOrderedSet *_legacySortedPosterUUIDs;
    NSUUID *_legacySelectedPosterUUID;
    NSDictionary *_legacyPosterToAssociatedPoster;
    NSMutableDictionary *_roleToSelectedPosterUUID;
    NSMutableDictionary *_roleToSortedPosterUUID;
    NSMutableDictionary *_roleToParentToChildPosterUUID;
    NSSet *_snapshotURLs;
    NSDictionary *_latestPathsForProviders;
    NSDictionary *_posterToAssociatedPoster;
    NSNumber *_snapshotsExistSentinel;
    NSNumber *_descriptorsExistSentinel;
    NSNumber *_userConfigurationDataExistsSentinel;
    NSNumber *_multipleVersionsForConfigurationDataExistsSentinel;
}

@property (readonly, nonatomic) NSSet *providers;
@property (readonly, nonatomic) unsigned long long dataStoreVersion;
@property (readonly, nonatomic) NSSet *snapshotURLs;
@property (readonly, nonatomic) NSSet *roles;
@property (readonly, nonatomic) BOOL snapshotsExist;
@property (readonly, nonatomic) BOOL descriptorsExist;
@property (readonly, nonatomic) BOOL userConfigurationDataExists;
@property (readonly, nonatomic) BOOL multipleVersionsForConfigurationDataExists;
@property (readonly, nonatomic) BOOL legacyAssocPostersExist;
@property (readonly, nonatomic) BOOL assocPostersExist;

- (id)initWithURL:(id)a0 error:(out id *)a1;
- (void).cxx_destruct;
- (id)posterWithUUID:(id)a0;
- (void)_hydrate;
- (id)sortedPosterUUIDsForRole:(id)a0 error:(out id *)a1;
- (id)_openDatabaseIfPossible:(out id *)a0;
- (id)associatedPosterForRole:(id)a0 parentPosterUUID:(id)a1;
- (id)associatedPosterUUIDForPosterUUIDForRole:(id)a0 error:(out id *)a1;
- (id)associatedPosterUUIDForRole:(id)a0 parentPosterUUID:(id)a1 error:(out id *)a2;
- (id)extensionStoreCoordinatorForProvider:(id)a0;
- (id)legacyAssociatedPosterForParentPosterUUID:(id)a0;
- (id)legacyAssociatedPosterParentUUIDToChildUUIDWithError:(out id *)a0;
- (id)legacyAssociatedPosterUUIDForPosterUUID:(id)a0 error:(out id *)a1;
- (id)legacySelectedPosterUUIDWithError:(out id *)a0;
- (id)legacySortedPosterUUIDsWithError:(out id *)a0;
- (unsigned long long)numberOfPostersForRole:(id)a0;
- (id)selectedPosterUUIDForRole:(id)a0 error:(out id *)a1;

@end
