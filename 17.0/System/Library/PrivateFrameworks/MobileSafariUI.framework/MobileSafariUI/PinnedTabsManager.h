@class NSHashTable, NSArray, NSMutableDictionary, NSCountedSet, NSMutableArray, NSMutableSet, WBTabCollection, WBCollectionConfiguration;

@interface PinnedTabsManager : NSObject {
    NSHashTable *_observers;
    NSMutableArray *_pinnedTabs;
    NSMutableArray *_privatePinnedTabs;
    NSMutableDictionary *_pinnedTabsByUUID;
    NSMutableDictionary *_privatePinnedTabsByUUID;
    unsigned long long _updateFlags;
    long long _updateSuppressionCount;
    NSCountedSet *_activeProfileIdentifiers;
    NSMutableSet *_pendingUpdatedProfileIdentifiers;
    NSMutableDictionary *_pinnedTabsByProfileIdentifier;
    NSMutableDictionary *_pinnedTabsByUUIDAndProfileIdentifier;
}

@property (readonly, copy, nonatomic) WBCollectionConfiguration *collectionConfiguration;
@property (readonly, nonatomic) WBTabCollection *tabCollection;
@property (readonly, copy, nonatomic) NSArray *pinnedTabs;
@property (readonly, copy, nonatomic) NSArray *privatePinnedTabs;

- (void)willSelectProfileWithIdentifier:(id)a0;
- (void)_updateCache;
- (void).cxx_destruct;
- (void)_cacheTab:(id)a0 inContainer:(id)a1;
- (void)_clearPinnedTabsForProfileWithIdentifier:(id)a0;
- (void)_loadPinnedTabsForProfileWithIdentifier:(id)a0;
- (void)_notifyObserversAfterUpdatesIfNeeded;
- (int)_pinnedTabsFolderIDForContainer:(id)a0;
- (id)_tabWithUUID:(id)a0 inContainer:(id)a1;
- (id)_tabsByUUIDInContainer:(id)a0;
- (id)_tabsInContainer:(id)a0;
- (void)addPinnedTabsObserver:(id)a0;
- (void)appendTab:(id)a0 inContainer:(id)a1;
- (id)initWithBrowserState:(id)a0 collectionConfiguration:(id)a1;
- (void)moveTab:(id)a0 toTabGroup:(id)a1 afterTab:(id)a2;
- (void)notifyObserversOfUpdatedPinnedTabsInContainer:(id)a0;
- (void)notifyObserversOfUpdatedPinnedTabsInProfileWithIdentifier:(id)a0;
- (void)notifyObserversOfUpdatedPinnedTabsIsPrivate:(BOOL)a0;
- (void)performUpdatesUsingBlock:(id /* block */)a0;
- (id)pinnedTabsInContainer:(id)a0;
- (void)removePinnedTabsObserver:(id)a0;
- (void)removeTabWithUUID:(id)a0 persist:(BOOL)a1;
- (void)updatePinnedTabWithUUID:(id)a0 inContainer:(id)a1 usingBlock:(id /* block */)a2;
- (void)updatePinnedTabsInContainer:(id)a0 usingBlock:(id /* block */)a1;
- (void)willDeselectProfileWithIdentifier:(id)a0;

@end
