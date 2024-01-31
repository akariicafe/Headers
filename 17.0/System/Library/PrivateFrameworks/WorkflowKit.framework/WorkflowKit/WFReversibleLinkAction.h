@interface WFReversibleLinkAction : WFLinkAction

+ (Class)settingsClientClass;

- (void)finishRunningWithError:(id)a0;
- (void)getValueForParameterData:(id)a0 ofProcessedParameters:(id)a1 fallingBackToDefaultValue:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)reversibleSettingParameterKey;

@end
