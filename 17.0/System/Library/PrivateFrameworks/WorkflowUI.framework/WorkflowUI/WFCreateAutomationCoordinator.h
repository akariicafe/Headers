@class NSString, UINavigationController, WFWorkflowReference, WFHomeManager, WFTriggerManager, WFConfiguredTriggerRecord, WFWorkflow, WFDatabase;
@protocol WFCreateAutomationCoordinatorDelegate;

@interface WFCreateAutomationCoordinator : NSObject <WFAutomationSelectTypeViewControllerDelegate, WFTriggerConfigurationViewControllerDelegate, WFTriggerComposeViewControllerDelegate, WFAutomationSummaryViewControllerDelegate, WFTriggerSuggestionViewControllerDelegate, HUTriggerEditorDelegate>

@property (retain, nonatomic) WFTriggerManager *triggerManager;
@property (retain, nonatomic) NSString *triggerIdentifier;
@property (retain, nonatomic) WFDatabase *database;
@property (retain, nonatomic) WFConfiguredTriggerRecord *triggerRecord;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) WFWorkflowReference *workflowReference;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) WFHomeManager *homeManager;
@property (weak, nonatomic) id<WFCreateAutomationCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)triggerEditor:(id)a0 didFinishWithTriggerBuilder:(id)a1;
- (void)automationSummaryViewController:(id)a0 didFinishWithTrigger:(id)a1;
- (void)buildViewControllerForHomeTriggerChooserStepWithBackButtonAction:(unsigned long long)a0 hostingViewController:(id)a1 completion:(id /* block */)a2;
- (void)buildViewControllerForPersonalTriggerChooserStepWithBackButtonAction:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)finishWithTriggerRecord:(id)a0;
- (id)initWithDatabase:(id)a0 homeManager:(id)a1;
- (void)openHomeApp;
- (void)selectTypeViewController:(id)a0 didChooseAutomationType:(unsigned long long)a1;
- (void)selectTypeViewController:(id)a0 didChooseTrigger:(id)a1;
- (void)startAtStep:(unsigned long long)a0 hostingViewController:(id)a1 completion:(id /* block */)a2;
- (void)trackAddAutomationActions;
- (void)trackAddAutomationWithRecord:(id)a0;
- (void)triggerComposeViewController:(id)a0 didFinishWithWorkflow:(id)a1;
- (void)triggerComposeViewControllerDidCancel:(id)a0;
- (void)triggerConfigurationViewController:(id)a0 didFinishWithTrigger:(id)a1;
- (void)triggerSuggestionViewControllerDidFinish:(id)a0 actions:(id)a1 editable:(BOOL)a2 selectedEntryMetadata:(id)a3;
- (void)triggerSuggestionViewControllerDidFinish:(id)a0 reference:(id)a1 selectedEntryMetadata:(id)a2;

@end
