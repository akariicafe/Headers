@class NSString, WFWorkflowRunEvent, WFWorkflowRunnerClient, WFConfiguredTrigger;
@protocol WFDatabaseProvider, WFTriggerEventRunnerDelegate;

@interface WFTriggerEventRunner : NSObject <WFWorkflowRunnerClientDelegate>

@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) id<WFTriggerEventRunnerDelegate> delegate;
@property (retain, nonatomic) WFWorkflowRunEvent *inProgressRunEvent;
@property (retain, nonatomic) WFConfiguredTrigger *inProgressTrigger;
@property (retain, nonatomic) WFWorkflowRunnerClient *inProgressRunnerClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDatabaseProvider:(id)a0 delegate:(id)a1;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (BOOL)isRunningWorkflowWithIdentifier:(id)a0;
- (void)logPowerLogEventForConfiguredTrigger:(id)a0 workflowReference:(id)a1;
- (BOOL)startRunningWorkflow:(id)a0 forTrigger:(id)a1 eventInfo:(id)a2;

@end
