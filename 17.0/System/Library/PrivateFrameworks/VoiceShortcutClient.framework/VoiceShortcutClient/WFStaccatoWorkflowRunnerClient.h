@class NSString, WFConfiguredStaccatoAction, WFContextualActionContext;

@interface WFStaccatoWorkflowRunnerClient : WFWorkflowRunnerClient

@property (retain, nonatomic) WFConfiguredStaccatoAction *action;
@property (retain, nonatomic) WFContextualActionContext *actionContext;
@property (nonatomic) BOOL hasStartedRun;
@property (readonly, copy, nonatomic) NSString *presentableIdentifier;
@property (readonly, copy, nonatomic) NSString *presentableRequester;
@property (readonly, nonatomic) BOOL hasCompletedRun;

- (void)start;
- (void).cxx_destruct;
- (id)initWithWorkflowStaccatoAction:(id)a0;
- (id)initWithDescriptor:(id)a0 runRequest:(id)a1;
- (id)initWithLinkStaccatoAction:(id)a0 interactionType:(id)a1 preciseTimeStamp:(id)a2;
- (id)initWithStaccatoAction:(id)a0;
- (id)initWithStaccatoAction:(id)a0 interactionType:(id)a1 preciseTimeStamp:(id)a2;
- (id)initWithTopHitStaccatoAction:(id)a0;
- (id)prewarmManager;
- (void)startWithInteractionType:(id)a0 preciseTimeStamp:(id)a1;
- (void)userInteractionBegan;

@end
