@protocol WFSpotlightResultRunnable;

@interface WFSpotlightResultWorkflowRunnerClient : WFWorkflowRunnerClient {
    id<WFSpotlightResultRunnable> _runnable;
}

- (void)start;
- (void).cxx_destruct;
- (id)initWithIntent:(id)a0;
- (void)handleWorkflowRunResult:(id)a0 completion:(id /* block */)a1;
- (id)initWithIntent:(id)a0 executionContext:(long long)a1;
- (id)initWithRunnable:(id)a0 surface:(unsigned long long)a1;
- (BOOL)runnableRequiresSpotlightRefresh:(id)a0;

@end
