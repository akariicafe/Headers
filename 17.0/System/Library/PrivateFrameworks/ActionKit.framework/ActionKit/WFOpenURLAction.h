@interface WFOpenURLAction : WFHandleCustomIntentAction

- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)allowsAnyURLDestinationWhenAddedToWorkflowByUser;
- (id)contentDestinationWithError:(id *)a0;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (BOOL)populatesInputFromInputParameter;
- (BOOL)requiresRemoteExecution;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;

@end
