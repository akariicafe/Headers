@class PKPaymentPass, NSString, PKAdjustableSingleCellView, PKRemoteDataAccessor, PKTransitBalanceModel;
@protocol PKPaymentDataProvider;

@interface PKPassTransitProductsViewController : PKSectionTableViewController <PKPaymentDataProviderDelegate, PKPerformActionViewControllerDelegate, PKAccessibleLayoutObserverDelegate> {
    PKTransitBalanceModel *_balanceModel;
    long long _accessibleLayout;
    id<PKPaymentDataProvider> _paymentDataProvider;
    BOOL _hasBalance;
    BOOL _hasCommutePlans;
    unsigned long long _transitType;
    PKAdjustableSingleCellView *_sampleSingleCellView;
    PKRemoteDataAccessor *_remoteDataAccessor;
}

@property (nonatomic) PKPaymentPass *pass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceivePlanUpdate:(id)a1;
- (void).cxx_destruct;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceiveBalanceUpdate:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didUpdateWithTransitPassProperties:(id)a1;
- (id /* block */)_actionHandlerForIndexPath:(id)a0;
- (id)_allocView;
- (void)_configureCell:(id)a0 inTableView:(id)a1 forIndexPath:(id)a2;
- (void)_configureView:(id)a0 indexPath:(id)a1 animated:(BOOL)a2;
- (void)_handlePassUpdate:(id)a0;
- (void)_reloadBalance;
- (void)_reloadContent;
- (id)_renewActionForCommutePlanIdentifier:(id)a0;
- (void)_setupBalances;
- (void)_setupPlans;
- (id)_topUpActionForIndexPath:(id)a0 balanceIdentifiers:(id)a1;
- (void)accessibleLayoutForView:(id)a0 changedFrom:(long long)a1 to:(long long)a2;
- (id)initWithPaymentPass:(id)a0 transitType:(unsigned long long)a1;
- (void)performActionViewControllerDidCancel:(id)a0;
- (void)performActionViewControllerDidPerformAction:(id)a0;

@end
