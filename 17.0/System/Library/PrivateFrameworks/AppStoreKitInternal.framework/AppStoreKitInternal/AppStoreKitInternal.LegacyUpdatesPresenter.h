@interface AppStoreKitInternal.LegacyUpdatesPresenter : AppStoreKitInternal.BasePresenter {
    void /* unknown type, empty encoding */ onUpdatesDataChanged;
    void /* unknown type, empty encoding */ onPerformAction;
    void /* unknown type, empty encoding */ onShowWhatsNew;
    void /* unknown type, empty encoding */ onUpdateAllChanged;
    void /* unknown type, empty encoding */ updateStore;
    void /* unknown type, empty encoding */ automaticUpdates;
    void /* unknown type, empty encoding */ appStateController;
    void /* unknown type, empty encoding */ hasLoaded;
    void /* unknown type, empty encoding */ pendingManualUpdates;
    void /* unknown type, empty encoding */ pendingAutomaticUpdates;
    void /* unknown type, empty encoding */ recentUpdates;
    void /* unknown type, empty encoding */ haveDoneInitialUpdatesFetch;
    void /* unknown type, empty encoding */ expandedUpdates;
    void /* unknown type, empty encoding */ appStateControllerReady;
    void /* unknown type, empty encoding */ organizationQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_numberFormatter;
    void /* unknown type, empty encoding */ lastServerRefreshTime;
    void /* unknown type, empty encoding */ isUpdateAllEnabledForSection;
}

- (void)updateStoreDidChange;

@end
