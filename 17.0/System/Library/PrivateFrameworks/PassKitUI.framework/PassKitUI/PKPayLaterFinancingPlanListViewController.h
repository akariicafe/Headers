@class PKBusinessChatController, NSString, PKAccountService, PKPayLaterFinancingPlanListViewControllerConfiguration, PKAccountServicePayLaterFinancingPlanQuery, PKPayLaterFinancingPlanListSectionController;

@interface PKPayLaterFinancingPlanListViewController : PKPayLaterViewController <PKPayLaterFinancingPlanListSectionControllerDelegate> {
    PKPayLaterFinancingPlanListViewControllerConfiguration *_configuration;
    PKPayLaterFinancingPlanListSectionController *_sectionController;
    PKBusinessChatController *_businessChatController;
    PKAccountService *_accountService;
    PKAccountServicePayLaterFinancingPlanQuery *_primaryFinancingPlansUpdateQuery;
    PKAccountServicePayLaterFinancingPlanQuery *_secondaryFinancingPlansUpdateQuery;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activePlansAndCompletedPlansCountListViewControllerWithPayLaterAccount:(id)a0 paymentIntentController:(id)a1 financingPlans:(id)a2 completedFinancingPlansCount:(long long)a3;
+ (id)completedFinancingPlansListViewControllerWithPayLaterAccount:(id)a0 paymentIntentController:(id)a1 completedFinancingPlans:(id)a2 completedFinancingPlansQuery:(id)a3;
+ (id)disputeFinancingPlansListViewControllerWithPayLaterAccount:(id)a0 payLaterPass:(id)a1 businessChatTopic:(id)a2 financingPlans:(id)a3 completedFinancingPlans:(id)a4 financingPlansUpdateQuery:(id)a5 completedFinancingPlansQuery:(id)a6;
+ (id)financingPlansListViewControllerWithPayLaterAccount:(id)a0 paymentIntentController:(id)a1 financingPlans:(id)a2 financingPlansUpdateQuery:(id)a3;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)pageTag;
- (void)_updatedFinancingPlan:(id)a0;
- (id)additionalAnalyticsDictionary;
- (void)didAddFinancingPlan:(id)a0;
- (void)didRemoveFinancingPlan:(id)a0;
- (void)didUpdateFinancingPlan:(id)a0;
- (void)didUpdatePayLaterAccount:(id)a0;
- (id)initWithPayLaterAccount:(id)a0 context:(unsigned long long)a1 primaryFinancingPlans:(id)a2 secondaryFinancingPlans:(id)a3 tertiaryFinancingPlansCount:(long long)a4 payLaterPass:(id)a5 businessChatTopic:(id)a6 paymentIntentController:(id)a7 primaryFinancingPlansUpdateQuery:(id)a8 secondaryFinancingPlansUpdateQuery:(id)a9;
- (void)openBusinessChatForTopic:(id)a0 financingPlan:(id)a1;

@end
