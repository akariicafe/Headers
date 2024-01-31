@class PKPayLaterDynamicContentPageItem, NSString, PKPayLaterFinancingPlan, PKPayLaterDynamicContentPage, PKPayLaterFinancingPlanCancellationSectionController, UIBarButtonItem;

@interface PKPayLaterFinancingPlanCancellationViewController : PKPayLaterViewController <PKPayLaterFinancingPlanCancellationSectionControllerDelegate> {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterDynamicContentPage *_dynamicContentPage;
    PKPayLaterFinancingPlanCancellationSectionController *_sectionController;
    UIBarButtonItem *_rightbarButton;
    PKPayLaterDynamicContentPageItem *_selectedReason;
    BOOL _shouldLoadCancellationReasons;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)planCancellationReasonsDynamincContentForPayLaterAccount:(id)a0 financingPlan:(id)a1 completion:(id /* block */)a2;

- (void)viewDidLoad;
- (void)_updateView;
- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)_preflightIfNecessary;
- (void)_submitButtonTapped;
- (void)_updateRightBarButtonEnabledState;
- (void)didSelectCancellationRow:(id)a0;
- (id)initWithPayLaterAccount:(id)a0 financingPlan:(id)a1 dynamicContentPage:(id)a2;

@end
