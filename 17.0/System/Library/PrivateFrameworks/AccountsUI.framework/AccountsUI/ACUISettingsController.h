@class NSString, NSArray, ACUISettingsPluginManager, PSSpecifier, NSMutableDictionary, NSObject, PSViewController, ACMonitoredAccountStore;
@protocol OS_dispatch_group;

@interface ACUISettingsController : PSListController <ACUISettingsPluginParentProtocol, ACUIViewControllerAccountChangeObserver> {
    ACMonitoredAccountStore *_accountStore;
    NSArray *_accounts;
    NSArray *_accountSpecifiers;
    PSSpecifier *_accountGroupSpecifier;
    PSSpecifier *_addAccountSpecifier;
    NSArray *_loadingInProgressSpecifiers;
    NSArray *_lazyLoadedSpecifiers;
    NSMutableDictionary *_pluginToSpecifiersMap;
    BOOL _isLazyLoadingPluginSpecifiers;
    ACUISettingsPluginManager *_settingsPluginManager;
    BOOL _isInHandleURL;
    PSViewController *_viewControllerPushedByControllerLoadActionDuringHandleURL;
    NSString *_filteredDataclass;
    BOOL _shouldSkipEffectiveSettingChangedNotification;
    NSObject<OS_dispatch_group> *_specifierLoadGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accountWasRemoved:(id)a0;
- (void)accountWasAdded:(id)a0;
- (void)_accountStoreDidChange;
- (id)init;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_accountStore;
- (void)_accountCellWasTappedWithSpecifier:(id)a0;
- (id)specifiers;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)accountWasModified:(id)a0;
- (id)navigationItem;
- (BOOL)prepareHandlingURLForSpecifierID:(id)a0 resourceDictionary:(id)a1 animatePush:(BOOL *)a2 withCompletion:(id /* block */)a3;
- (BOOL)_isAccountModificationDisabledByRestrictions;
- (void)_lowPowerModeChangedNotification:(id)a0;
- (id)_accountGroupIdentifier:(id)a0 ignoringGroups:(id)a1;
- (void)_accountsWithCompletion:(id /* block */)a0;
- (id)_addAccountSpecifier;
- (void)_effectiveSettingsChangedNotification:(id)a0;
- (void)_fetchLazyLoadedSpecifiers;
- (void)_filterAccounts:(id)a0 toTopLevel:(id)a1 grouped:(id)a2 ignoringGroups:(id)a3;
- (BOOL)_isAccount:(id)a0 inList:(id)a1;
- (BOOL)_isAccountList:(id)a0 identicalToAccountList:(id)a1;
- (void)_loadAccountsWithCompletion:(id /* block */)a0;
- (void)_scheduleSettingsCellWasTappedWithSpecifier:(id)a0;
- (id)_scheduleSettingsModeForSpecifier:(id)a0;
- (id)_settingsPluginManager;
- (id)_specifierForAccount:(id)a0;
- (id)_specifierForCollectionCellLinkingToAccounts:(id)a0 withGroupIdentifier:(id)a1 underParentGroup:(id)a2;
- (id)_specifierForScheduleSettings;
- (void)_specifiersForAccountsGroupWithCompletion:(id /* block */)a0;
- (id)_specifiersForLoadingMessage;
- (id)_specifiersForSettingsProvidedByPlugin:(id)a0;
- (void)specifiersDidChangeForPlugin:(id)a0;
- (void)viewController:(id)a0 didFinishRemovingAccountWithSuccess:(BOOL)a1;

@end
