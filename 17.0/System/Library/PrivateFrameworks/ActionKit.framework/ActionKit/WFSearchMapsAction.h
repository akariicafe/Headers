@interface WFSearchMapsAction : WFAction

- (id)appIdentifier;
- (id)contentDestinationWithError:(id *)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)openMapItems:(id)a0;
- (void)openMapsLink:(id)a0 inAppNamed:(id)a1;
- (void)openMapsURL:(id)a0 withAppIdentifier:(id)a1;

@end
