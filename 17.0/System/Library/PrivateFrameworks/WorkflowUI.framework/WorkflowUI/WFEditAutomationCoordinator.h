@class NSString, WFTrigger, UINavigationController, WFWorkflowReference, WFAutomationSummaryViewController, WFTriggerManager, WFConfiguredTriggerRecord, WFWorkflow, WFDatabase;
@protocol WFEditAutomationCoordinatorDelegate;

@interface WFEditAutomationCoordinator : NSObject <UINavigationControllerDelegate, WFAutomationSummaryViewControllerDelegate, WFTriggerComposeViewControllerDelegate, WFTriggerSuggestionViewControllerDelegate, WFTriggerConfigurationViewControllerDelegate>

@property (retain, nonatomic) WFDatabase *database;
@property (retain, nonatomic) WFTriggerManager *triggerManager;
@property (readonly, nonatomic) WFConfiguredTriggerRecord *triggerRecord;
@property (readonly, copy, nonatomic) NSString *triggerIdentifier;
@property (retain, nonatomic) WFTrigger *trigger;
@property (retain, nonatomic) WFWorkflowReference *workflowReference;
@property (retain, nonatomic) WFWorkflow *editingWorkflow;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) WFAutomationSummaryViewController *automationSummaryViewController;
@property (weak, nonatomic) id<WFEditAutomationCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finish;
- (id)start;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)cancel;
- (void)automationSummaryViewController:(id)a0 didFinishWithTrigger:(id)a1;
- (void)automationSummaryViewController:(id)a0 editTrigger:(id)a1;
- (void)automationSummaryViewController:(id)a0 editWorkflow:(id)a1;
- (void)automationSummaryViewControllerChooseShortcut:(id)a0;
- (void)automationSummaryViewControllerDidCancel:(id)a0;
- (id)initWithDatabase:(id)a0 triggerRecord:(id)a1 triggerIdentifier:(id)a2 workflowReference:(id)a3;
- (void)triggerComposeViewController:(id)a0 didFinishWithWorkflow:(id)a1;
- (void)triggerComposeViewControllerDidCancel:(id)a0;
- (void)triggerConfigurationViewController:(id)a0 didFinishWithTrigger:(id)a1;
- (void)triggerSuggestionViewControllerDidFinish:(id)a0 actions:(id)a1 editable:(BOOL)a2 selectedEntryMetadata:(id)a3;
- (void)triggerSuggestionViewControllerDidFinish:(id)a0 reference:(id)a1 selectedEntryMetadata:(id)a2;
- (void)updateUIForShowingViewController:(id)a0;

@end
