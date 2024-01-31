@class NSString, CKiCloudSettingsViewModel, ICQAppCloudStorage, AIDAAccountManager;

@interface CKiCloudSettingsViewController : ACUIDataclassConfigurationViewController <CKiCloudSettingsViewModelDelegate>

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain, nonatomic) CKiCloudSettingsViewModel *viewModel;
@property (nonatomic, getter=isCloudSyncingEnabled) BOOL cloudSyncingEnabled;
@property (retain, nonatomic) ICQAppCloudStorage *appCloudStorage;
@property (nonatomic, getter=isStorageUsedRequestInProgress) BOOL storageUsedRequestInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)account;
- (id)specifiers;
- (void).cxx_destruct;
- (void)_internalInit;
- (void)_startObservingAccountStoreChanges;
- (void)_stopObservingAccountStoreChanges;
- (void)startSync:(id)a0;
- (void)dataclassSwitchStateDidChange:(id)a0 withSpecifier:(id)a1;
- (id)_syncSpecifiers;
- (id)_fetchKeepMessagesPreference:(id)a0;
- (id)_fetchStorageUsed:(id)a0;
- (id)_fetchSyncStatusText:(id)a0;
- (id)_headerGroupSpecifiers;
- (id)_messagesInCloudCount:(id)a0;
- (void)_navigateToMessagesSettings;
- (void)_presentAlertForAccountMismatchFromSpecifier:(id)a0;
- (void)_presentScreenForSpecifier:(id)a0;
- (id)_syncDetailsSpecifiers;
- (void)iCloudSettingsViewModelDidUpdateState:(id)a0;
- (void)navigateToSettingsWithURLString:(id)a0 forSpecifier:(id)a1;

@end
