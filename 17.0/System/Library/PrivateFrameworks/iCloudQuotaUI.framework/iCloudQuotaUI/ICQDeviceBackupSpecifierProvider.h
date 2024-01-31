@class NSString, NSArray, ACAccount, PSListController, ICQBackupInfo;
@protocol AAUISpecifierProviderDelegate;

@interface ICQDeviceBackupSpecifierProvider : NSObject <DelayedPushDelegate, AAUISpecifierProvider> {
    ACAccount *_account;
    PSListController<AAUISpecifierProviderDelegate> *_listController;
    ICQBackupInfo *_backupInfo;
    id _backupChangesNotificationObserver;
    BOOL _isBackupRequestInProgress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAccountManager:(id)a0;
- (id)_backupDevicesSpecififers:(id)a0;
- (void)_fetchBackupInfo;
- (void)_reloadSpecifiers;
- (id)_specifierForSpinner;
- (void)_startObservingBackupChanges;
- (id)_valueForBackUpDevice:(id)a0;
- (id)initWithAccount:(id)a0 presenter:(id)a1;
- (void)loadFailed:(id)a0 withError:(id)a1;
- (void)loadFinished:(id)a0;
- (void)loadStarted:(id)a0;

@end
