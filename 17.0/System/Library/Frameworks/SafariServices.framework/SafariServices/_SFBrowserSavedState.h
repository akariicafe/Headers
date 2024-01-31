@class SFBrowserStateSQLiteStore, NSArray, NSCountedSet, NSMutableArray;

@interface _SFBrowserSavedState : NSObject {
    SFBrowserStateSQLiteStore *_browserStateSQLiteStore;
    NSMutableArray *_recentlyClosedTabs;
    BOOL _checkPointWriteAheadLogOnNextUpdate;
    NSCountedSet *_tabCountByWindowUUID;
    BOOL _haveLoadedRecentlyClosedTabs;
}

@property (class, nonatomic) BOOL shouldMergeAllWindowsIfNeeded;
@property (class, retain, nonatomic) _SFBrowserSavedState *sharedBrowserSavedState;

@property (copy, nonatomic) NSArray *browserWindows;
@property (nonatomic) BOOL secureDeleteEnabled;
@property (readonly, nonatomic) BOOL shouldBeUsedDuringTest;

+ (id)defaultBrowserStateDatabase;
+ (id)defaultPPTBrowserStateDatabase;
+ (id)ephemeralSavedState;
+ (id)inMemoryDatabase;

- (id)initWithDatabaseURL:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_historyItemsWereRemoved:(id)a0;
- (void)_checkPointWriteAheadLogIfNeeded;
- (void)_notifyThatRecentlyClosedTabsWereRemoved:(id)a0;
- (void)_readBrowserControllersSavedState;
- (void)_readRecentlyClosedTabsStateIfNecessary;
- (void)_removeRecentlyClosedTabStateData:(id)a0;
- (BOOL)activeDocumentIsValidForBrowserControllerWithUUID:(id)a0;
- (void)addRecentlyClosedTabs:(id)a0;
- (void)clearRecentlyClosedTabsForProfileWithIdentifier:(id)a0;
- (void)clearSavedStatesForProfileWithIdentifier:(id)a0 closingDatabase:(BOOL)a1;
- (void)loadSessionStateDataAndRemoveRecentlyClosedTab:(id)a0;
- (id)readSavedSessionStateDataForTabWithUUID:(id)a0;
- (id)recentlyClosedTabsForProfileWithIdentifier:(id)a0;
- (void)regenerateTabUUIDsForDeviceRestoration;
- (void)removeRecentlyClosedTabWithStateData:(id)a0;
- (void)removeTabStateWithTabData:(id)a0;
- (void)removeTabsStateForBrowserControllerWithUUID:(id)a0 andRemoveWindow:(BOOL)a1;
- (void)saveTabStateData:(id)a0;
- (void)saveTabsState:(id)a0 forBrowserControllerWithUUID:(id)a1 completion:(id /* block */)a2;
- (id)savedTabsStateForBrowserControllerWithUUID:(id)a0;
- (void)setActiveDocumentIsValid:(BOOL)a0 forBrowserControllerWithUUID:(id)a1;
- (id)tabStateDataForUUID:(id)a0;
- (void)updateBrowserWindowState:(id)a0 tabs:(id)a1;
- (void)updateSceneID:(id)a0;

@end
