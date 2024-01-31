@interface WFShowInBlindSquareAction : WFAction

- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)showLocation:(id)a0 named:(id)a1 address:(id)a2 phoneNumber:(id)a3;
- (void)showMapItem:(id)a0 named:(id)a1;
- (void)showPlacemark:(id)a0 named:(id)a1 phoneNumber:(id)a2;

@end
