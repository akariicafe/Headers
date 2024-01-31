@class AMSUIBubbleTipViewController, NSString, NSArray, ICQUIInlineTipViewModel, PSListController, ICQUpgradeFlowManager, ICQPreferencesRemoteUIDelegate, AIDAAccountManager, ICQLiftUIPresenter, ICQUIRemoteUIPresenter;
@protocol AAUISpecifierProviderDelegate;

@interface ICQUITipSpecifierProvider : NSObject <DelayedPushDelegate, ICQUIRemoteUIPresenterDelegate, ICQUpgradeFlowManagerDelegate, RUITableViewRowDelegate, ICQLiftUIPresenterDelegate, AAUISpecifierProvider, AMSUIMessageViewControllerDelegate> {
    AIDAAccountManager *_accountManager;
    PSListController<AAUISpecifierProviderDelegate> *_listController;
    AMSUIBubbleTipViewController *_inlineTipController;
    AMSUIBubbleTipViewController *_manageStorageTipController;
    ICQLiftUIPresenter *_liftUIPresenter;
    ICQUIRemoteUIPresenter *_ruiFlowManager;
    ICQUpgradeFlowManager *_upgradeFlowManager;
    ICQPreferencesRemoteUIDelegate *_legacyRemoteUIDelegate;
    NSString *_anchorIdentifier;
    BOOL _showUpwardPointingTips;
    long long _tipRequestState;
}

@property (retain, nonatomic) ICQUIInlineTipViewModel *viewModel;
@property (nonatomic) BOOL hasDismissedTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;

- (void)messageViewController:(id)a0 didSelectActionWithDialogResult:(id)a1;
- (void)dealloc;
- (id)account;
- (void)messageViewController:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)messageViewController:(id)a0 didUpdateSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithAccountManager:(id)a0;
- (void)messageViewController:(id)a0 didLoadDialogRequest:(id)a1;
- (void)upgradeFlowManagerDidCancel:(id)a0;
- (void)upgradeFlowManagerDidComplete:(id)a0;
- (Class)tableCellClassForTableViewRow:(id)a0;
- (void)_dismissPressed;
- (void)_cleanUpSyncWithiCloudFooterIfApplicable;
- (void)_fetchAndDisplayTipIfNotYetDismissed;
- (void)_fetchTip:(id /* block */)a0;
- (void)_getEligibleTipFromTips:(id)a0 completion:(id /* block */)a1;
- (void)_launchLegacyRemoteUIWithURL:(id)a0;
- (void)_launchLiftUIWithURL:(id)a0;
- (void)_launchRemoteUIWithURL:(id)a0 forDataclasses:(id)a1;
- (void)_launchUpgradeFlowWithAction:(id)a0 andURL:(id)a1;
- (void)_openExternalLink:(id)a0;
- (void)_openLiftUILink:(id)a0;
- (void)_openRemoteUILink:(id)a0 forDataclasses:(id)a1;
- (void)_reloadSpecifiers;
- (void)_removeVisibleTip;
- (BOOL)_tipArrowConfigurationIsEligibleForDisplay:(id)a0;
- (void)_tipDisplayed;
- (id)_tipSpecifiers;
- (void)_updateSyncWithiCloudFooterIfApplicable;
- (id)_valueForSpecifier:(id)a0;
- (id)initWithAccountManager:(id)a0 presenter:(id)a1 sectionAnchorIdentifier:(id)a2 showUpwardPointingTips:(BOOL)a3;
- (void)liftUIPresenter:(id)a0 didLoadWithSuccess:(BOOL)a1 error:(id)a2;
- (void)liftUIPresenter:(id)a0 performAction:(long long)a1 parameters:(id)a2;
- (void)liftUIPresenterDidCancel:(id)a0;
- (void)liftUIPresenterDidComplete:(id)a0;
- (void)loadFailed:(id)a0 withError:(id)a1;
- (void)loadFinished:(id)a0;
- (void)loadStarted:(id)a0;
- (void)remoteUIFlowManager:(id)a0 didCompleteFlowWithSuccess:(BOOL)a1 error:(id)a2;
- (id)tipForManageStorageFromAttributes:(id)a0 rows:(id)a1 viewController:(id)a2 remoteUIDelegate:(id)a3;

@end
