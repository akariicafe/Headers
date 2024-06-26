@class NSDate, PKSecureElementPassContactIssuerHelper, PKSpendingSummary, NSDictionary, PKPhysicalCardController, NSMutableSet, NSMutableArray, PKPayLaterDashboardMessageComposer, PKAccountService, PKPaymentAutoReloadSetupController, PKCurrencyAmount, PKContactAvatarManager, PKAMPEnrollmentManager, PKLinkedApplication, PKPaymentPass, PKPayLaterFinancingPlansFetcher, PKPeerPaymentWebService, PKAppleBalanceAddMoneyUIManager, PKFamilyMemberCollection, NSNumberFormatter, PKTransactionSourceCollection, PKAccountUserCollection, PKPassGroupView, PKPaymentVerificationController, FHSearchSuggestionController, PKPaymentDefaultDataProvider, PKAccountServiceAccountResolutionController, PKPeerPaymentRecurringPayment, PKPayLaterInstallmentPresenter, PKSpendingSummaryFetcher, NSArray, PKPayLaterCalendarViewController, PKPeerPaymentAccountResolutionController, PKPassPresentationContext, PKPeerPaymentAssociatedAccountsController, PKAccount, NSError, PKDashboardTransactionFetcher, NSString, NSObject, PKPayLaterPaymentIntentController, PKContactResolver, PKTransitBalanceModel, PKSecureElement, NSDateFormatter, PKInboxDataSource, NSOrderedSet, NSMutableDictionary, NSSet, PKCreditAccountStatement, UIImage, PKPeerPaymentAccount, PKGroup;
@protocol PKDashboardPaymentPassDataSourceDelegate, PKDashboardDataSourceDelegate, OS_dispatch_source;

@interface PKDashboardPaymentPassDataSource : NSObject <PKSecureElementObserver, PKPaymentDataProviderDelegate, PKPaymentVerificationControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKForegroundActiveArbiterObserver, PKSpendingSummaryFetcherObserver, PKAccountServiceAccountResolutionControllerDelegate, PKDiscoveryObserver, PKPaymentSetupViewControllerDelegate, PKAccountServiceObserver, PKLinkedApplicationObserver, PKInboxDataSourceDelegate, PKSecureElementPassContactIssuerHelperDelegate, PKPeerPaymentServiceObserver, PKPaymentAutoReloadSetupControllerDelegate, PKVirtualCardEnrollmentViewControllerDelegate, PKPayLaterDashboardMessageComposerDelegate, PKDashboardPassDataSource, PKDashboardTransactionFetcherDelegate> {
    PKPassGroupView *_groupView;
    PKGroup *_group;
    BOOL _isTransitPass;
    BOOL _isAccessPass;
    NSArray *_transactions;
    NSArray *_auxiliarySections;
    BOOL _auxiliarySectionsLoaded;
    PKPeerPaymentAssociatedAccountsController *_associatedAccountsController;
    PKPaymentAutoReloadSetupController *_autoReloadSetupController;
    PKDashboardTransactionFetcher *_currentMonthFetcher;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockTransactions;
    NSArray *_previousTransactions;
    BOOL _transactionsPerPeriodLoaded;
    BOOL _forceTransactionsUpdate;
    BOOL _hasForcedAccountsUpdate;
    NSObject<OS_dispatch_source> *_timerTransactions;
    NSDate *_lastTransactionReload;
    unsigned long long _transactionGrouping;
    PKContactResolver *_contactResolver;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    BOOL _performingPeerPaymentResolution;
    BOOL _performingAMPEnrollment;
    BOOL _performingLostModeExit;
    PKTransitBalanceModel *_transitBalanceModel;
    BOOL _canDisplayProducts;
    BOOL _productsLoaded;
    BOOL _canDisplayBalance;
    BOOL _balanceLoaded;
    BOOL _balanceSectionNeedsUpdate;
    long long _numberOfBalanceDashboardItems;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    PKPaymentVerificationController *_paymentVerificationController;
    BOOL _performingVerification;
    PKSecureElement *_secureElement;
    BOOL _isInRestrictedMode;
    int _sessionActiveToken;
    BOOL _sessionActive;
    NSArray *_tiles;
    BOOL _tilesLoaded;
    NSOrderedSet *_messages;
    NSOrderedSet *_secondaryMessages;
    BOOL _messagesLoaded;
    BOOL _secondaryMessagesLoaded;
    NSDateFormatter *_formatterYear;
    NSDateFormatter *_formatterMonth;
    NSDateFormatter *_formatterMonthDay;
    NSNumberFormatter *_formatterPercentage;
    struct { BOOL foreground; BOOL foregroundActive; } _activeState;
    NSMutableArray *_executionBlocksContentIsLoaded;
    PKPhysicalCardController *_physicalCardController;
    PKCreditAccountStatement *_currentStatement;
    NSArray *_upcomingScheduledPayments;
    NSArray *_pendingPayments;
    NSArray *_currentMonthTransactions;
    BOOL _familyCollectionLoaded;
    BOOL _accountUsersLoaded;
    BOOL _accountUserInvitationsLoaded;
    BOOL _physicalCardsLoaded;
    NSArray *_accountPendingFamilyMembers;
    BOOL _accountPendingFamilyMembersLoaded;
    PKInboxDataSource *_inboxDataSource;
    BOOL _scheduledPaymentsLoaded;
    NSDate *_startCurrentPeriod;
    PKSpendingSummary *_currentSummary;
    BOOL _pendingSummaryUpdate;
    BOOL _hasMoreSummaryUpdates;
    PKAccountServiceAccountResolutionController *_accountResolutionController;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockIcons;
    NSMutableSet *_iconDownloads;
    NSMutableSet *_iconFailedDownloads;
    NSMutableDictionary *_icons;
    BOOL _hasSuccessfulIconDownloads;
    NSString *_scaleKey;
    BOOL _showAMPEnrollmentMessage;
    UIImage *_AMPEnrollmentIcon;
    PKAMPEnrollmentManager *_AMPEnrollmentManager;
    NSArray *_engagementMessages;
    BOOL _engagementMessagesLoaded;
    NSMutableDictionary *_messageImagesCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockImages;
    NSMutableDictionary *_sourcesPerFundingSourceIdentifier;
    PKLinkedApplication *_linkedApplication;
    NSString *_lastReportedDiscoveryIdentifier;
    BOOL _shouldDisplayDeviceAssessmentEducation;
    unsigned long long _filterType;
    BOOL _shouldDisplayDailyCashFilter;
    PKSecureElementPassContactIssuerHelper *_contactIssuerHelper;
    NSArray *_incomingRequests;
    NSArray *_outgoingRequests;
    NSString *_incomingRequestActionInProgressRequestToken;
    FHSearchSuggestionController *_searchSuggestionController;
}

@property (retain, nonatomic) NSArray *weeks;
@property (retain, nonatomic) NSArray *months;
@property (retain, nonatomic) NSArray *recurringPeerPayments;
@property (retain, nonatomic) NSArray *upcomingRecurringPeerPayments;
@property (retain, nonatomic) PKPeerPaymentRecurringPayment *peerPaymentThresholdTopUp;
@property (nonatomic) BOOL recurringPeerPaymentsLoaded;
@property (retain, nonatomic) NSArray *accounts;
@property (nonatomic) BOOL accountsLoaded;
@property (nonatomic) BOOL allContentIsLoaded;
@property (weak, nonatomic) id<PKDashboardDataSourceDelegate> delegate;
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (retain, nonatomic) PKPeerPaymentWebService *peerPaymentWebService;
@property (retain, nonatomic) PKPaymentPass *pass;
@property (nonatomic) BOOL performingAccountUpdate;
@property (retain, nonatomic) PKPassPresentationContext *context;
@property (retain, nonatomic) NSError *accountUpdateError;
@property (retain, nonatomic) NSArray *transactionGroups;
@property (retain, nonatomic) PKPayLaterDashboardMessageComposer *payLaterDashboardMessageComposer;
@property (nonatomic) unsigned long long transactionsCount;
@property (retain, nonatomic) PKAccountService *accountService;
@property (nonatomic) BOOL allContentIsLoaded;
@property (weak, nonatomic) id<PKDashboardDataSourceDelegate> delegate;
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (retain, nonatomic) PKPeerPaymentWebService *peerPaymentWebService;
@property (retain, nonatomic) PKPaymentPass *pass;
@property (nonatomic) BOOL performingAccountUpdate;
@property (retain, nonatomic) PKPassPresentationContext *context;
@property (retain, nonatomic) NSError *accountUpdateError;
@property (retain, nonatomic) NSArray *transactionGroups;
@property (retain, nonatomic) PKPayLaterDashboardMessageComposer *payLaterDashboardMessageComposer;
@property (nonatomic) unsigned long long transactionsCount;
@property (retain, nonatomic) PKAccountService *accountService;
@property (retain, nonatomic) PKPayLaterFinancingPlansFetcher *plansFetcher;
@property (retain, nonatomic) PKPayLaterInstallmentPresenter *installmentPresenter;
@property (retain, nonatomic) NSArray *financingPlans;
@property (nonatomic) long long completedFinancingPlansCount;
@property (retain, nonatomic) NSArray *payLaterUpcomingInstallments;
@property (retain, nonatomic) NSDictionary *installmentIdentifierToFinancingPlan;
@property (retain, nonatomic) PKCurrencyAmount *payLaterDueNext30Days;
@property (retain, nonatomic) PKCurrencyAmount *payLaterTotalPending;
@property (retain, nonatomic) PKPayLaterCalendarViewController *payLaterCalendarViewController;
@property (retain, nonatomic) PKPayLaterPaymentIntentController *paymentIntentController;
@property (nonatomic) BOOL financingPlansLoaded;
@property (nonatomic) BOOL loadingFinancingPlans;
@property (nonatomic) BOOL hasMoreFinancingPlansToLoad;
@property (nonatomic) BOOL shouldDisplayPayLaterItems;
@property (nonatomic) BOOL hasPayLaterEligibleSpend;
@property (retain, nonatomic) NSOrderedSet *payLaterDashboardMessages;
@property (retain, nonatomic) PKCurrencyAmount *lastUpdatedBalance;
@property (retain, nonatomic) PKAppleBalanceAddMoneyUIManager *appleBalanceAddMoneyUIManager;
@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) PKAccountUserCollection *accountUserCollection;
@property (readonly, nonatomic) NSArray *accountUserInvitations;
@property (readonly, nonatomic) NSSet *physicalCards;
@property (readonly, nonatomic) PKFamilyMemberCollection *familyCollection;
@property (readonly, nonatomic) PKDashboardTransactionFetcher *transactionFetcher;
@property (readonly, nonatomic) PKContactAvatarManager *avatarManager;
@property (readonly, nonatomic) PKSpendingSummaryFetcher *summaryFetcher;
@property (readonly, nonatomic) PKTransactionSourceCollection *transactionSourceCollection;
@property (readonly, nonatomic) NSArray *years;
@property (readonly, nonatomic) NSArray *currentMonthTransactions;
@property (readonly, nonatomic) NSArray *pendingPayments;
@property (readonly, nonatomic) NSArray *upcomingScheduledPayments;
@property (readonly, nonatomic) NSArray *recurringPayments;
@property (weak, nonatomic) id<PKDashboardPaymentPassDataSourceDelegate> customDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PKPassGroupView *groupView;

- (void)reloadAccounts;
- (void)accountAdded:(id)a0;
- (void)accountRemoved:(id)a0;
- (void)dealloc;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (void)accountChanged:(id)a0;
- (void)passWithUniqueIdentifier:(id)a0 didUpdateTiles:(id)a1;
- (void)featureApplicationAdded:(id)a0;
- (void)_localeDidChangeNotification:(id)a0;
- (void)didUpdateFamilyMembers:(id)a0;
- (void)deleteItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)featureApplicationChanged:(id)a0;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (void)sharesDidUpdateWithPaymentPassWithUniqueIdentifier:(id)a0;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceiveMessage:(id)a1;
- (id)presentationContext;
- (void)featureApplicationRemoved:(id)a0;
- (id)itemAtIndexPath:(id)a0;
- (void)credential:(id)a0 forPaymentApplication:(id)a1 didUpdateRangingSuspensionReasons:(unsigned long long)a2;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceivePlanUpdate:(id)a1;
- (unsigned long long)numberOfSections;
- (void).cxx_destruct;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceiveBalanceUpdate:(id)a1;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didEnableMessageService:(BOOL)a1;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didUpdateWithTransitPassProperties:(id)a1;
- (id)titleForSection:(unsigned long long)a0;
- (void)accountFinancingPlanUpdated:(id)a0 oldFinancingPlan:(id)a1 accountIdentifier:(id)a2;
- (id)_contactResolver;
- (void)accountFinancingPlanAdded:(id)a0 accountIdentifier:(id)a1;
- (void)accountFinancingPlanRemoved:(id)a0 accountIdentifier:(id)a1;
- (void)accountUsersChanged:(id)a0 forAccountIdentifier:(id)a1;
- (void)didRemoveAppleBalancePromotionWithUniqueIdentifier:(id)a0 forAccountIdentifier:(id)a1;
- (void)didUpdateAppleBalancePromotion:(id)a0 forAccountIdentifier:(id)a1;
- (void)discoveryService:(id)a0 dialogRequestsChangedForPlacement:(id)a1;
- (void)discoveryServiceDidReceiveUpdatedDiscoveryEngagementMessages:(id)a0;
- (void)invalidatedSpendingSummariesOfType:(unsigned long long)a0;
- (void)invalidatedSpendingSummaryOfType:(unsigned long long)a0 startingWithDate:(id)a1;
- (void)invalidatedSummariesAvailable;
- (void)pendingRequestsChanged;
- (void)physicalCardsChanged:(id)a0 forAccountIdentifier:(id)a1;
- (void)recurringPaymentsChanged;
- (void)scheduledPaymentsChangedForAccountIdentifier:(id)a0;
- (void)secureElementDidEnterRestrictedMode:(id)a0;
- (void)secureElementDidLeaveRestrictedMode:(id)a0;
- (void)transactionsChanged:(id)a0;
- (BOOL)_isPayLaterPass;
- (id)_messageForIdentityFirstTimeUse;
- (void)_updateAccountEnhancedMerchants;
- (id)AMPEnagementPlacementForCurrentlyDisplayedPass;
- (id)_deviceAssessmentEducationImage;
- (id)_messageForRangingSuspendedPass;
- (void)_presentPassDetailsWithHandler:(id /* block */)a0;
- (void)_reloadMessages;
- (void)_updateBalanceAndPreventReload:(BOOL)a0;
- (BOOL)canDisplayPayLaterEligibleSpend;
- (id)messagesForSavingsAccountStatus;
- (BOOL)_accountCanBePresented:(id)a0;
- (void)_addPayLaterSectionsToReload:(id)a0;
- (void)_addToAMPButtonTappedForPass:(id)a0;
- (BOOL)_canDisplayBalance;
- (BOOL)_canFilterTransactions;
- (BOOL)_canShowPeerPaymentPendingRequests;
- (BOOL)_canShowPeerPaymentRecurringPayments;
- (BOOL)_canShowTransactions;
- (id)_cardSharingEducationMessages;
- (BOOL)_creditAccountItemTypeEnabled:(unsigned long long)a0;
- (unsigned long long)_creditAccountItemTypeForIndexPath:(id)a0;
- (id)_deletablePaymentTransactionForItem:(id)a0;
- (void)_deleteButtonTapped;
- (void)_dismissMessageForRecurringPayment:(id)a0;
- (void)_dismissRecurringPeerPaymentSuggestionsWithIdentifiers:(id)a0 dismissalType:(unsigned long long)a1;
- (id)_downloadMessageIconURLAndReloadIfNecessary:(id)a0;
- (id)_educationMessages;
- (void)_fetchAMPEnrollmentEligibility;
- (void)_fetchAMPEnrollmentIconIfNeeded:(id /* block */)a0;
- (void)_fetchMerchantForAuxiliarySections:(id)a0 pass:(id)a1 completion:(id /* block */)a2;
- (id)_fetchOpenSavingsAccount;
- (id)_formattedDateStringForDate:(id)a0;
- (BOOL)_isAppleBalancePass;
- (BOOL)_isCreditPass;
- (BOOL)_isExistingRecurringPeerPayment:(id)a0;
- (BOOL)_isPeerPaymentPass;
- (id)_lastPhysicalCardMessageDateKeyForPhysicalCardIdentifier:(id)a0;
- (void)_lostModeButtonTapped;
- (id)_messageForAMPEnrollment;
- (id)_messageForAccountPendingFamilyMembers;
- (id)_messageForAutoReload;
- (id)_messageForDeviceAssessmentEducation;
- (void)_messageForEnableNotificationsWithCompletion:(id /* block */)a0;
- (id)_messageForErrorCode:(unsigned long long)a0;
- (id)_messageForFirstMonthCoOwners;
- (void)_messageForInterestChargeWithCompletion:(id /* block */)a0;
- (void)_messageForPassInconsistencyWithCompletion:(id /* block */)a0;
- (id)_messageForPaymentApplicationStatus;
- (void)_messageForPaymentFailedWithCompletion:(id /* block */)a0;
- (id)_messageForPaymentInformationEventExtensionInstallation;
- (id)_messageForPeerPaymentAssociatedAccountLockedAccount;
- (id)_messageForPeerPaymentAssociatedAccountPending;
- (id)_messageForPeerPaymentAssociatedAccountStateChangedForSecurityReasons;
- (id)_messageForPeerPaymentFamilySharing;
- (void)_messageForPeerPaymentIdentityVerificationForRewardsWithCompletion:(id /* block */)a0;
- (id)_messageForPeerPaymentLockedAccountByAssociatedAccount;
- (void)_messageForPeerPaymentRewardsRedemptionWithCompletion:(id /* block */)a0;
- (id)_messageForPersonWithAmount:(id)a0 withHeuristicIds:(id)a1 andCurrencyCode:(id)a2;
- (id)_messageForSessionActive;
- (id)_messageForSetUpVirtualCardWithFeatureIdentifier:(unsigned long long)a0;
- (void)_messageForUnusableIdentityPassWithCompletion:(id /* block */)a0;
- (id)_messageForVirtualCardEnabledWithFeatureIdentifier:(unsigned long long)a0;
- (id)_messageFromEngagementMessage:(id)a0;
- (void)_messageFromPaymentServiceSuppressingPassStateChanges:(BOOL)a0 completion:(id /* block */)a1;
- (id)_messageIdentifierForRecurringPayment:(id)a0;
- (id)_messageImageWithName:(id)a0 extension:(id)a1;
- (void)_messagesForAccountStatusWithCompletion:(id /* block */)a0;
- (id)_messagesForAccountUserInvitations;
- (id)_messagesForAccountUserSetupCashForFamily;
- (id)_messagesForInstallmentPlans;
- (id)_messagesForLockedCardParticipants;
- (void)_messagesForPeerPaymentPendingRequestsWithCompletion:(id /* block */)a0;
- (id)_messagesForPhysicalCard;
- (id)_messagesToOrderPhysicalCardForUnderageParticipants;
- (void)_monthlyTransactionGroupsWithCompletion:(id /* block */)a0;
- (long long)_numberOfBalanceDashboardItems;
- (BOOL)_passAvailableForAMPEnrollment;
- (unsigned long long)_passFeature;
- (void)_peerPaymentAccountChanged:(id)a0;
- (id)_peerPaymentAccountStatusMessage;
- (struct { BOOL x0; BOOL x1; unsigned long long x2; })_peerPaymentDashboardCondition;
- (void)_peerPaymentResolutionTappedWithResolution:(unsigned long long)a0;
- (void)_pendingRequestActionButtonPressedWithRequest:(id)a0;
- (id)_physicalCardMessageIdentifierFromIdentifier:(id)a0 physicalCard:(id)a1;
- (void)_presentAboutClosedAccounts;
- (void)_presentAccountResolution:(unsigned long long)a0 forBusinessChatContext:(id)a1;
- (void)_presentAccountUserDetails:(id)a0;
- (void)_presentAccountUserInvitation:(id)a0;
- (void)_presentApplCashFamilySetupForFamilyMember:(id)a0;
- (void)_presentBalanceDetails;
- (void)_presentCardNumbers;
- (void)_presentCreateAccountUserInvitation;
- (void)_presentDetailsForRecurringPayment:(id)a0;
- (void)_presentInboxMessage:(id)a0;
- (void)_presentPassContactSupportWithOption:(unsigned long long)a0;
- (void)_presentPassDetailsWithAction:(unsigned long long)a0;
- (void)_presentPassWithPassUniqueIdentifier:(id)a0;
- (void)_presentPhysicalCardActivation;
- (void)_processUpcomingInstallmentsWithQueryResposne:(id)a0 sectionsToReload:(id)a1 changedIndexPaths:(id)a2;
- (void)_processUpdatedCompletedFinancingPlansCount:(long long)a0 sectionsToReload:(id)a1 changedIndexPaths:(id)a2;
- (void)_processUpdatedFinancingPlans:(id)a0 sectionsToReload:(id)a1 changedIndexPaths:(id)a2;
- (id)_recipientNameForAddress:(id)a0;
- (void)_recurringPeerPaymentSuggestionsWithCompletion:(id /* block */)a0;
- (void)_reloadSecondaryMessages;
- (void)_reloadTransactionGrouping;
- (id)_replaceDashboardMessage:(id)a0 placeholder:(id)a1 replacement:(id)a2;
- (id)_replaceDashboardMessagePlaceholders:(id)a0;
- (BOOL)_shouldPaymentMessageAppear:(id)a0;
- (id)_titleForErrorCode:(unsigned long long)a0;
- (BOOL)_topUpEnabled;
- (void)_updateAccountPromotions;
- (void)_updateAccountRewardsDataIfNecessary;
- (void)_updateAccounts:(id)a0;
- (void)_updateBalance;
- (void)_updateDiscoveryEngagementMessageIfNeeded:(id)a0;
- (void)_updateTransactionSourceCollection;
- (void)_updateTransactionsTimer;
- (void)_updateTransitBalanceProperties:(id)a0 dynamicBalances:(id)a1 dynamicPlans:(id)a2;
- (void)_updateWithFamilyCollection:(id)a0;
- (void)_updateWithTiles:(id)a0;
- (void)_updateWithTransactionGroups:(id)a0;
- (void)_verificationButtonTapped;
- (id)_virtualCardDashboardImage;
- (void)_yearlyTransactionGroupsWithCompletion:(id /* block */)a0;
- (id)accountItemAtIndex:(unsigned long long)a0;
- (void)accountServiceAccountResolutionController:(id)a0 requestsPresentViewController:(id)a1 animated:(BOOL)a2;
- (id /* block */)actionCallingSelectorWeakly:(SEL)a0;
- (id)appleBalanceAccountItem;
- (void)appleBalanceDashboardMessagesWithCompletion:(id /* block */)a0;
- (void)autoReloadSetupController:(id)a0 requestsDismissViewController:(id)a1;
- (void)autoReloadSetupController:(id)a0 requestsPresentViewController:(id)a1;
- (void)autoReloadSetupControllerDidCompleteWithAmount:(id)a0 threshold:(id)a1;
- (BOOL)canDeleteItem:(id)a0;
- (BOOL)canDisplayAppleBalanceBalance;
- (BOOL)canDisplayPayLaterBalance;
- (BOOL)canDisplayPayLaterCompletedFinancingPlanItems;
- (BOOL)canDisplayPayLaterFinancingPlans;
- (BOOL)canDisplayPayLaterUpcomingPayments;
- (BOOL)canDisplayPeerPaymentBalanceModule;
- (void)contactIssuerHelper:(id)a0 didRequestDismissViewControllerAnimated:(BOOL)a1 completion:(id /* block */)a2;
- (void)contactIssuerHelper:(id)a0 didRequestPresentViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)dashboardMessageComposer:(id)a0 requestPresentFinancingPlanDetails:(id)a1;
- (void)dashboardMessageComposer:(id)a0 requestPresentPassDetailsForPass:(id)a1;
- (void)dashboardMessageComposer:(id)a0 requestPresentViewController:(id)a1;
- (void)dashboardMessageComposer:(id)a0 requestPushViewController:(id)a1;
- (void)didChangeVerificationPresentation;
- (void)dismissOnDeviceAssessmentEducation;
- (void)dismissPendingRequestDashboardMessageWithRequest:(id)a0;
- (void)dismissVerificationViewControllerAnimated:(BOOL)a0;
- (void)executeAfterContentIsLoaded:(id /* block */)a0;
- (void)executeEngagementActionForURL:(id)a0;
- (id)footerTextItemForSection:(unsigned long long)a0;
- (id)groupItemForTransactionGroup:(id)a0;
- (void)groupViewDidChangeFrontmostPassView:(id)a0 withContext:(id)a1;
- (void)groupViewDidUpdatePassView:(id)a0;
- (void)inboxDataSourceDidUpdateInboxMessages:(id)a0;
- (id)initWithGroupView:(id)a0 context:(id)a1;
- (BOOL)isListLayoutForSection:(unsigned long long)a0;
- (void)linkedApplicationDidChangeState:(id)a0;
- (void)loadSummariesWithForceReload:(BOOL)a0;
- (id)messageForSavingsAccountFDIC;
- (void)messageForSavingsRewardsRedemptionWithCompletion:(id /* block */)a0;
- (unsigned long long)numberOfAccounts;
- (long long)numberOfAppleBalanceBalanceDashboardItems;
- (long long)numberOfCompletedFinancingPlanItems;
- (long long)numberOfFinancingPlansEnabled;
- (long long)numberOfPayLaterBalanceDashboardItems;
- (long long)numberOfPayLaterEligibleSpend;
- (long long)numberOfPayLaterUpcomingPayments;
- (long long)numberOfTransitItemsEnabled;
- (unsigned long long)numberOfUpcomingRecurringPeerPayments;
- (void)openDeviceAssessmentEducationLearnMore;
- (id)payLaterAccountItem;
- (id)payLaterCompleteFinancingPlansItemForIndexPath:(id)a0;
- (id)payLaterEligibleSpendItemForIndexPath:(id)a0;
- (id)payLaterFinancingPlanItemForIndexPath:(id)a0;
- (id)payLaterFinancingPlanSeeAllPaymentsItem;
- (id)payLaterFooterTextItemForSection:(unsigned long long)a0;
- (id)payLaterInstallmentItemForIndexPath:(id)a0;
- (id)paymentTransactionItemForPayment:(id)a0;
- (id)paymentTransactionItemForPendingRequest:(id)a0;
- (id)paymentTransactionItemForTransaction:(id)a0;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsDismissCurrentViewControllerAnimated:(BOOL)a1;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsPresentViewController:(id)a1 animated:(BOOL)a2;
- (id)peerPaymentBalanceItem;
- (void)presentPayLaterCalendarViewController;
- (void)presentVerificationViewController:(id)a0 animated:(BOOL)a1;
- (id)recurringPaymentDashboardMessages;
- (void)reloadAccount;
- (void)reloadAccountPendingMembersWithNewMembers:(id)a0;
- (void)reloadAccountUserInvitationsWithNewAccountUserInvitations:(id)a0;
- (void)reloadAccountUsersWithNewAccountUserCollection:(id)a0;
- (void)reloadAllContent;
- (void)reloadAppleBalance;
- (void)reloadAuxiliaryItems;
- (void)reloadDialogRequests;
- (void)reloadFamilyCollection;
- (void)reloadFinancingPlans;
- (void)reloadFrontmostPass;
- (void)reloadMessages;
- (void)reloadPeerPaymentPendingRequestsWithCompletion:(id /* block */)a0;
- (void)reloadPhysicalCardsWithNewPhysicalCards:(id)a0;
- (void)reloadRecurringPeerPaymentsWithCompletion:(id /* block */)a0;
- (void)reloadScheduledPayments;
- (void)reloadSecondaryMessages;
- (void)reloadTiles;
- (void)reloadTransactionGroups;
- (void)reloadTransactions;
- (void)reloadTransitSection;
- (void)reportDisplayedEngagementMessageIfNeeded:(id)a0;
- (id)revokingAccessMessage;
- (void)setDataSourceDelegate:(id)a0;
- (void)summaryTypeDidChange;
- (unsigned long long)transitItemForItemIndex:(long long)a0;
- (BOOL)transitItemIsEnabled:(unsigned long long)a0;
- (id)upcomingRecurringPeerPaymentItemAtIndex:(unsigned long long)a0;
- (void)updateContentIsLoaded;
- (void)updateWithTransactions:(id)a0;
- (void)viewControllerDidCancelSetupFlow:(id)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (void)virtualCardEnrollmentViewController:(id)a0 didCompleteWithSuccess:(BOOL)a1;
- (void)visibilityDidChangeToState:(unsigned char)a0;

@end
