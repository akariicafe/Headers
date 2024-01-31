@class NSString, WFWorkflowController;

@interface WFRunWorkflowAction : WFAction <WFWorkflowControllerDelegate>

@property (weak, nonatomic) WFWorkflowController *workflowController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stop;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)canOfferSuggestionsForParameterWithKey:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (void)fetchSuggestedEntititiesForParameterWithKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)getHandoffWorkflowControllerState:(id /* block */)a0;
- (id)getWorkflowWithError:(id *)a0;
- (BOOL)isProgressIndeterminate;
- (void)performWithSandboxExtensions:(id /* block */)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)setHandoffWorkflowControllerState:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)userInterfaceForWorkflowController:(id)a0;
- (void)workflowController:(id)a0 didFinishRunningWithError:(id)a1 cancelled:(BOOL)a2;
- (void)workflowController:(id)a0 didRunAction:(id)a1;
- (BOOL)workflowController:(id)a0 handleUnsupportedEnvironmentForAction:(id)a1 currentState:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)workflowController:(id)a0 handleUnsupportedUserInterfaceForAction:(id)a1 currentState:(id)a2 completionHandler:(id /* block */)a3;
- (id)workflowController:(id)a0 parameterInputProviderForAction:(id)a1;
- (void)workflowController:(id)a0 prepareToRunAction:(id)a1 withInput:(id)a2 completionHandler:(id /* block */)a3;
- (id)workflowNameFromParameter;

@end
