@class NSString, WRWorkflow;

@interface WRWorkflowProviderSingleWorkflow : WRWorkflowProvider {
    NSString *_workflowName;
    WRWorkflow *_workflow;
    id /* block */ _callback;
}

- (void).cxx_destruct;
- (void)handleTaskingChanged:(BOOL)a0;
- (id)initWithWorkflowName:(id)a0 queue:(id)a1 callback:(id /* block */)a2;

@end
