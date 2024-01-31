@class NSArray;

@interface WRWorkflowProviderAllWorkflows : WRWorkflowProvider {
    NSArray *_workflows;
    id /* block */ _callback;
}

- (void).cxx_destruct;
- (void)handleTaskingChanged:(BOOL)a0;
- (id)initWithQueue:(id)a0 callback:(id /* block */)a1;

@end
