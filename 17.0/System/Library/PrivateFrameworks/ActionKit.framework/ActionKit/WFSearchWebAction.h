@interface WFSearchWebAction : WFAction

- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)getDestinationURLFromInputString:(id)a0;

@end
