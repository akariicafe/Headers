@interface WFStartTimerAction : WFLinkCreateEntityAction

- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (id)sessionKitSessionInvocationType;
- (void)getValueForParameterData:(id)a0 ofProcessedParameters:(id)a1 completionHandler:(id /* block */)a2;
- (id)parameterOverrides;
- (id)sessionKitSessionConfiguration;

@end
