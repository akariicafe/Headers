@interface PasswordManagerUI.PMPasswordManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ appState;
    void /* unknown type, empty encoding */ lastAddedAccountID;
    void /* unknown type, empty encoding */ lastModifiedAccountIDs;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ queueForLoadingAccounts;
    void /* unknown type, empty encoding */ autoFillQuirksManager;
    void /* unknown type, empty encoding */ passwordWarningManager;
    void /* unknown type, empty encoding */ isIgnoringAccountStoreChangeNotifications;
    void /* unknown type, empty encoding */ cachedSavedAccounts;
    void /* unknown type, empty encoding */ cachedWarnings;
    void /* unknown type, empty encoding */ cachedRecentlyDeletedSavedAccounts;
}

- (void)accountStoreDidChange;

@end
