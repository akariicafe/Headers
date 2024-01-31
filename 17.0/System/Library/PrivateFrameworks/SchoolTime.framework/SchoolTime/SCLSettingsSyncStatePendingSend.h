@interface SCLSettingsSyncStatePendingSend : SCLSettingsSyncState

- (unsigned long long)status;
- (void)xpcActivityStarted;
- (void)didEnterWithPreviousState:(id)a0;
- (void)significantUserInteractionOccurred;
- (void)settingsDidChange;
- (void)commitSettings;
- (void)didEnqueueMessage:(id)a0;
- (void)enqueueFailedWithError:(id)a0;

@end
