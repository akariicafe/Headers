@class WFHomeWorkflow, NSString, WFOutOfProcessWorkflowController;

@interface WFHomeWorkflowController : NSObject <WFOutOfProcessWorkflowControllerDelegate>

@property (readonly, nonatomic) WFOutOfProcessWorkflowController *workflowController;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) WFHomeWorkflow *workflow;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithWorkflow:(id)a0;
- (void)outOfProcessWorkflowController:(id)a0 didFinishWithResult:(id)a1 dialogAttribution:(id)a2;

@end
