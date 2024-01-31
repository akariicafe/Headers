@class NSURL;

@interface MIDaemonConfiguration : MIGlobalConfiguration

@property (readonly, nonatomic) NSURL *daemonUserDataLibraryDirectory;
@property (readonly, nonatomic) unsigned int installQOSOverride;
@property (readonly, nonatomic) BOOL skipDeviceFamilyCheck;
@property (readonly, nonatomic) BOOL skipThinningCheck;
@property (readonly, nonatomic) BOOL allowPatchWithoutSinf;
@property (readonly, nonatomic) BOOL codeSigningEnforcementIsDisabled;
@property (readonly, nonatomic) BOOL localSigningIsUnrestricted;
@property (readonly, nonatomic) long long nSimultaneousInstallations;
@property (readonly, nonatomic) BOOL deviceHasPersonas;
@property (readonly, nonatomic) NSURL *journalStorageBaseURL;
@property (readonly, nonatomic) NSURL *currentUserJournalStorageBaseURL;
@property (readonly, nonatomic) NSURL *launchServicesOperationStorageBaseURL;
@property (readonly, nonatomic) NSURL *launchServicesOperationLookAsideStorageBaseURL;
@property (readonly, nonatomic) NSURL *currentUserLaunchServicesOperationStorageBaseURL;
@property (readonly, nonatomic) NSURL *currentUserLaunchServicesOperationLookAsideStorageBaseURL;
@property (readonly, nonatomic) unsigned long long estimatedAvailableMemoryForValidation;
@property (nonatomic) BOOL haveUpdatedAppExtensionDataContainersWithParentID;
@property (readonly, nonatomic) NSURL *currentUserDataDirectory;
@property (readonly, nonatomic) NSURL *currentUserCachesDirectory;
@property (nonatomic, getter=wasErroneousContainerCleanupDone) BOOL erroneousContainerCleanupDone;
@property (readonly, nonatomic) NSURL *stagingRootForSystemContent;
@property (readonly, nonatomic) NSURL *stagingRootForUserContent;

+ (id)sharedInstance;

- (id)init;
- (id)builtInApplicationBundleIDs;
- (id)stagingRootForIdentifier:(unsigned long long)a0;
- (id)stagingRootForURL:(id)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (id)initForTesting;
- (void).cxx_destruct;
- (id)stagingRootForDevice:(int)a0 url:(id)a1 identifier:(unsigned long long *)a2 error:(id *)a3;

@end
