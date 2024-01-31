@class WFWorkflowRunningContext;

@interface WFWidgetWorkflowRunnerClient : WFWorkflowRunnerClient

@property (readonly, nonatomic) WFWorkflowRunningContext *context;

- (id)initWithWorkflowIdentifier:(id)a0 location:(long long)a1;

@end
