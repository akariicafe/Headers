@class WFWorkflowRunningContext;

@interface WFHandoffRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) WFWorkflowRunningContext *context;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;

@end
