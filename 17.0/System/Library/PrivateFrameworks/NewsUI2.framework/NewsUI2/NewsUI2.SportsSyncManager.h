@interface NewsUI2.SportsSyncManager : NSObject <FCSubscriptionObserving, FCUserInfoObserving, FCAppleAccountObserver> {
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ sportsDataService;
    void /* unknown type, empty encoding */ subscriptionController;
    void /* unknown type, empty encoding */ syncService;
    void /* unknown type, empty encoding */ tagService;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_operationQueue;
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ _ignoreSyncingNewsChanges;
    void /* unknown type, empty encoding */ prepareSyncingGroup;
    void /* unknown type, empty encoding */ suspendSyncingGroup;
    void /* unknown type, empty encoding */ suspendedTokensLock;
    void /* unknown type, empty encoding */ suspendedTokens;
    void /* unknown type, empty encoding */ iTunesAccountStatusObservable;
    void /* unknown type, empty encoding */ iCloudAccountStatusObservable;
    void /* unknown type, empty encoding */ _syncMergedWithWatchlistAtLeastOnce;
}

- (void)appleAccountChanged;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)subscriptionController:(id)a0 didAddTags:(id)a1 changeTags:(id)a2 moveTags:(id)a3 removeTags:(id)a4 subscriptionType:(unsigned long long)a5;
- (void)subscriptionControllerDidStopSyncingRemoteChanges:(id)a0;
- (void)subscriptionControllerWillStartSyncingRemoteChanges:(id)a0;
- (void)userInfoDidChangeSportsSyncState:(id)a0;
- (void)handleSyncSettingChangedNotification;
- (void)handleSyncCompletionNotification;
- (id)init;
- (void).cxx_destruct;

@end
