@class NSString;

@interface QLShortcutsActionsRunner : NSObject <WFContextualActionRunnerClientDelegate> {
    id /* block */ _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutputFiles:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (void)runAction:(id)a0 withContext:(id)a1 completionHandler:(id /* block */)a2;

@end
