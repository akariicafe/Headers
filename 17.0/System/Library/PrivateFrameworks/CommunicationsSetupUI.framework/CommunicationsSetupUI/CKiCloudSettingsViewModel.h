@class CKKeepMessagesPreferenceManager, ICQInAppAction, CKiCloudSettingsSyncController, NSString, CKiCloudSyncStateModel, NSUserDefaults;
@protocol CKiCloudSettingsViewModelDelegate;

@interface CKiCloudSettingsViewModel : NSObject

@property (retain, nonatomic) CKiCloudSettingsSyncController *syncController;
@property (retain, nonatomic) CKiCloudSyncStateModel *syncStateModel;
@property (weak, nonatomic) ICQInAppAction *upgradeICloudAction;
@property (retain, nonatomic) NSUserDefaults *madridUserDefaults;
@property (retain, nonatomic) id iCloudMessagingObserverToken;
@property (retain, nonatomic) CKKeepMessagesPreferenceManager *keepMessagesPreferenceManager;
@property (readonly, nonatomic) long long syncState;
@property (readonly, nonatomic) BOOL micAccountsMatch;
@property (readonly, nonatomic, getter=isSyncing) BOOL syncing;
@property (readonly, nonatomic) NSString *keepMessagesPreference;
@property (readonly, nonatomic) NSString *messagesInCloudCount;
@property (readonly, nonatomic) NSString *syncStatus;
@property (readonly, nonatomic) NSString *syncStatusFooterText;
@property (readonly, nonatomic) NSString *syncStatusFooterSubstringForHyperlink;
@property (readonly, nonatomic) NSString *footerHyperlinkUrl;
@property (readonly, nonatomic, getter=isSyncAvailable) BOOL syncAvailable;
@property (weak, nonatomic) id<CKiCloudSettingsViewModelDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)_internalInit;
- (void)stopObservers;
- (id)_currentKeepMessagesPreference;
- (id)_lastSyncedDateFromDefaults;
- (id)_stateModelForSyncState:(long long)a0;
- (void)_syncedSettingsDidChange:(id)a0;
- (void)_updateActionForICQInAppMessage:(id)a0;
- (void)_updateStateModelForSyncState:(long long)a0 isSyncing:(BOOL)a1 needsViewReload:(BOOL)a2;
- (void)_updateStateModelForSyncStateWithICQUIReason:(id)a0;
- (void)showICloudUpsellIfAvailable;
- (void)syncButtonPressed;

@end
