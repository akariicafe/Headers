@interface SCLSettingsSyncStateFailed : SCLSettingsSyncState

- (unsigned long long)status;
- (void)xpcActivityStarted;
- (void)didEnterWithPreviousState:(id)a0;
- (void)significantUserInteractionOccurred;
- (void)settingsDidChange;
- (id)retryCriteriaWithInterval:(long long)a0;
- (void)transitionToPendingState;

@end
