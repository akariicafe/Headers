@class NSString, INAppDescriptor, WFiTunesSessionManager, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, WFAppInstalledResourceDelegate;

@interface WFAppInstalledResource : WFResource <ICAppInstallStatusObserver>

@property (retain, nonatomic) WFiTunesSessionManager *currentAppNameLookupSessionManager;
@property (retain, nonatomic) NSMutableArray *pendingAppLookupCompletions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic) BOOL skipLookup;
@property (nonatomic) BOOL requiresAppToBeInstalled;
@property (nonatomic) BOOL intentIsSynced;
@property (copy, nonatomic) NSString *appName;
@property (retain, nonatomic) INAppDescriptor *descriptor;
@property (weak, nonatomic) id<WFAppInstalledResourceDelegate> delegate;

+ (BOOL)mustBeAvailableForDisplay;
+ (BOOL)refreshesAvailabilityOnApplicationResume;

- (id)eventDictionary;
- (void)dealloc;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)appNeedsUpdateErrorWithAppName:(id)a0;
- (id)_initWithDescriptor:(id)a0 requiresAppToBeInstalled:(BOOL)a1 isSyncedFromOtherDevice:(BOOL)a2;
- (id)appNotInstalledError;
- (id)appNotResolvedError;
- (void)appRegistry:(id)a0 installStatusChangedForApp:(id)a1;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 userInterface:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)descriptorIsIntentDescriptor;
- (void)fetchiTunesStoreObjectForAppWithCompletionBlock:(id /* block */)a0;
- (id)initWithAppDescriptor:(id)a0 requiresAppToBeInstalled:(BOOL)a1;
- (id)initWithIntentDescriptor:(id)a0 isSyncedFromOtherDevice:(BOOL)a1;
- (id)intentDescriptor;
- (BOOL)intentIsEligibleForRemoteExecution;
- (BOOL)intentIsLocallyAvailable;
- (void)notifyDelegateWithUpdatedDescriptor:(id)a0;
- (void)refreshAvailability;
- (void)updateDescriptorsWithSelectedApp:(id)a0;

@end
