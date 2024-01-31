@interface SBSLockScreenRemoteContentAssertion : SBSLockScreenContentAssertion

+ (id)acquireRemoteContentAssertionWithDefinition:(id)a0 errorHandler:(id /* block */)a1;
+ (id)acquireWakeToRemoteAlertAssertionWithRemoteDefinition:(id)a0 errorHandler:(id /* block */)a1;

- (BOOL)_supportsReacquisition;

@end
