@class UINavigationController, NSString, ICQUIPreferencesLiftUIDelegate, ICQPreferencesRemoteUIDelegate, ACAccount, PSSpecifier;

@interface ICQUIStorageUsedController : NSObject <DelayedPushDelegate> {
    UINavigationController *_navigationController;
    NSString *_appBundleID;
    ACAccount *_account;
    ICQPreferencesRemoteUIDelegate *_ruiDelegate;
    ICQUIPreferencesLiftUIDelegate *_liftUIDelegate;
    PSSpecifier *_activeSpecifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginLoading;
- (void).cxx_destruct;
- (void)_startSpinnerInSpecifier:(id)a0;
- (void)_beginLiftUIFlowWithURL:(id)a0;
- (void)_beginRUIFlowWithURL:(id)a0;
- (void)_stopSpinnerInSpecifier:(id)a0;
- (void)beginLoadingForSpecifier:(id)a0;
- (id)initWithAppBundleID:(id)a0 account:(id)a1 navigationController:(id)a2;
- (void)loadFailed:(id)a0 withError:(id)a1;
- (void)loadFinished:(id)a0;
- (void)loadStarted:(id)a0;

@end
