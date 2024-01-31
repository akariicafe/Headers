@class NSString, PKAccountService, PKPhysicalCard, PKSettingTableCell, LAContext, PKVirtualCard, PKVirtualCardCredentials, PKAccount, PKPaymentPass, PKPaymentService;

@interface PKAccountCardNumbersViewController : PKSectionTableViewController <PKPaymentAuthorizationViewControllerDelegate> {
    unsigned long long _accountFeatureIdentifier;
    PKVirtualCard *_virtualCard;
    PKVirtualCardCredentials *_cardCredentials;
    PKAccountService *_accountService;
    PKPaymentService *_paymentService;
    PKAccount *_account;
    PKPaymentPass *_pass;
    long long _context;
    BOOL _loadingReplacementCard;
    PKPhysicalCard *_physicalCard;
    BOOL _loadingCredentials;
    BOOL _hasReplacedCredentials;
    PKSettingTableCell *_dynamicSecurityCodeCell;
    LAContext *_localAuthenticationContext;
    BOOL _redactSensitiveDetails;
    BOOL _didBeginPassManagementSubject;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_virtualCardSections;

- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_setupNotifications;
- (id)_localizedStringForKey:(id)a0;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)a0;
- (id)_tableHeaderView;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)_beginReportingIfNecessary;
- (void)paymentAuthorizationViewController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationViewControllerDidFinish:(id)a0;
- (id)_replaceCardAlertFromIndexPath:(id)a0;
- (id)_buttonCellForRowIndex:(long long)a0 text:(id)a1 cellStyle:(long long)a2 forTableView:(id)a3;
- (id)_cardCredentialsCellForRowIndex:(long long)a0 tableView:(id)a1;
- (void)_copyCardDetails;
- (id)_credentialsCellWithPrimaryText:(id)a0 detailText:(id)a1 detailImage:(id)a2 forSection:(unsigned long long)a3 forTableView:(id)a4;
- (id)_credentialsCellWithPrimaryText:(id)a0 detailText:(id)a1 detailImage:(id)a2 forTableView:(id)a3;
- (id)_credentialsCellWithPrimaryText:(id)a0 detailText:(id)a1 forTableView:(id)a2;
- (id)_dynamicSecurityCodeCellForRowIndex:(long long)a0 tableView:(id)a1;
- (void)_endReportingIfNecessary;
- (id)_genericDisplayableError:(id)a0;
- (void)_handleReplacementError:(id)a0;
- (id)_hyperlinkViewWithLinkText:(id)a0 footerText:(id)a1 urlString:(id)a2;
- (id)_loadingCellForRowIndex:(long long)a0 tableView:(id)a1;
- (long long)_numberOfVirtualCardCredentialDetailsRowsEnabled;
- (id)_otherNumbersCellForRowIndex:(long long)a0 tableView:(id)a1;
- (void)_replaceVirtualCard;
- (void)_retrieveCardCredentials;
- (void)_retryCardCredentials;
- (id)_reuseIdentifierForSection:(unsigned long long)a0;
- (void)_toggleDynamicSecurityCodeSetting;
- (unsigned long long)_virtualCardCredentialDetailsRowForRowIndex:(long long)a0;
- (BOOL)_virtualCardCredentialDetailsRowIsEnabled:(unsigned long long)a0;
- (id)_virtualCardStateFooter;
- (void)_willHideUIMenuController:(id)a0;
- (BOOL)canReplaceCard;
- (id)initWithPass:(id)a0 accountService:(id)a1 account:(id)a2 cardCredentials:(id)a3 virtualCard:(id)a4 physicalCard:(id)a5 context:(long long)a6;
- (id)initWithPass:(id)a0 accountService:(id)a1 account:(id)a2 physicalCard:(id)a3 context:(long long)a4;
- (id)initWithPass:(id)a0 localAuthenticationContext:(id)a1 virtualCard:(id)a2 context:(long long)a3;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (BOOL)shouldMapSection:(unsigned long long)a0;

@end
