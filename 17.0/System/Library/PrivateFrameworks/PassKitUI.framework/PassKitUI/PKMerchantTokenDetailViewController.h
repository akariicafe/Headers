@class NSString, NSArray, PKPaymentTransactionCellController, PKPeerPaymentRecurringPayment, PKPaymentWebService, PKPeerPaymentAccount, PKMerchantTokenLoadingView, PKPeerPaymentThresholdTopUpController, PKMerchantToken;
@protocol PKMerchantTokenDetailViewControllerDelegate;

@interface PKMerchantTokenDetailViewController : PKSectionTableViewController <PKPeerPaymentServiceObserver, PKPeerPaymentThresholdTopUpControllerDelegate, PKViewControllerPreflightable> {
    PKMerchantToken *_merchantToken;
    BOOL _showMerchantIcon;
    PKPaymentWebService *_webService;
    PKMerchantTokenLoadingView *_loadingView;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPeerPaymentRecurringPayment *_autoReload;
    PKPeerPaymentThresholdTopUpController *_autoReloadController;
    NSArray *_recurringPayments;
    PKPaymentTransactionCellController *_transactionPresenter;
}

@property (weak, nonatomic) id<PKMerchantTokenDetailViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewLayoutMarginsDidChange;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)_contactKeysToFetch;
- (void)viewDidDisappear:(BOOL)a0;
- (double)tableView:(id)a0 estimatedHeightForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)recurringPaymentsChanged;
- (void)_setUpTableView;
- (void)_deleteMerchantToken;
- (id)_deletePaymentMethodCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_didSelectAutoReloadManagement;
- (void)_didSelectDeletePaymentMethod;
- (void)_didSelectRecurringPaymentAtIndexPath:(id)a0;
- (void)_disableNavigation;
- (void)_enableNavigation;
- (id)_headerCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_hideLoadingView;
- (id)_manageAutoReloadCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_managePaymentMethodCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_manageRecurringPaymentCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_setUpLoadingView;
- (void)_setUpViews;
- (void)_showLoadingView;
- (void)_updateRecurringPaymentsWithCompletion:(id /* block */)a0;
- (id)initWithMerchantToken:(id)a0;
- (id)presentationSceneIdentifierForTopUpController:(id)a0;
- (BOOL)shouldMapSection:(unsigned long long)a0;
- (void)thresholdTopUpController:(id)a0 requestsDismissViewController:(id)a1;
- (void)thresholdTopUpController:(id)a0 requestsPopViewController:(id)a1;
- (void)thresholdTopUpController:(id)a0 requestsPresentViewController:(id)a1;
- (void)thresholdTopUpController:(id)a0 requestsPushViewController:(id)a1;
- (void)thresholdTopUpControllerCompletedSetup:(id)a0;

@end
