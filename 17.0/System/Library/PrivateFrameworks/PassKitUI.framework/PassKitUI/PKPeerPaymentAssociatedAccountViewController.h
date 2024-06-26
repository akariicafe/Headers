@class PKPaymentService, NSString, PKPeerPaymentPreferences, PKPaymentTransactionCellController, PKPeerPaymentPreferencesUpdateRequest, NSArray, PKPeerPaymentWebService, PKPeerPaymentAccount, PKTransactionSource, PKFamilyMember, PKPeerPaymentService, PKFamilyMemberCollection;

@interface PKPeerPaymentAssociatedAccountViewController : PKSectionTableViewController <PKPaymentServiceDelegate, PKPeerPaymentServiceObserver, CNAvatarViewDelegate, PKPaymentSetupDelegate> {
    PKFamilyMember *_familyMember;
    PKFamilyMemberCollection *_familyCollection;
    PKPeerPaymentWebService *_peerPaymentWebSerivce;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccount *_associatedAccount;
    PKPeerPaymentPreferences *_preferences;
    PKTransactionSource *_transactionSource;
    PKPaymentService *_paymentService;
    long long _detailViewStyle;
    PKPaymentTransactionCellController *_transactionPresenter;
    NSString *_viewerFamilyMemberTypeAnalyticsKey;
    PKPeerPaymentPreferencesUpdateRequest *_currentPreferencesUpdateRequest;
    PKPeerPaymentPreferencesUpdateRequest *_pendingPreferencesUpdateRequest;
    BOOL _hasPaymentTransactions;
    BOOL _modifyingAccount;
    BOOL _preferencesChanged;
    BOOL _didBeginReporter;
    long long _context;
    NSArray *_recurringPayments;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)transactionSourceIdentifier:(id)a0 didReceiveTransaction:(id)a1;
- (void)transactionSourceIdentifier:(id)a0 didRemoveTransactionWithIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)recurringPaymentsChanged;
- (void)_peerPaymentPreferencesChanged:(id)a0;
- (id)_actionsCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_actionsCellSelectedForTableView:(id)a0 atIndexPath:(id)a1;
- (BOOL)_actionsCellShouldHighlightForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_addPreferencesUpdateWithRequest:(id)a0;
- (void)_applyDefaultStylingToCell:(id)a0 textLabelColor:(id)a1;
- (id)_balanceCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_defaultCellWithTextColor:(id)a0 forTableView:(id)a1;
- (id)_detailsCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_detailsCellSelectedForTableView:(id)a0 atIndexPath:(id)a1;
- (BOOL)_detailsCellShouldHighlightForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_disableCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_disableCellSelectedForTableView:(id)a0 atIndexPath:(id)a1;
- (BOOL)_disableCellShouldHighlightForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_enableCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_enableCellSelectedForTableView:(id)a0 atIndexPath:(id)a1;
- (BOOL)_enableCellShouldHighlightForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_executeNextPreferencesUpdateRequestIfPossible;
- (id)_linkCellWithText:(id)a0 color:(id)a1 forTableView:(id)a2;
- (void)_loadRecurringPayments;
- (void)_modifyPeerPaymentAccountState:(unsigned long long)a0 atIndexPath:(id)a1;
- (id)_notificationTransactionsCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_notificationTransactionsSelectionHasChanged:(id)a0;
- (id)_notificationsCellForTableView:(id)a0 atIndexPath:(id)a1;
- (BOOL)_notificationsCellShouldHighlightForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_openPaymentSetupWithNetworkWhitelist:(id)a0 paymentSetupMode:(long long)a1;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)a0;
- (void)_peerPaymentAccountChanged:(id)a0;
- (void)_presentPassworkPromptWithCompletion:(id /* block */)a0;
- (id)_rectrictionsCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_rectrictionsCellSelectedForTableView:(id)a0 atIndexPath:(id)a1;
- (BOOL)_rectrictionsCellShouldHighlightForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_recurringPaymentsCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_recurringPaymentsCellSelectedForTableView:(id)a0 atIndexPath:(id)a1;
- (BOOL)_recurringPaymentsCellShouldHighlightForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_restrictionAnyoneCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_restrictionContactsCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_restrictionFamilyCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_restrictionScreenTimeSettingsCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_switchCellWithTextColor:(id)a0 forTableView:(id)a1;
- (id)_transactionsCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_updateCellLoadingState:(id)a0 indexPath:(id)a1;
- (void)_updatePeerPaymentAccountWithNewAccount:(id)a0;
- (void)_updatePreferencesFromPeerPaymentServiceAndReloadView;
- (id)familyMemberTransactionViewController;
- (id)initWithFamilyMember:(id)a0 familyCollection:(id)a1 account:(id)a2 context:(long long)a3;
- (void)paymentSetupDidFinish:(id)a0;
- (BOOL)shouldMapSection:(unsigned long long)a0;

@end
