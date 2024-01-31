@class PKPayLaterPaymentIntentController, NSNumberFormatter, PKPayLaterButtonRow, PKPayLaterFinancingPlanPaymentScheduleComposer, PKPayLaterTitleDetailRow, NSOrderedSet, PKPayLaterSubtitleRow, PKPayLaterStackedLeadingTrailingRow, NSString, PKPaymentPass, PKPayLaterFinancingPlan, PKCollectionHeaderView, NSDateFormatter, PKPayLaterTitleDetailValueRow, UIImage;

@interface PKPayLaterFinancingPlanSectionController : PKPayLaterSectionController <PKPayLaterFinancingPlanPaymentScheduleComposerDelegate, PKPayLaterFinancingPlanPaymentScheduleComposerDataSource, PKDashboardMessagesViewDelegate> {
    PKPayLaterTitleDetailRow *_fundingSourceRow;
    PKPaymentPass *_payLaterPass;
    PKPayLaterStackedLeadingTrailingRow *_totalPaidRow;
    PKPayLaterTitleDetailRow *_totalFinancedRow;
    PKPayLaterTitleDetailValueRow *_statusSummaryRow;
    PKPayLaterSubtitleRow *_miniMirandaRow;
    PKPayLaterButtonRow *_reportIssueButton;
    PKPayLaterFinancingPlanPaymentScheduleComposer *_paymentScheduleComposer;
    NSString *_currentDashboardMessageIdentifier;
    long long _currentDashboardMessageIndex;
    PKCollectionHeaderView *_headerView;
    BOOL _useRawMerchantName;
    NSDateFormatter *_shortDateFormatter;
    NSDateFormatter *_mediumDateFormatter;
    NSNumberFormatter *_numberFormatter;
}

@property (readonly, nonatomic) UIImage *merchantIcon;
@property (retain, nonatomic) PKPayLaterFinancingPlan *financingPlan;
@property (retain, nonatomic) PKPayLaterPaymentIntentController *paymentIntentController;
@property (retain, nonatomic) NSOrderedSet *dashboardMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)identifiers;
- (void).cxx_destruct;
- (double)headerViewHeight;
- (id)listLayoutConfigurationWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (void)_configureFundingSourceSection:(id)a0;
- (void)_configureDashboardMessagesSection:(id)a0;
- (void)_configureDefaultSummarySection:(id)a0;
- (void)_configureMiniMirandaSection:(id)a0;
- (void)_configurePaymentScheduleSection:(id)a0;
- (void)_configureStatusInformationSummarySection:(id)a0;
- (void)_configureSummarySection:(id)a0;
- (unsigned long long)_dashboardMessageIndexForIdentifier:(id)a0 inMessages:(id)a1;
- (void)_handleHeaderTapRecognizer:(id)a0;
- (id)_totalCostRow;
- (void)configureCellForRegistration:(id)a0 item:(id)a1;
- (void)configureHeaderView:(id)a0 forSectionIdentifier:(id)a1;
- (Class)headerViewClassForSectionIdentifier:(id)a0;
- (id)initWithFinancingPlan:(id)a0 payLaterAccount:(id)a1 payLaterPass:(id)a2 dynamicContentPage:(id)a3 merchantIcon:(id)a4 paymentIntentController:(id)a5 delegate:(id)a6;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (void)messagesView:(id)a0 scrolledToMessageWithIdentifier:(id)a1;
- (BOOL)messagesView:(id)a0 shouldEnqueueEventForView:(id)a1;
- (void)reportAnalyticsEvent:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
