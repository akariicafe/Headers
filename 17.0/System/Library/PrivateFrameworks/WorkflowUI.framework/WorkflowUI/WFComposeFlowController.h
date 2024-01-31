@class UINavigationController, WFWizardNamePresentationManager, WFDatabase, WFWorkflow, NSString, UIViewController;
@protocol WFComposeFlowControllerDelegate;

@interface WFComposeFlowController : NSObject <WFWorkflowWizardNameViewControllerDelegate>

@property (retain, nonatomic) WFWizardNamePresentationManager *presentationManager;
@property (weak, nonatomic) id<WFComposeFlowControllerDelegate> delegate;
@property (readonly, weak, nonatomic) UIViewController *presenter;
@property (readonly, weak, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, weak, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) BOOL workflowHasContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)finishEditing:(BOOL)a0;
- (id)initWithPresenter:(id)a0 navigationController:(id)a1 database:(id)a2 workflow:(id)a3;
- (void)startCancelFlowWithButton:(id)a0;
- (void)startSaveFlow;
- (void)workflowWizardNameViewController:(id)a0 didFinishWithName:(id)a1;

@end
