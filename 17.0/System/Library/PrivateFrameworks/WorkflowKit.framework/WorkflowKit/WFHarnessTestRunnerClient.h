@protocol WFHarnessTestRunnerClientDelegate;

@interface WFHarnessTestRunnerClient : WFWorkflowRunnerClient

@property (nonatomic) id<WFHarnessTestRunnerClientDelegate> testDelegate;

- (void)handleWorkflowRunResult:(id)a0 completion:(id /* block */)a1;
- (id)initWithRunRequest:(id)a0;

@end
