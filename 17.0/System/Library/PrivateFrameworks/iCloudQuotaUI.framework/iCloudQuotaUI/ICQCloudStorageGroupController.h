@class ICQQuotaInfoResponse, NSString, ICQPreferencesRemoteUIDelegate, PSListController, PSSpecifier, PSTableCell, ICQUICloudStorageOffersManager, NSMutableArray;

@interface ICQCloudStorageGroupController : NSObject <ICQUICloudStorageOffersManagerDelegate, RUITableViewRowDelegate, DelayedPushDelegate, CloudStorageGroupControllerProtocol> {
    PSListController *_listController;
    NSMutableArray *_specifiers;
    PSSpecifier *_managedStorage;
    BOOL _buyMore;
    BOOL _quotaFetchInProgress;
    BOOL _quotaCached;
    BOOL _quotaFailed;
    BOOL _loadingStorage;
    BOOL _loadingCommerce;
    BOOL _delayedEnterManageStorage;
    ICQQuotaInfoResponse *_quotaInfo;
    ICQPreferencesRemoteUIDelegate *_storageDelegate;
    PSTableCell *_remoteLoadingCell;
    ICQUICloudStorageOffersManager *_storageOffersManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backupInfoHeaders;
+ (id)backupInfoHeadersForAccount:(id)a0;

- (id)init;
- (void)dealloc;
- (void)reachabilityChanged:(id)a0;
- (void).cxx_destruct;
- (void)stopSpinner;
- (void)manager:(id)a0 loadDidFailWithError:(id)a1;
- (void)manager:(id)a0 willPresentViewController:(id)a1;
- (void)rowDidChange:(id)a0 action:(int)a1;
- (void)rowDidEndEditing:(id)a0;
- (void)rowIsFirstResponder:(id)a0;
- (id)sourceURLForRUITableViewRow;
- (Class)tableCellClassForTableViewRow:(id)a0;
- (id)textFieldRow:(id)a0 changeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)clearQuotaCache;
- (void)enterBuyStorage;
- (void)startSpinnerInCellForSpecifier:(id)a0;
- (void)addGroupToListController:(id)a0;
- (id)availableStorage:(id)a0;
- (void)cancelLoaders;
- (void)enterBuyStorageWhenPossible;
- (void)enterManageStorageWhenPossible;
- (void)enterManagedStorage:(id)a0;
- (void)getQuotaInfo;
- (void)groupRemovedFromListController;
- (BOOL)hasPurchasedMoreStorage;
- (void)loadFailed:(id)a0 withError:(id)a1;
- (void)loadFinished:(id)a0;
- (void)loadStarted:(id)a0;
- (void)quotaInfoChanged;
- (void)remoteUIDelegate:(id)a0 didCreatePage:(id)a1 forAccount:(id)a2 inObjectModel:(id)a3;
- (void)remoteUIDelegate:(id)a0 didCreatePage:(id)a1 inObjectModel:(id)a2;
- (id)specifiersWithBuyMore:(BOOL)a0;
- (id)totalStorage:(id)a0;
- (void)updateManagedStorageState;

@end
