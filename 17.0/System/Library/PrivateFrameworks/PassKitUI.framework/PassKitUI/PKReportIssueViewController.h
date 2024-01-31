@class UIBarButtonItem, UIImageView, PKPaymentWebService, PKFamilyMemberCollection, PKAccount, NSString, NSSet, PKPaymentTransaction, UIActivityIndicatorView, PKPaymentPass, UITableViewHeaderFooterView, PKPaymentService, PKAccountUserCollection, PKPaymentTransactionCellController, PKTransactionSourceCollection, PKBusinessChatController;

@interface PKReportIssueViewController : PKSectionTableViewController <PKPaymentServiceDelegate, UITextViewDelegate> {
    PKPaymentTransaction *_transaction;
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKPaymentPass *_paymentPass;
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    NSSet *_physicalCards;
    PKPaymentService *_paymentService;
    PKPaymentTransactionCellController *_transactionCellController;
    PKBusinessChatController *_businessChatController;
    PKFamilyMemberCollection *_familyCollection;
    unsigned long long _context;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_submitButton;
    UIActivityIndicatorView *_activityIndicator;
    BOOL _hasIssueSelected;
    long long _selectedIssue;
    BOOL _hasMapsIssueSelected;
    long long _selectedMapsIssue;
    BOOL _hasDisputeTypeSelected;
    long long _selectedDisputeType;
    BOOL _reportingIssue;
    NSString *_statementName;
    BOOL _cancelingPayment;
    BOOL _canPerformUnrecognizedTransaction;
    BOOL _canPerformDispute;
    BOOL _canPerformCancelAccountServicePayment;
    BOOL _canPerformOther;
    BOOL _canPerformIncorrectMerchant;
    UITableViewHeaderFooterView *_footerView;
    UIImageView *_logoView;
    PKPaymentWebService *_paymentWebService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canReportIssueForTransaction:(id)a0 paymentPass:(id)a1;
+ (BOOL)canSelectIssueTypeForTransaction:(id)a0;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)didUpdateFamilyMembers:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)_cancelButtonTapped:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)textViewDidChange:(id)a0;
- (void)_updateNavigationButtons;
- (void)_resetMapsMerchantAndBrandWithIssueReportIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_cancelPayment;
- (id)_commentsCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_disputeTypeCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_formattedStatementNameFromRawName:(id)a0;
- (void)_handleDisputeTypeSelectedInTableView:(id)a0 atIndexPath:(id)a1;
- (void)_handleIssueTypeSelectedInTableView:(id)a0 atIndexPath:(id)a1;
- (void)_handleMapsIssueTypeSelectedInTableView:(id)a0 atIndexPath:(id)a1;
- (id)_issueTypeCellForTableView:(id)a0 atIndexPath:(id)a1;
- (BOOL)_issueTypeEnabled:(long long)a0;
- (long long)_issueTypeForRowIndex:(long long)a0;
- (id)_mapsIssueCellForTableView:(id)a0 atIndexPath:(id)a1;
- (unsigned long long)_numberOfIssueTypesEnabled;
- (void)_presentAlertWithTitle:(id)a0 message:(id)a1 dismissAfter:(BOOL)a2;
- (void)_reportIssueInBusinessChat;
- (void)_reportIssueToMaps;
- (void)_reprocessTransactionMerchantWithIssueReportIdentifier:(id)a0 completion:(id /* block */)a1;
- (long long)_rowIndexForIssueType:(long long)a0;
- (id)_statementName;
- (id)_statementNameCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_submitButtonTapped:(id)a0;
- (id)_transactionCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_updateFooterPlacement;
- (id)initWithTransaction:(id)a0 transactionSourceCollection:(id)a1 paymentPass:(id)a2 familyCollection:(id)a3 account:(id)a4 accountUserCollection:(id)a5 physicalCards:(id)a6 detailViewStyle:(long long)a7 context:(unsigned long long)a8;
- (BOOL)shouldMapSection:(unsigned long long)a0;

@end
