@class PKPayLaterFinancingPlan, PKBusinessChatController, PKAccountService, NSArray, PKPayLaterPaymentIntentController, NSDateFormatter, PKAccount, PKPaymentPass, NSMutableSet;
@protocol PKPayLaterDashboardMessageComposerDelegate;

@interface PKPayLaterDashboardMessageComposer : NSObject {
    id<PKPayLaterDashboardMessageComposerDelegate> _delegate;
    unsigned long long _context;
    PKPaymentPass *_payLaterPass;
    PKAccountService *_accountService;
    PKPayLaterPaymentIntentController *_paymentIntentController;
    NSArray *_allFinancingPlans;
    BOOL _isAllContext;
    NSDateFormatter *_shortDateFormatter;
    NSMutableSet *_dashboardMessagesThatNeedSpinners;
    long long _settingsNotificationStatus;
    PKBusinessChatController *_businessChatController;
}

@property (retain, nonatomic) PKAccount *payLaterAccount;
@property (retain, nonatomic) PKPayLaterFinancingPlan *financingPlan;

+ (void)resetPayLaterDashboardCache;

- (void).cxx_destruct;
- (id)_accountUnusualActivityDetected;
- (id)_financingPlanOutstandingCredit;
- (id)_financingPlanWithdrawnDisputes;
- (id)_systemImageWithName:(id)a0 tintColor:(id)a1;
- (id)_accountClosed;
- (id)_accountLocked;
- (id)_accountRestrictedNoPastDuePlans;
- (id)_accountRestrictedWithPastDuePlans;
- (id)_autoPayAvailableForBNPL;
- (id)_autoPayAvailableMessageForSharedCachePrefix:(id)a0 identifierKeyPrefix:(id)a1 productType:(unsigned long long)a2 messageString:(id)a3;
- (void)_displayDisputeEvidenceRequiredViewControllerForFinancingPlan:(id)a0 dispute:(id)a1;
- (void)_displayDisputeExplanationViewControllerForFinancingPlan:(id)a0 contentType:(unsigned long long)a1 messageIdentifier:(id)a2;
- (id)_financingPlanActiveMilitary;
- (id)_financingPlanApprovedDisputes;
- (id)_financingPlanCanceled;
- (id)_financingPlanChargedOff;
- (id)_financingPlanDisasterRecovery;
- (id)_financingPlanEvidenceRequestedDisputes;
- (id)_financingPlanHardshipBenefitorPlan;
- (id)_financingPlanInProgressDisputes;
- (id)_financingPlanPaymentReversalMessage;
- (id)_financingPlanProActiveCancellation;
- (id)_financingPlanRAPDeferral;
- (id)_financingPlanRefundIssued;
- (id)_financingPlanRefundRevoked;
- (id)_financingPlanRejectedDisputes;
- (id)_financingPlanSplitDisputes;
- (id)_financingPlanUnresolvedDisputeState;
- (id)_flagImage;
- (id)_payLaterFinancingDeclinedPayments;
- (id)_payLaterFinancingPlanPastDue;
- (id)_payLaterWelcomeMessageForSharedCacheKey:(id)a0 identifierKey:(id)a1 hasValidPlanCount:(BOOL)a2 messageString:(id)a3;
- (id)_payLaterWelcomeMessageWithNoPlans;
- (id)_payLaterWelcomeMessageWithPlans;
- (id)_pencilImage;
- (void)_presentBusinessChatForApplePayLaterAccountWithTopicType:(unsigned long long)a0;
- (void)_presentBusinessChatForFinancingPlan:(id)a0 topicType:(unsigned long long)a1;
- (void)_presentBusinessChatWithContext:(id)a0;
- (id)_reverseImage;
- (void)_showSpinnerForDashboardMessageIdentifier:(id)a0 showSpinner:(BOOL)a1;
- (void)_updateSharedCacheForKey:(id)a0 value:(BOOL)a1 reloadMessages:(BOOL)a2;
- (id)_warningImage;
- (id)dashboardMessages;
- (id)initWithContext:(unsigned long long)a0 allFinancingPlans:(id)a1 payLaterPass:(id)a2 payLaterAccount:(id)a3 financingPlan:(id)a4 paymentIntentController:(id)a5 delegate:(id)a6;
- (void)preflightDashboardMessagesWithCompletion:(id /* block */)a0;

@end
