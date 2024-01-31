@class NSString, CloudTabStore, NSArray, WBTabGroupManager, _SFPerSitePreferencesVendor, _SFBrowserSavedState, PinnedTabsManager, NSMapTable, _SFPageZoomPreferenceManager;

@interface BrowserWindowController : NSObject <CloudTabStoreDelegate, _SFNavigationIntentHandling> {
    id /* block */ _browserControllerUIDelegateProvider;
    NSMapTable *_UIDelegatesByBrowserController;
    BOOL _consideredMergingCloudTabsForDeviceRestoration;
    _SFBrowserSavedState *_savedState;
    id /* block */ _automationWindowInitializedCompletionHandler;
    _SFPageZoomPreferenceManager *_privateBrowsingPageZoomManager;
    WBTabGroupManager *_tabGroupManager;
}

@property (nonatomic) BOOL cloudTabsEnabled;
@property (readonly, copy, nonatomic) NSArray *browserControllers;
@property (readonly, nonatomic) PinnedTabsManager *pinnedTabsManager;
@property (readonly, nonatomic) _SFPerSitePreferencesVendor *perSitePreferencesVendor;
@property (readonly, nonatomic) _SFPageZoomPreferenceManager *privateBrowsingPageZoomManager;
@property (readonly, nonatomic) CloudTabStore *cloudTabStore;
@property (copy, nonatomic) NSString *frontmostProfileIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_printWindowToSceneMapping;

- (void)dispatchNavigationIntent:(id)a0;
- (void)handleNavigationIntent:(id)a0 completion:(id /* block */)a1;
- (id)_browserWindowsToPersist;
- (id)tabDocumentWithUUID:(id)a0;
- (void)mergeAllWindowsIntoWindow:(id)a0;
- (id)_allNormalLocalTabDocuments;
- (void)dealloc;
- (id)tabsInPrivateBrowsing:(BOOL)a0;
- (void)cloudTabStore:(id)a0 cloudTabsEnabledDidChange:(BOOL)a1;
- (id)_printWindowToSceneMapping;
- (void)saveBrowserState;
- (id)_mergeAndSaveWindowStates:(id)a0 intoWindowState:(id)a1;
- (void)_windowDidClose:(id)a0;
- (id)uiDelegateForBrowserController:(id)a0;
- (void)_mergeTabsFromCloudTabsForDeviceRestorationIfNeededAfterCloudTabsFinishedSyncing:(BOOL)a0;
- (id)oldestTabsWithLimit:(unsigned long long)a0 inPrivateBrowsing:(BOOL)a1;
- (void)restoreEducationDeviceTabs;
- (void)cloudTabStoreDidGetCachedDevicesFromCloudKit:(id)a0;
- (id)_mergeWindowStates:(id)a0 intoWindowState:(id)a1;
- (void)updateCloudTabsForEnteringForeground;
- (id)initWithBrowserSavedState:(id)a0 perSitePreferencesVendor:(id)a1 browserControllerUIDelegateProvider:(id /* block */)a2;
- (void)openNewWindowInFrontmostProfileFromWindow:(id)a0;
- (id)_sceneIDToLocalGroupTabs;
- (void)_mergeTabsFromCloudTabsForDeviceRestoration:(id)a0;
- (void)cloudTabStore:(id)a0 didUpdateDevicesFromCloudKitWithError:(id)a1;
- (void)_restoreWindowsFromBrowserSavedState:(id)a0;
- (id)_newAutomationWindowWithSceneID:(id)a0;
- (id)browserControllerWithUUID:(id)a0;
- (void)setUpAutomationWindowWithCompletionHandler:(id /* block */)a0;
- (void)_cloudTabFeatureAvailabilityDidChange:(id)a0;
- (void)openNewWindowWithPrivateBrowsingEnabled:(BOOL)a0 fromWindow:(id)a1;
- (unsigned long long)numberOfTabsInPrivateBrowsing:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithTabGroupManager:(id)a0 pinnedTabsManager:(id)a1;
- (id)windowForSceneID:(id)a0 options:(id)a1;
- (long long)modeForNewWindowUserActivity:(id)a0;
- (void)removeWindowsNotMatchingSceneIDs:(id)a0 supportsMultipleScenes:(BOOL)a1;
- (id)initWithTabGroupManager:(id)a0 pinnedTabsManager:(id)a1 perSitePreferencesVendor:(id)a2 shouldMergeAllWindowsIfNeeded:(BOOL)a3 browserControllerUIDelegateProvider:(id /* block */)a4;
- (id)initWithBrowserSavedState:(id)a0;
- (id)tabsOlderThan:(id)a0 inPrivateBrowsing:(BOOL)a1;
- (void)_saveBrowserStateWithQuickUpdate:(BOOL)a0;
- (void)_restoreWindowsWithState:(id)a0 shouldMergeAllWindowsIfNeeded:(BOOL)a1;
- (void)updateCloudTabUpdatesEnabled;
- (void)restoreEducationDeviceCloudTabs:(id)a0 animated:(BOOL)a1;
- (void)cloudTabStore:(id)a0 didReceiveTabCloseRequest:(id)a1;
- (void)tearDownAutomationWindow;
- (void)saveCloudTabs;
- (void)_destroyCloudTabsStore;
- (void)saveCloudTabsUsingCloudTabStore:(id)a0;
- (void)_createCloudTabsStore;
- (void)updateCloudTabsForEnteringBackground;

@end
