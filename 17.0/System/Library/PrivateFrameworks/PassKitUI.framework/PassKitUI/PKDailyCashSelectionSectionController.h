@class NSString, PKAccountService, NSArray, PKAccountUserCollection, PKPeerPaymentAccount, PKFeatureApplication, PKPeerPaymentAccountResolutionController, PKAccount, UICollectionViewCellRegistration, PKPaymentService;
@protocol PKRewardsHubSectionControllerDelegate;

@interface PKDailyCashSelectionSectionController : NSObject <PKPeerPaymentAccountResolutionControllerDelegate, PKAccountServiceObserver, PKPaymentSetupDelegate, PKPaymentServiceDelegate, PKDynamicSectionController, PKViewControllerPreflightable> {
    NSString *_identifier;
    id<PKRewardsHubSectionControllerDelegate> _delegate;
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    PKPeerPaymentAccount *_peerPaymentAccount;
    NSArray *_accounts;
    NSArray *_applications;
    unsigned long long _currentDestination;
    unsigned long long _loadingDestination;
    BOOL _hasRedeemed;
    BOOL _allowStatementCreditRedemption;
    PKAccountService *_accountService;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    PKPaymentService *_applyService;
    PKFeatureApplication *_pendingSavingsApplication;
    NSArray *_currentDailyCashSelectionItems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *identifiers;
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;

- (void)accountAdded:(id)a0;
- (void)accountRemoved:(id)a0;
- (id)headerTitle;
- (void)accountChanged:(id)a0;
- (void)featureApplicationAdded:(id)a0;
- (id)_presentingViewController;
- (void)featureApplicationChanged:(id)a0;
- (void)featureApplicationRemoved:(id)a0;
- (void).cxx_destruct;
- (id)footerTitle;
- (id)_checkmarkAccessory;
- (void)_reloadSection;
- (void)didSelectItem:(id)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)_applyAccessory;
- (id)_setupAccessory;
- (void)_applyRewardsAsStatementCredit;
- (void)_changeRewardsDestination:(unsigned long long)a0;
- (void)_changeRewardsDestinationAndOpenAccountIfNeeded:(unsigned long long)a0;
- (id)_disclosureAccessory;
- (id)_eligibleAccountOfType:(unsigned long long)a0;
- (id)_hasRedeemedAccessory;
- (id)_pendingApplicationAccessory;
- (void)_presentPeerPaymentNotEnabledAlert;
- (void)_reportDailyCashConfirmationEventWithRedemptionType:(unsigned long long)a0 button:(id)a1;
- (void)_reportDestinationButtonTapWithRedemptionType:(unsigned long long)a0;
- (id)_spinnerAccessory;
- (id)analyticsEventReportWithPreSelect:(BOOL)a0;
- (id)cellRegistrationForItem:(id)a0;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (id)dailyCashSelectionItems;
- (id)initWithSectionIdentifier:(id)a0 account:(id)a1 accountService:(id)a2 delegate:(id)a3;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (void)paymentSetupDidFinish:(id)a0;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsDismissCurrentViewControllerAnimated:(BOOL)a1;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsPresentViewController:(id)a1 animated:(BOOL)a2;
- (void)presentConfirmationAlertWithTitle:(id)a0 redemptionType:(unsigned long long)a1 confirmationHandler:(id /* block */)a2;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (Class)supplementaryRegistrationClassForKind:(id)a0 sectionIdentifier:(id)a1;

@end
