@class _ATXDataStore, NSMutableArray;

@interface _ATXAppInfoManager : NSObject <ATXBundleIdRemovableProtocol> {
    _ATXDataStore *_dataStore;
    NSMutableArray *_installDeltaLog;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

+ (id)sharedInstance;
+ (id)sortArrayAndComputeMedian:(id)a0;

- (void)train;
- (id)totalSlotsInDatastore;
- (long long)launchedAppCount;
- (void)clearAppInstallInfo;
- (id)init;
- (void)removeBundleIds:(id)a0;
- (void)dealloc;
- (void)addExtensionLaunchForBundleId:(id)a0 date:(id)a1;
- (void)addScreenLockAtDate:(id)a0;
- (id)lastLaunchDateForBundleId:(id)a0;
- (id)lastAppLaunchDate;
- (id)stopInstallDeltaRecording;
- (void)updateGenreIdsForBundleId:(id)a0 genreId:(id)a1 subGenreIds:(id)a2;
- (id)secondMostRecentAppLaunch;
- (id)initWithInMemoryStore;
- (void)removeAppInfoForBundleIds:(id)a0;
- (id)lastAppActionLaunchDateForActionKey:(id)a0;
- (void)computeAverageAndMedianSecondsBetweenAppActions;
- (id)averageSecondsBetweenAppActionsForActionKey:(id)a0;
- (id)lastAppActionLaunch;
- (void)addInstallForBundleInfoMap:(id)a0;
- (id)lastAppLaunch;
- (void)computeAverageAndMedianSecondsBetweenAppActionsWithDuetHelper:(id)a0;
- (id)initWithDataStore:(id)a0;
- (void)addAverageSecondsBetweenAppActionsForActionKey:(id)a0 average:(id)a1;
- (id)allAppsLaunchedOrInstalledWithin30Days;
- (void)updateApp2VecClustersForAllApps;
- (void)startInstallDeltaRecording;
- (void)removeActionDataForBundleId:(id)a0;
- (id)lastUnlockDate;
- (void)updateGenreIdsForAllApps;
- (void)computeAverageAndMedianSecondsBetweenAppLaunches;
- (void)computeAverageAndMedianSecondsBetweenAppLaunchesWithDuetHelper:(id)a0;
- (void)removeUninstalledApps;
- (id)appInfoForBundleId:(id)a0;
- (void)addMedianSecondsBetweenAppActionsForActionKey:(id)a0 median:(id)a1;
- (void)clearAppLaunchInfo;
- (void)addAverageSecondsBetweenLaunchesForBundleId:(id)a0 average:(id)a1;
- (void).cxx_destruct;
- (id)allActionKeys;
- (id)genreIdForBundleId:(id)a0;
- (void)addLaunchForBundleId:(id)a0 date:(id)a1;
- (void)removeAppLaunchesForBundleId:(id)a0;
- (id)allApps;
- (id)lastAppActionLaunchDate;
- (id)allAppsWithInstallDate;
- (id)medianSecondsBetweenLaunchesForBundleId:(id)a0;
- (void)addLaunchForAppAction:(id)a0 date:(id)a1;
- (void)addMedianSecondsBetweenLaunchesForBundleId:(id)a0 median:(id)a1;
- (void)addSpotlightLaunchForBundleId:(id)a0 date:(id)a1;
- (void)handleAppUninstallWithUninstalledAppSet:(id)a0;
- (void)updateApp2VecClusterForBundleId:(id)a0 app2VecCluster:(id)a1;
- (id)subGenreIdsForBundleId:(id)a0;
- (id)medianSecondsBetweenAppActionsForActionKey:(id)a0;
- (id)app2VecClusterForBundleId:(id)a0;
- (void)addInstallForBundleId:(id)a0 date:(id)a1;
- (id)_appInfoNoLockForBundleId:(id)a0;
- (id)genreIdsForBundleId:(id)a0;
- (void)removeAppInfoForBundleId:(id)a0;
- (void)handleAppInstallWithInstallDict:(id)a0;
- (id)averageSecondsBetweenLaunchesForBundleId:(id)a0;

@end
