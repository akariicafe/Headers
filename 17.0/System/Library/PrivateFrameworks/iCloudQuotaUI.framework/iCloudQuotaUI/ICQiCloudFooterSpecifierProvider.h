@class PSListController, NSString, ICQPreferencesRemoteUIDelegate, NSArray, ICQCloudStorageSummary, ICQUpgradeFlowManager, PSSpecifier, ICQUILegacyPurchaseFlowManager, ICQUILegacyPurchaseFlowController, AIDAAccountManager;
@protocol AAUISpecifierProvider, AAUISpecifierProviderDelegate;

@interface ICQiCloudFooterSpecifierProvider : NSObject <ICQUpgradeFlowManagerDelegate, DelayedPushDelegate, AAUISpecifierProvider> {
    AIDAAccountManager *_accountManager;
    PSListController<AAUISpecifierProviderDelegate> *_listController;
    ICQCloudStorageSummary *_storageSummary;
    ICQUpgradeFlowManager *_upgradeFlowManager;
    ICQPreferencesRemoteUIDelegate *_ruiDelegate;
    ICQUILegacyPurchaseFlowController *_legacyPurchaseFlowController;
    ICQUILegacyPurchaseFlowManager *_legacyPurchaseFlowManager;
    id<AAUISpecifierProvider> _icloudPlusSpecifierProvider;
    PSSpecifier *_activeSpecifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;

- (void)dealloc;
- (id)account;
- (void).cxx_destruct;
- (id)initWithAccountManager:(id)a0 presenter:(id)a1;
- (id)initWithAccountManager:(id)a0;
- (void)upgradeFlowManagerDidCancel:(id)a0;
- (void)upgradeFlowManagerDidComplete:(id)a0;
- (void)_postQuotaDidChangeNotification;
- (void)_beginLoadingSpecifier:(id)a0;
- (id)_buildSubscriptionSpecifiers;
- (id)_buildiCloudPlusSpecifiers;
- (void)_fetchStorageSummary;
- (void)_finishLoadingSpecifier;
- (void)_handleICQLink:(id)a0 forSpecifier:(id)a1;
- (void)_launchFamilyUsageFlowWithURL:(id)a0;
- (void)_launchFlowForSpecifier:(id)a0;
- (void)_launchLegacyPurchaseFlow;
- (void)_launchUpgradeFlowWithICQLink:(id)a0;
- (void)_launchUpgradeFlowWithURL:(id)a0;
- (void)_reloadSpecifiers;
- (void)_setupSpecifier:(id)a0;
- (void)_startFamilySharing;
- (id)_stringForSpecifier:(id)a0;
- (void)loadFailed:(id)a0 withError:(id)a1;
- (void)loadFinished:(id)a0;
- (void)loadStarted:(id)a0;

@end
