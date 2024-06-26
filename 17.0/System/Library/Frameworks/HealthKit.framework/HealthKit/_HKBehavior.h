@class NSTimeZone, NSString, NSDictionary, _HKFeatureFlags, NSNumber;

@interface _HKBehavior : NSObject {
    struct _HKLazyLoader<_HKFeatureFlags *> { _HKFeatureFlags *_value; BOOL _hasLoaded; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadLock; } _featureFlags;
    NSNumber *_overriddenSupportsSwimmingWorkoutSessions;
    NSNumber *_overriddenEnableManateeForHSA2Accounts;
    NSNumber *_overriddenSupportsWorkoutSmoothing;
    NSNumber *_overriddenSupportsCachedStatisticsCollectionQueries;
    NSNumber *_overriddenSupportsCachedSleepDaySummaryQueries;
    NSNumber *_overriddenSupportsActiveQueryDaemonTransactions;
    NSNumber *_overriddenFitnessMode;
    NSString *_overriddenCurrentDeviceDisplayName;
    struct _HKLazyLoader<bool> { BOOL _value; BOOL _hasLoaded; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadLock; } _isRunningStoreDemoMode;
    struct _HKLazyLoader<bool> { BOOL _value; BOOL _hasLoaded; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadLock; } _runningInStoreDemoModeF201;
    struct _HKLazyLoader<bool> { BOOL _value; BOOL _hasLoaded; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadLock; } _futureMigrationsEnabled;
    struct _HKLazyLoader<bool> { BOOL _value; BOOL _hasLoaded; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadLock; } _ontologyDatabaseFutureMigrationsEnabled;
    struct _HKLazyLoader<bool> { BOOL _value; BOOL _hasLoaded; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadLock; } _performsAutomaticUserDomainConceptProcessing;
    struct _HKLazyLoader<bool> { BOOL _value; BOOL _hasLoaded; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadLock; } _shouldReceiveECGSamples;
    struct _HKLazyLoader<bool> { BOOL _value; BOOL _hasLoaded; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadLock; } _supportsCloudSync;
    struct _HKLazyLoader<bool> { BOOL _value; BOOL _hasLoaded; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadLock; } _supportsCloudSyncSharding;
    struct _HKLazyLoader<bool> { BOOL _value; BOOL _hasLoaded; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadLock; } _supportsCloudSyncStagingShard;
    struct _HKLazyLoader<bool> { BOOL _value; BOOL _hasLoaded; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadLock; } _supportsPeriodicFullCloudSync;
    struct _HKLazyLoader<bool> { BOOL _value; BOOL _hasLoaded; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadLock; } _supportsPeriodicFastCloudSync;
    struct _HKLazyLoader<bool> { BOOL _value; BOOL _hasLoaded; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadLock; } _isRealityDevice;
    struct _HKLazyLoader<bool> { BOOL _value; BOOL _hasLoaded; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadLock; } _supportsCoordinatedCloudSync;
    struct _HKLazyLoader<bool> { BOOL _value; BOOL _hasLoaded; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadLock; } _supportsSharedSummarySync;
    struct _HKLazyLoader<bool> { BOOL _value; BOOL _hasLoaded; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadLock; } _canPerformOwnershipTakeover;
    struct _HKLazyLoader<bool> { BOOL _value; BOOL _hasLoaded; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadLock; } _isiPad;
}

@property (nonatomic) BOOL isDeviceSupported;
@property (nonatomic) BOOL isAppleInternalInstall;
@property (nonatomic) BOOL isAppleWatch;
@property (nonatomic) BOOL isCompanionCapable;
@property (nonatomic) BOOL hasTelephonyCapability;
@property (nonatomic) BOOL isTestingDevice;
@property (nonatomic) BOOL isRunningStoreDemoMode;
@property (nonatomic) BOOL runningInStoreDemoModeF201;
@property (nonatomic) BOOL isRunningSeedBuild;
@property (nonatomic) BOOL shouldReceiveECGSamples;
@property (nonatomic) BOOL supportsBluetoothDiscovery;
@property (nonatomic) BOOL supportsPeriodicFullCloudSync;
@property (nonatomic) BOOL supportsPeriodicFastCloudSync;
@property (nonatomic) BOOL isRealityDevice;
@property (nonatomic) BOOL supportsCoordinatedCloudSync;
@property (nonatomic) BOOL supportsSharedSummarySync;
@property (nonatomic) BOOL canPerformOwnershipTakeover;
@property (nonatomic) BOOL isiPad;
@property (copy, nonatomic) NSString *currentDeviceDisplayName;
@property (copy, nonatomic) NSString *unitTest_deviceRegionCode;
@property (copy, nonatomic) NSString *currentDeviceClass;
@property (copy, nonatomic) NSString *currentOSBuild;
@property (copy, nonatomic) NSString *currentOSName;
@property (copy, nonatomic) NSString *currentOSVersion;
@property (nonatomic) BOOL collectsCalorimetry;
@property (nonatomic) BOOL collectsData;
@property (nonatomic) BOOL ontologyIndexingEnabled;
@property (nonatomic) BOOL ontologyIndexingRequiresAccounts;
@property (nonatomic) BOOL performsAutomaticUserDomainConceptProcessing;
@property (nonatomic) BOOL performsAutomaticConceptIndexing;
@property (nonatomic) BOOL performsWorkoutCondensation;
@property (nonatomic) BOOL supportsAWDMetricSubmission;
@property (nonatomic) BOOL supportsActivitySharing;
@property (nonatomic) BOOL supportsAppSubscriptions;
@property (nonatomic) BOOL supportsBackgroundSyncRequests;
@property (nonatomic) BOOL supportsCloudSync;
@property (nonatomic) BOOL supportsCloudSyncSharding;
@property (nonatomic) BOOL supportsCloudSyncStagingShard;
@property (nonatomic) BOOL supportsComputedUserCharacteristicCaching;
@property (nonatomic) BOOL supportsHeartRateDataCollection;
@property (nonatomic) BOOL supportsNanoSync;
@property (nonatomic) BOOL supportsOntology;
@property (nonatomic) BOOL supportsOntologyDatabaseUpdates;
@property (nonatomic) BOOL supportsOntologyFeatureEvaluation;
@property (nonatomic) BOOL supportsOntologyDatabaseFutureMigrations;
@property (nonatomic) BOOL supportsPeriodicCountryMonitoring;
@property (nonatomic) BOOL supportsSampleExpiration;
@property (nonatomic) BOOL supportsSwimmingWorkoutSessions;
@property (nonatomic) BOOL supportsWorkouts;
@property (nonatomic) BOOL supportsWorkoutRouteSmoothing;
@property (nonatomic) BOOL tinkerModeEnabled;
@property (nonatomic) BOOL healthAppHidden;
@property (nonatomic) BOOL healthAppNotInstalled;
@property (nonatomic) BOOL schedulesXPCAlarms;
@property (nonatomic) BOOL isStandalonePhoneFitnessMode;
@property (nonatomic) unsigned long long fitnessMode;
@property (nonatomic) BOOL showSensitiveLogItems;
@property (nonatomic) BOOL futureMigrationsEnabled;
@property (copy, nonatomic) NSString *additionalEntitlementForConnection;
@property (nonatomic) BOOL shouldRegisterPeriodicActivities;
@property (retain, nonatomic) NSDictionary *featureRequirementOverrides;
@property (nonatomic) BOOL invalidatesNotificationInstructionsOnLaunch;
@property (copy, nonatomic) NSString *currentDeviceName;
@property (nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } currentOSVersionStruct;
@property (readonly, nonatomic) _HKFeatureFlags *features;
@property (readonly, nonatomic) BOOL supportsEED;
@property (readonly, nonatomic) BOOL supportsCachedStatisticsCollectionQueries;
@property (readonly, nonatomic) BOOL supportsCachedSleepDaySummaryQueries;
@property (readonly, nonatomic) BOOL supportsActiveQueryDaemonTransactions;
@property (readonly, nonatomic) BOOL supportsSecondaryProfiles;
@property (readonly, nonatomic) BOOL healthAppHiddenOrNotInstalled;
@property (readonly, copy, nonatomic) NSString *currentDeviceManufacturer;
@property (readonly, copy, nonatomic) NSString *currentDeviceHWModelString;
@property (readonly, copy, nonatomic) NSString *currentDeviceRegionCode;
@property (readonly, copy, nonatomic) NSString *currentDeviceRegionInfo;
@property (readonly, copy, nonatomic) NSString *currentInternalDeviceModel;
@property (readonly, copy, nonatomic) NSString *currentDeviceProductType;
@property (readonly, copy, nonatomic) NSTimeZone *localTimeZone;
@property (readonly, nonatomic) NSDictionary *currentDiskUsage;
@property (readonly, nonatomic) unsigned long long totalDiskCapacity;
@property (readonly, nonatomic) unsigned long long currentDiskSpaceAvailable;

+ (BOOL)_isiPad;
+ (BOOL)isDeviceSupported;
+ (BOOL)anyPairedWatchHasFlightsClimbedCapability;
+ (BOOL)isTestingDevice;
+ (BOOL)runningInStoreDemoModeF201;
+ (BOOL)_hasTelephonyCapability;
+ (BOOL)_condensesHeartRateSamples;
+ (void)setForceBuddy:(BOOL)a0;
+ (id)currentDeviceProductType;
+ (id)currentDeviceReleaseType;
+ (id)currentDeviceClass;
+ (BOOL)_healthAppNotInstalled;
+ (BOOL)_hasCompletedBuddyWithVersion:(long long)a0;
+ (void)_setHasCompletedBuddyWithVersion:(long long)a0;
+ (BOOL)isCollectBLETypesFromLocalSourceEnabled;
+ (int)nanoSyncProtocolVersionForWatchSystemBuildVersion:(id)a0;
+ (BOOL)isAppleInternalInstall;
+ (void)resetBuddy;
+ (BOOL)isDataCollectionForwarderDisabled;
+ (struct { long long x0; long long x1; long long x2; })_currentOSVersionStruct;
+ (id)currentOSName;
+ (BOOL)_ontologyDatabaseFutureMigrationsEnabled;
+ (id)_getActivePairedDevice;
+ (unsigned long long)_fitnessMode;
+ (BOOL)_isDeviceSupported;
+ (id)currentDeviceRegionCode;
+ (void)resetSharedBehavior;
+ (void)setHasCompletedBuddyWithVersion:(long long)a0;
+ (BOOL)_isAutomaticProcessingEnabled;
+ (BOOL)_isCollectBLETypesFromLocalSourceEnabled;
+ (BOOL)_isAppleInternalInstall;
+ (void)_resetBuddy;
+ (BOOL)_isForceBuddyEnabled;
+ (id)currentOSVersion;
+ (BOOL)_tinkerModeEnabled;
+ (BOOL)hasCompletedBuddyWithVersion:(long long)a0;
+ (BOOL)hasPairedWatch;
+ (BOOL)activePairedWatchHasSmartFitnessCoaching;
+ (id)_currentDeviceName;
+ (id)currentDeviceRegionInfo;
+ (id)currentDeviceName;
+ (BOOL)isRunningStoreDemoMode;
+ (BOOL)_hasCompletedBuddyWithKey:(id)a0 version:(long long)a1;
+ (BOOL)_healthAppHidden;
+ (int)nanoSyncProtocolVersionForCompanionSystemBuildVersion:(id)a0;
+ (BOOL)_shouldShowBuddy;
+ (BOOL)allPairedWatchesSupportBradycardiaDetection;
+ (id)currentOSBuild;
+ (BOOL)isiPod;
+ (BOOL)shouldShowBuddy;
+ (id)currentDeviceHWModelString;
+ (BOOL)_isStandalonePhoneFitnessMode;
+ (id)currentDeviceDisplayName;
+ (BOOL)_showSensitiveLogItems;
+ (BOOL)activePairedWatchSupportsBradycardiaDetection;
+ (id)sharedBehavior;
+ (id)_currentOSVersion;
+ (void)setSharedBehavior:(id)a0;
+ (BOOL)_futureMigrationsEnabled;
+ (void)_setHasCompletedBuddyWithKey:(id)a0 version:(long long)a1;
+ (BOOL)_isBuddyDisabled;
+ (id)currentDeviceManufacturer;
+ (BOOL)allPairedWatchesSupportHeartRateMotionContexts;
+ (BOOL)isBuddyDisabled;
+ (BOOL)hasTelephonyCapability;
+ (BOOL)_isDataCollectionForwarderDisabled;
+ (struct { long long x0; long long x1; long long x2; })currentOSVersionStruct;
+ (id)_currentOSBuild;
+ (BOOL)activePairedWatchSupportsHeartRateMotionContexts;

- (id)init;
- (id)currentDeviceReleaseType;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_hasProductTypePrefix:(id)a0;
- (void)resetSupportsCloudSync;
- (void)setSupportsActiveQueryDaemonTransactions:(BOOL)a0;
- (void)setSupportsCachedSleepDaySummaryQueries:(BOOL)a0;
- (void)setSupportsCachedStatisticsCollectionQueries:(BOOL)a0;
- (void)setSupportsWorkoutRouteSmoothingOverride:(BOOL)a0;

@end
