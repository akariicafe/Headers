@class CardDAVLocalDBHelper, NSString, DACoreDAVLogger, CoreDAVDiscoveryTaskGroup, DACoreDAVTaskManager;

@interface CardDAVAccount : DAAccount <CoreDAVAccountInfoProvider, CoreDAVOAuthInfoProvider, CoreDAVLogDelegate, CoreDAVDiscoveryTaskGroupDelegate>

@property (retain, nonatomic) CoreDAVDiscoveryTaskGroup *checkValidityTaskGroup;
@property (retain, nonatomic) DACoreDAVLogger *curLogger;
@property (readonly, nonatomic) int cardDAVAccountVersion;
@property (readonly, nonatomic) DACoreDAVTaskManager *taskManager;
@property (readonly, nonatomic) CardDAVLocalDBHelper *databaseHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addressBookConstraintsPlistPath;

- (id)logHandle;
- (void)dealloc;
- (id)userAgentHeader;
- (BOOL)isEqualToAccount:(id)a0;
- (void).cxx_destruct;
- (BOOL)enabledForDADataclass:(long long)a0;
- (id)localizedInvalidPasswordMessage;
- (void)addToCoreDAVLoggingDelegates;
- (void)discoverInitialPropertiesWithConsumer:(id)a0;
- (BOOL)handleTrustChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithBackingAccountInfo:(id)a0;
- (id)localizedIdenticalAccountFailureMessage;
- (id)onBehalfOfBundleIdentifier;
- (void)removeFromCoreDAVLoggingDelegates;
- (id)serverComplianceClasses;
- (id)serverRoot;
- (id)spinnerIdentifiers;
- (void)coreDAVLogTransmittedDataPartial:(id)a0;
- (void)coreDAVTransmittedDataFinished;
- (void)discoveryTask:(id)a0 gotAccountInfo:(id)a1 error:(id)a2;
- (void)noteHomeSetOnDifferentHost:(id)a0;
- (unsigned long long)oauthVariant;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id /* block */)a0;
- (void)setServerComplianceClasses:(id)a0;
- (BOOL)shouldLogTransmittedData;
- (id)wellKnownPaths;
- (void)_massageAddedOrModifiedVCard:(id)a0;
- (id)copyImageContentsAtURL:(id)a0 outError:(id *)a1;

@end
