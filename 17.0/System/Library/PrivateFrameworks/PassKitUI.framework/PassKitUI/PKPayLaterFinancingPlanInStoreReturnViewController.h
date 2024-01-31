@class PKPayLaterFinancingPlanInStoreReturnSectionController, PKPayLaterFinancingPlan;

@interface PKPayLaterFinancingPlanInStoreReturnViewController : PKPayLaterViewController {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterFinancingPlanInStoreReturnSectionController *_sectionController;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)pageTag;
- (id)additionalAnalyticsDictionary;
- (void)didUpdateFinancingPlan:(id)a0;
- (id)initWithFinancingPlan:(id)a0 payLaterAccount:(id)a1;

@end
