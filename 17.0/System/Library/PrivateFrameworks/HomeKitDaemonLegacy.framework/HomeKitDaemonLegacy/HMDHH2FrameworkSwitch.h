@class HMDHomeManager, NAFuture, NSString, NSObject, HMBCloudDatabase;
@protocol OS_dispatch_queue, HMDHH2FrameworkSwitchDataSource, OS_os_log;

@interface HMDHH2FrameworkSwitch : HMFObject <HMFLogging, HMBCloudDatabaseDelegate, HMBCloudZoneDelegate> {
    NSObject<OS_os_log> *_logger;
}

@property (nonatomic) BOOL autoFrameworkSwitch;
@property (nonatomic) BOOL isTapToSetupOngoing;
@property (retain, nonatomic) HMBCloudDatabase *cloudDatabaseToDetectHH2Zone;
@property (copy, nonatomic) id /* block */ blockToBeCalledBeforeSwitchingFramework;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (retain, nonatomic) id<HMDHH2FrameworkSwitchDataSource> dataSource;
@property (readonly, nonatomic) NAFuture *fetchSentinelZoneDidFinishFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)errorFromHMDCKAccountStatus:(long long)a0;
+ (void)relaunchHomedAfterSettingEnvironmentTo:(BOOL)a0 blockToExecuteBeforeReLaunch:(id /* block */)a1;
+ (void)setHH2EnablementPreferenceKey:(BOOL)a0;
+ (void)setHH2SettingsMigrationKey:(BOOL)a0;
+ (void)switchBackToHH1AndDoNotLaunchDueToPrimaryAccountRemoval;
+ (void)switchBackToHH1AndRelaunch;
+ (void)switchBackToHH1AndRelaunchDueToHH2MigrationFailed;
+ (void)switchToHH2AndRelaunchHomed;

- (void)cloudDatabase:(id)a0 didCreateZoneWithID:(id)a1;
- (void).cxx_destruct;
- (BOOL)checkExistenceOfHH2SentinelZone;
- (BOOL)_areWeRunningInRightEnvironment:(BOOL)a0;
- (void)_clearSetupModeIfNeeded;
- (void)_makeSureWeAreRunningInRightEnvironment:(BOOL)a0;
- (long long)areCloudKitServersReachableWithError:(id *)a0;
- (void)createHH2CloudDatabaseAndStartSyncing;
- (void)createHH2SentinelZoneWithCompletionHandler:(id /* block */)a0;
- (void)forceFetchSentinelZone;
- (void)handleTapToSetupFinished:(id)a0;
- (id)initWithAutoSwitch:(BOOL)a0 callBeforeFrameworkSwitch:(id /* block */)a1 homeManager:(id)a2 dataSource:(id)a3;
- (id)initWithAutoSwitchDisabledWithHomeManager:(id)a0;
- (id)initWithAutoSwitchDisabledWithHomeManager:(id)a0 dataSource:(id)a1;
- (id)initWithAutoSwitchEnabledWithHomeManager:(id)a0 callBeforeFrameworkSwitchCompletionHandler:(id /* block */)a1;
- (id)initWithAutoSwitchEnabledWithHomeManager:(id)a0 dataSource:(id)a1 callBeforeFrameworkSwitchCompletionHandler:(id /* block */)a2;
- (void)makeSureWeAreRunningInRightEnvironment:(BOOL)a0;
- (void)performInitialSync:(id /* block */)a0;
- (void)performInitialSyncAndSwitchFrameworkIfRequired;
- (void)removeHH2SentinelZoneWithCompletion:(id /* block */)a0;
- (void)switchToHH2AfterPerformingHH2PreRebootTask;
- (void)switchToHH2AndRelaunchHomedToPerformHH2Migration;
- (BOOL)switchToSetupMode:(unsigned long long)a0;
- (void)waitForCloudKitAccountToBeAvailable;
- (BOOL)waitForHH2SentinelZoneToBeCreated:(double)a0;
- (BOOL)waitForHH2SentinelZoneToBeFetchedFromCloud;
- (void)waitForHH2SentinelZoneToBeRemoved;

@end
