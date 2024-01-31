@class NSArray, NSString, MIBundleContainer, NSURL, MIExecutableBundle;

@interface MIInstalledInfoGatherer : NSObject

@property (readonly, nonatomic) MIExecutableBundle *bundle;
@property (readonly, nonatomic) MIExecutableBundle *builtInAppParallelPlaceholderBundle;
@property (readonly, nonatomic) MIBundleContainer *bundleContainer;
@property (readonly, nonatomic) NSArray *personaUniqueStrings;
@property (readonly, nonatomic) NSArray *dataContainers;
@property (readonly, nonatomic) NSString *owningBundleIdentifier;
@property (readonly, nonatomic) NSURL *parentBundleURL;

- (void).cxx_destruct;
- (id)_staticDiskUsage;
- (void)_initWithBundle:(id)a0 dataContainers:(id)a1;
- (id)_buildBundlePersonaRecordWithDataContainer:(id)a0;
- (void)_fixUpForBuiltInAppParallelPlaceholder;
- (id)_groupContainersDictionaryForPersona:(id)a0;
- (void)_initWithAppExtensionBundle:(id)a0 inBundleIdentifier:(id)a1 dataContainers:(id)a2;
- (void)_initWithBundleContainer:(id)a0 dataContainers:(id)a1;
- (void)_initWithBundleContainer:(id)a0 forPersonas:(id)a1;
- (void)_populateAppExtensionRecordValues:(id)a0;
- (void)_populateAppRecordValues:(id)a0;
- (BOOL)_populateBundleRecord:(id)a0 error:(id *)a1;
- (BOOL)_populateBundleRecordValues:(id)a0 signingInfo:(id)a1 error:(id *)a2;
- (void)_populatePlaceholderRecordValues:(id)a0 signingInfo:(id)a1;
- (id)_sandboxEnvironmentForDataContainer:(id)a0;
- (id)_stashedAppRecordForStashedContainer:(id)a0;
- (id)bundleRecordWithError:(id *)a0;
- (id)initWithAppExtensionBundle:(id)a0 inBundleIdentifier:(id)a1 dataContainer:(id)a2;
- (id)initWithAppExtensionBundle:(id)a0 inBundleIdentifier:(id)a1 dataContainers:(id)a2;
- (id)initWithBundle:(id)a0 dataContainer:(id)a1;
- (id)initWithBundle:(id)a0 dataContainers:(id)a1;
- (id)initWithBundleContainer:(id)a0 dataContainer:(id)a1;
- (id)initWithBundleContainer:(id)a0 dataContainers:(id)a1;
- (id)initWithBundleContainer:(id)a0 forPersona:(id)a1;
- (id)initWithBundleContainer:(id)a0 forPersonas:(id)a1;

@end
