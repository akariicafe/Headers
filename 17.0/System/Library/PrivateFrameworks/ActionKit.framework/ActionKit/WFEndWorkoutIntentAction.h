@interface WFEndWorkoutIntentAction : WFHandleSystemIntentAction

- (id)icon;
- (BOOL)skipsProcessingHiddenParameters;
- (id)actionForAppIdentifier:(id)a0;
- (BOOL)allowsContinueInAppWhenRunningRemotely;
- (id)appResource;
- (id)selectedAppNotSupportedError;
- (BOOL)isParameterHidden:(id)a0;

@end
