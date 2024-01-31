@class NSString, NSSet, NSMutableDictionary, SBReverseCountedSemaphore, SBApplicationInfo, SBApplicationRestrictionController, RBSProcessMonitor, SBSplashBoardController, FBSApplicationLibrary, SBApplicationLibraryObserver;

@interface SBApplicationController : NSObject <SBApplicationRestrictionDataSource, XBApplicationProviding, SBApplicationLifecycleObserver> {
    NSMutableDictionary *_applicationsByBundleIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _applicationsLock;
    NSMutableDictionary *_systemAppsVisibilityOverrides;
    NSSet *_cachedSystemAppsWithVisibilityOverrideHidden;
    SBApplicationRestrictionController *_restrictionController;
    SBApplicationLibraryObserver *_appLibraryObserver;
    FBSApplicationLibrary *_appLibrary;
    SBApplicationInfo *_systemAppInfo;
    SBSplashBoardController *_splashBoardController;
    SBReverseCountedSemaphore *_uninstallationReverseSemaphore;
    NSSet *_preventLaunchBundleIDs;
    RBSProcessMonitor *_processMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)a0;
+ (id)sharedInstanceIfExists;
+ (void)_setClearAllLegacySnapshotsWhenLoaded:(BOOL)a0;
+ (void)_setClearSystemAppSnapshotsWhenLoaded:(BOOL)a0;

- (void)waitForUninstallsToComplete:(double)a0;
- (void)applicationsAdded:(id)a0;
- (id)init;
- (id)applicationWithBundleIdentifier:(id)a0;
- (void)applicationVisibilityMayHaveChanged;
- (void)dealloc;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushSystemSnapshots;
- (id)mapsApplication;
- (id)clockApplication;
- (id)loginApplication;
- (void)applicationsUpdated:(id)a0;
- (id)cameraApplication;
- (id)setupApplication;
- (id)webApplication;
- (id)alwaysAvailableApplicationBundleIdentifiers;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushLegacySnapshots;
- (id)notesApplication;
- (id)applicationForDisplayItem:(id)a0;
- (void)_memoryWarningReceived;
- (id)_appInfosToBundleIDs:(id)a0;
- (id)allBundleIdentifiers;
- (Class)_appClassForInfo:(id)a0;
- (void)_sendInstalledAppsDidChangeNotification:(id)a0 removed:(id)a1 replaced:(id)a2 updated:(id)a3;
- (id)allSplashBoardApplications;
- (id)faceTimeApp;
- (void)applicationsRemoved:(id)a0;
- (void)_loadApplications:(id)a0 remove:(id)a1;
- (id)restrictionController;
- (id)allApplications;
- (void)applicationsDemoted:(id)a0;
- (void)requestUninstallApplication:(id)a0 options:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)musicApplication;
- (id)applicationWithPid:(int)a0;
- (id)_splashBoardController;
- (id)recentlyUsedBundleIDs;
- (id)_appLibrary;
- (id)_appLibraryObserver;
- (BOOL)_appLayoutContainsOnlyResizableApps:(id)a0;
- (void)_updateVisibilityOverrides;
- (void).cxx_destruct;
- (void)_preLoadApplications;
- (id)mobilePhone;
- (id)splashBoardSystemApplications;
- (id)allInstalledApplications;
- (void)uninstallApplication:(id)a0;
- (void)applicationRestrictionsMayHaveChanged;
- (void)requestUninstallApplicationWithBundleIdentifier:(id)a0 options:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)testFlightApplication;
- (void)_updateVisibilityOverridesInBackground;
- (id)bundleIdentifiersWithVisibilityOverrideHidden;
- (id)runningApplications;
- (id)dataActivationApplication;
- (id)_loadApplicationFromApplicationInfo:(id)a0;
- (id)iPodOutApplication;
- (void)_removeApplicationsFromModelWithBundleIdentifier:(id)a0 forInstall:(BOOL)a1 withReason:(id)a2;
- (id)_allApplicationsFilteredBySystem:(BOOL)a0;
- (void)applicationsReplaced:(id)a0;
- (id)inCallServiceApp;
- (id)_lock_applicationWithBundleIdentifier:(id)a0;

@end
