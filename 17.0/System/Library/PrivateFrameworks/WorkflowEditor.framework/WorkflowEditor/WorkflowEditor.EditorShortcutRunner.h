@interface WorkflowEditor.EditorShortcutRunner : NSObject <WFWorkflowRunnerClientDelegate> {
    void /* unknown type, empty encoding */ workflow;
    void /* unknown type, empty encoding */ shortcutRunnerStateObservation;
    void /* unknown type, empty encoding */ onLifecycleEvent;
    void /* unknown type, empty encoding */ _runningState;
    void /* unknown type, empty encoding */ runnerClient;
    void /* unknown type, empty encoding */ isRunning;
    void /* unknown type, empty encoding */ progress;
    void /* unknown type, empty encoding */ progressModeler;
    void /* unknown type, empty encoding */ modelerStateObservation;
}

- (id)init;
- (void).cxx_destruct;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithAllResults:(id)a1 error:(id)a2 cancelled:(BOOL)a3;

@end
