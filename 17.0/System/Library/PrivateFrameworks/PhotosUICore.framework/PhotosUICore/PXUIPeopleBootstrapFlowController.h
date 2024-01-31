@class PXPeopleBootstrapSummaryViewController, PXPeopleBootstrapConfirmationViewController, PHPerson;

@interface PXUIPeopleBootstrapFlowController : PXPeopleBootstrapFlowController

@property (retain, nonatomic) PXPeopleBootstrapConfirmationViewController *confirmationViewController;
@property (retain, nonatomic) PXPeopleBootstrapSummaryViewController *summaryViewController;
@property (readonly, nonatomic) PHPerson *sourcePerson;

- (void)done:(id)a0;
- (void).cxx_destruct;
- (id)_postNamingViewControllers;
- (void)computeViewControllersForBootstrapFlow;
- (void)recomputeViewControllersForChangeInKeyPath:(id)a0;

@end
