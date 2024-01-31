@class NSArray, _ATXInternalInstallNotification, _ATXInternalUninstallNotification, NSDictionary, SBSHomeScreenService, NSObject, ATXHomeScreenConfigCache, NSMutableIndexSet, _PASSimpleCoalescingTimer;
@protocol OS_dispatch_queue;

@interface _ATXAppIconState : NSObject {
    _ATXInternalInstallNotification *_installNotification;
    _ATXInternalUninstallNotification *_uninstallNotification;
    NSObject<OS_dispatch_queue> *_syncQueue;
    int _homeScreenConfigCacheChangeDarwinNotificationObserver;
    int _homeScreenTodayPageConfigCacheChangeDarwinNotificationObserver;
    int _dockAppListChangeDarwinNotificationObserver;
    ATXHomeScreenConfigCache *_homeScreenConfigCache;
    SBSHomeScreenService *_sbsHomeScreenService;
    NSDictionary *_iconLocationByBundleId;
    unsigned long long _numHomeScreenPages;
    unsigned long long _numHomeScreenFolders;
    NSArray *_orderedVisiblePageIndices;
    NSMutableIndexSet *_pageIndicesWithAppPredictionPanels;
    NSMutableIndexSet *_pageIndicesWithSuggestionWidgets;
    _PASSimpleCoalescingTimer *_coalescedReloadOperation;
}

+ (id)sharedInstance;

- (long long)folderPageNumberForBundleId:(id)a0;
- (unsigned long long)numberOfApps;
- (id)init;
- (id)springboardPageNumbersWithSuggestionsWidgets;
- (unsigned long long)getFirstVisiblePageIndex;
- (id)initWithHomeScreenConfigCache:(id)a0 sbsHomeScreenService:(id)a1;
- (id)allAppsKnownToSpringBoard;
- (long long)springboardPageLocationForBundleId:(id)a0;
- (id)nonFolderAppSetOnPages;
- (void)_reload;
- (id)allFolderApps;
- (BOOL)appInFolderWithBundleId:(id)a0;
- (id)springboardPageNumbersWithAppPredictionPanels;
- (long long)springboardPageNumberForBundleId:(id)a0;
- (void).cxx_destruct;
- (id)allInstalledAppsKnownToSpringBoard;
- (unsigned long long)numberOfPages;
- (unsigned long long)numberOfFolders;
- (id)allDockedApps;
- (BOOL)appOnDockWithBundleId:(id)a0;

@end
