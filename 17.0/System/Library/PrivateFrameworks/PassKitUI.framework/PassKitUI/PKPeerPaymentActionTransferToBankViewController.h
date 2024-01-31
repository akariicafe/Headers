@class UILabel, NSString, NSArray, NSDecimalNumber, NSNumberFormatter, UIImageView, UITableView, PKEnterCurrencyAmountPassTableHeaderFooterView, _PKVisibilityBackdropView, PKAnimatedNavigationBarTitleView, PKPaymentPass, NSDecimalNumberHandler;

@interface PKPeerPaymentActionTransferToBankViewController : PKPeerPaymentActionViewController <_PKVisibilityBackdropViewDelegate, PKPeerPaymentActionControllerDelegate, UITableViewDelegate, UITableViewDataSource, PKEnterCurrencyAmountPassViewDelegate> {
    NSArray *_supportedTransferActions;
    NSNumberFormatter *_currencyFormatter;
    NSNumberFormatter *_percentageFormatter;
    NSDecimalNumberHandler *_roundingHandler;
    PKPaymentPass *_defaultInstantFundsOutPaymentPass;
    BOOL _isSmallPhone;
    BOOL _usesAccessibilityLayout;
    PKAnimatedNavigationBarTitleView *_passNavbarTitleView;
    UITableView *_tableView;
    UIImageView *_navbarPassView;
    _PKVisibilityBackdropView *_blurringView;
    UILabel *_footerTextLabel;
    PKEnterCurrencyAmountPassTableHeaderFooterView *_tableHeaderView;
    NSDecimalNumber *_feePercentage;
    NSDecimalNumber *_minimumFee;
    NSDecimalNumber *_maximumFee;
    double _backdropWeight;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)setCardBalance:(id)a0;
- (void)setMaxBalance:(id)a0;
- (void)setMaxLoadAmount:(id)a0;
- (void)setMinBalance:(id)a0;
- (void)setMinLoadAmount:(id)a0;
- (id)_amountPassView;
- (id)initWithPaymentPass:(id)a0 webService:(id)a1 passLibraryDataProvider:(id)a2 context:(long long)a3;
- (void)_calculateBlur;
- (id)_calculateFee;
- (void)_currentAmountDidChangeTo:(id)a0 shouldGenerateNewSuggestions:(BOOL)a1;
- (id)_defaultInstantFundsOutPaymentPass;
- (id)_detailTextForAction:(unsigned long long)a0;
- (void)_dismissViewController:(id)a0;
- (id)_indexPathForAction:(unsigned long long)a0;
- (BOOL)_isCurrentAmountValid;
- (BOOL)_passViewInNavBar;
- (void)_showNavigationBarSpinner:(BOOL)a0;
- (id)_spinnerBarButton;
- (id)_transferBarButton;
- (void)_transferBarButtonPressed:(id)a0;
- (void)_updateBarButtonEnabledState;
- (void)_updateCurrentAmount:(id)a0 shouldGenerateNewSuggestions:(BOOL)a1;
- (void)_updateFooterText;
- (void)_updateTableHeaderHeight;
- (void)enterCurrencyAmountPassViewDidLoadPassSnapshot:(id)a0;
- (void)peerPaymentActionController:(id)a0 hasChangedState:(unsigned long long)a1;
- (id)presentationSceneIdentifierForPeerPaymentActionController:(id)a0;
- (void)updateAccountValues;
- (long long)visibilityBackdropView:(id)a0 preferredStyleForTraitCollection:(id)a1;

@end
