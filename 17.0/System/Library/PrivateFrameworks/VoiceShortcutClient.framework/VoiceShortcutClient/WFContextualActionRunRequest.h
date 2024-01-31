@class WFContextualActionContext, WFContentCollection, WFContextualAction;

@interface WFContextualActionRunRequest : WFWorkflowRunRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) WFContentCollection *input;
@property (readonly, nonatomic) WFContextualAction *action;
@property (readonly, nonatomic) WFContextualActionContext *actionContext;

- (id)queueIdentifier;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)getInputWithCompletionHandler:(id /* block */)a0;
- (id)initWithAction:(id)a0 actionContext:(id)a1;

@end
