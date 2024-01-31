@class PSListController, ICQCloudStorageSummary, NSString, NSArray, ICQPreferencesRemoteUIDelegate, PSSpecifier, FLFollowUpController, _TtC13iCloudQuotaUI29RecommendationAnalyticsHelper, ICQUINativeManageStorageController, AIDAAccountManager, ICQUITipSpecifierProvider;
@protocol NSObject, AAUISpecifierProviderDelegate;

@interface ICQCloudStorageSpecifierProvider : NSObject <DelayedPushDelegate, RUITableViewRowDelegate, AAUISpecifierProvider> {
    AIDAAccountManager *_accountManager;
    PSListController<AAUISpecifierProviderDelegate> *_listController;
    PSSpecifier *_activeSpecifier;
    ICQPreferencesRemoteUIDelegate *_ruiDelegate;
    BOOL _delayedEnterManageStorage;
    id<NSObject> _quotaChangeNotificationObserver;
    ICQCloudStorageSummary *_storageSummary;
    PSSpecifier *_manageStorageSpecifier;
    PSSpecifier *_storageGraphSpecifier;
    ICQUITipSpecifierProvider *_tipSpecifierProvider;
    FLFollowUpController *_followUpController;
    ICQUINativeManageStorageController *_nativeManageStorage;
    _TtC13iCloudQuotaUI29RecommendationAnalyticsHelper *_recommendationAnalyticsHelper;
}

@property (copy, nonatomic) NSString *initialStorageFlowAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;

- (void)dealloc;
- (id)account;
- (void)_startObservingQuotaChangeNotifications;
- (BOOL)handleURL:(id)a0;
- (void).cxx_destruct;
- (void)_stopObservingQuotaChangeNotifications;
- (id)initWithAccountManager:(id)a0 presenter:(id)a1;
- (id)initWithAccountManager:(id)a0;
- (Class)tableCellClassForTableViewRow:(id)a0;
- (id)_valueForStorageGraphSpecifier:(id)a0;
- (void)_createNativeManageStorageIfNeeded;
- (void)_enterManageStorage:(id)a0;
- (void)_fetchStorageSummary:(id)a0;
- (void)_fetchStorageSummary:(id)a0 completion:(id /* block */)a1;
- (void)_finishLoadingActiveSpecifier;
- (BOOL)_handleManagedStorageURL:(id)a0;
- (void)_handleStorageUpgradeURL:(id)a0;
- (void)_manageStorageSpecifierWasTapped:(id)a0;
- (void)_reloadStorageSpecifiers;
- (void)_replaceRUISectionWithTipUIFromObjectModel:(id)a0 inPage:(id)a1;
- (void)loadFailed:(id)a0 withError:(id)a1;
- (void)loadFinished:(id)a0;
- (void)loadStarted:(id)a0;
- (void)remoteUIDelegate:(id)a0 didCreatePage:(id)a1 inObjectModel:(id)a2;

@end
