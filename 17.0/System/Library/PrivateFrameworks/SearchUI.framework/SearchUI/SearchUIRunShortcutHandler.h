@class WFWorkflowRunViewSource, NSString, WFWorkflowRunnerClient, ATXActionSearchResultExecution;

@interface SearchUIRunShortcutHandler : SearchUIOpenUserActivityHandler <ATXActionSearchResultExecutionDelegate, WFWorkflowRunnerClientDelegate>

@property (retain, nonatomic) ATXActionSearchResultExecution *action;
@property (retain, nonatomic) WFWorkflowRunnerClient *workFlowRunnerClient;
@property (retain, nonatomic) WFWorkflowRunViewSource *runViewSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fallbackCommandForRowModel:(id)a0 environment:(id)a1;

- (unsigned long long)destination;
- (id /* block */)actionProvider;
- (void).cxx_destruct;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;
- (void)actionSearchResultExecution:(id)a0 didDismissRemoteAlertWithReason:(long long)a1 actionCompleted:(BOOL)a2 withResult:(long long)a3 shouldClearAction:(BOOL)a4;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (void)removeRowModel;
- (BOOL)shouldDeselectAfterExecution;

@end
