@class WFContextualAction, WFContextualActionContext;

@interface WFContextualActionRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) WFContextualAction *action;
@property (readonly, nonatomic) WFContextualActionContext *context;

+ (BOOL)supportsSecureCoding;

- (id)kind;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(id)a0 context:(id)a1;

@end
