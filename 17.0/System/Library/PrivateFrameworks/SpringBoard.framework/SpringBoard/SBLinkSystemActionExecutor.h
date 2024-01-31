@class NSString, WFStaccatoWorkflowRunnerClient, NSObject;
@protocol OS_dispatch_queue, SBSystemActionPreviewInvalidatable;

@interface SBLinkSystemActionExecutor : SBAbstractSystemActionExecutor <WFWorkflowRunnerClientDelegate> {
    id<SBSystemActionPreviewInvalidatable> _previewAssertion;
    WFStaccatoWorkflowRunnerClient *_runnerClient;
    NSObject<OS_dispatch_queue> *_prewarmQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;
- (BOOL)_isExecuting;
- (id)_beginInteractiveExecutionWithContext:(id)a0 error:(out id *)a1;
- (BOOL)_canBeExecuted;
- (void)_cancelPreviewing;
- (void)_finishExecutingWithResult:(id)a0;
- (id)_previewWithCoordinator:(id)a0;
- (id)initWithSystemAction:(id)a0;

@end
