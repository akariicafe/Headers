@interface WFLinkStartWorkoutAction : WFOverridableLinkAction

- (void)initializeParameters;
- (id)overrideDescriptionSummary;
- (id)overrideParameterSummary;
- (id)parameterOverrides;
- (void)runAsynchronouslyWithInput:(id)a0;

@end
