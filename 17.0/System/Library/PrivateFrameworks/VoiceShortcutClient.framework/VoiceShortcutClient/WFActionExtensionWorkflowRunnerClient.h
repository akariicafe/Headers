@class NSDictionary;

@interface WFActionExtensionWorkflowRunnerClient : WFWorkflowRunnerClient

@property (copy, nonatomic) NSDictionary *javaScriptRunners;

- (void).cxx_destruct;
- (id)initWithWorkflowIdentifier:(id)a0 input:(id)a1 javaScriptRunners:(id)a2;

@end
