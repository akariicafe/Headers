@class NSObject, PKAccountSupportTopicsSectionController, PKFamilyMemberCollection, PKTransactionSupportStatementNameSectionController, PKTransactionSupportTransactionSectionController, PKAccount, NSString, NSSet, PKPaymentTransaction, UIActivityIndicatorView, PKPaymentService, PKAccountUserCollection, PKPaymentWebService, PKTransactionSourceCollection, PKBusinessChatController;
@protocol OS_dispatch_source;

@interface PKTransactionSupportTopicsViewController : PKPaymentSetupOptionsViewController <PKAccountSupportTopicsSectionControllerDelegate, PKAccountSupportTopicExplanationViewControllerDelegate, CNAvatarViewDelegate, PKPaymentServiceDelegate> {
    PKAccount *_account;
    PKPaymentTransaction *_transaction;
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKFamilyMemberCollection *_familyCollection;
    PKAccountUserCollection *_accountUserCollection;
    NSSet *_physicalCards;
    PKPaymentService *_paymentService;
    PKPaymentWebService *_paymentWebService;
    PKAccountSupportTopicsSectionController *_sectionTopicController;
    PKTransactionSupportTransactionSectionController *_transactionSectionController;
    PKTransactionSupportStatementNameSectionController *_merchantNameSectionController;
    PKBusinessChatController *_businessChatController;
    BOOL _loadingTopics;
    UIActivityIndicatorView *_activityIndicator;
    BOOL _cancelingPayment;
    BOOL _loadingMapsViewController;
    NSObject<OS_dispatch_source> *_loadingMapsTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)didUpdateFamilyMembers:(id)a0;
- (void).cxx_destruct;
- (void)_updateContentUnavailableConfigurationUsingState:(id)a0;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void)_cancelPaymentWithFallbackTopic:(id)a0;
- (void)_cancelTapped;
- (void)_fetchSupportTopics;
- (void)_openBusinessChatForTopic:(id)a0;
- (void)_presentAlertWithTitle:(id)a0 message:(id)a1 dismissAfter:(BOOL)a2;
- (void)_redirectUserToLegacyReportIssue;
- (void)_reloadSectionControllerWithTopics:(id)a0;
- (void)_setBarButtonSpinnerHidden:(BOOL)a0;
- (void)deselectCells;
- (id)initWithAccount:(id)a0 transaction:(id)a1 transactionSourceCollection:(id)a2 familyCollection:(id)a3 accountUserCollection:(id)a4 physicalCards:(id)a5;
- (void)openBusinessChatForTopic:(id)a0;
- (void)reloadItem:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldShowSupportLink:(id)a0;
- (void)showExplanationForTopic:(id)a0;
- (void)showMerchantDetailsForTransaction;

@end
