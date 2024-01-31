@interface PasswordManagerUI.PMPasswordManagerState : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ newAccountSubject;
    void /* unknown type, empty encoding */ accountUpdatedSubject;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ _accounts;
    void /* unknown type, empty encoding */ _accountsInPersonalKeychain;
    void /* unknown type, empty encoding */ _accountsByGroupID;
    void /* unknown type, empty encoding */ _isGeneratedPasswordsLogPresented;
    void /* unknown type, empty encoding */ _recentlyDeletedAccounts;
    void /* unknown type, empty encoding */ _recentlyDeletedAccountsInPersonalKeychain;
    void /* unknown type, empty encoding */ _recentlyDeletedAccountsByGroupID;
    void /* unknown type, empty encoding */ _hasUnacknowledgedHighPriorityWarnings;
    void /* unknown type, empty encoding */ _highPrioritySecurityRecommendations;
    void /* unknown type, empty encoding */ _standardPrioritySecurityRecommendations;
    void /* unknown type, empty encoding */ _hiddenSecurityRecommendations;
    void /* unknown type, empty encoding */ _loadedSecurityRecommendations;
    void /* unknown type, empty encoding */ _mainNavigationPath;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mainAccountsListModel;
    void /* unknown type, empty encoding */ _sharingGroupIDToPresent;
    void /* unknown type, empty encoding */ _contextForPresentedNewGroupFlow;
    void /* unknown type, empty encoding */ _inboundOTPAuthURLContext;
    void /* unknown type, empty encoding */ _inboundSharableAccountContext;
    void /* unknown type, empty encoding */ _otpauthHandlers;
    void /* unknown type, empty encoding */ _selectedOtpauthHandler;
    void /* unknown type, empty encoding */ mainAccountDetailsSheetController;
    void /* unknown type, empty encoding */ additionalAccountDetailsSheetControllers;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
