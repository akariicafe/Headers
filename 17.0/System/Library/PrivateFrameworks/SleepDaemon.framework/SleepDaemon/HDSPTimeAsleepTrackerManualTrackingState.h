@interface HDSPTimeAsleepTrackerManualTrackingState : HDSPTimeAsleepTrackerSleepTrackingState

+ (unsigned long long)defaultEndReason;
+ (unsigned long long)defaultStartReason;

- (void)stateDidExpire;
- (id)expirationDate;
- (id)stateName;
- (BOOL)schedulesExpiration;
- (void)bedtimeOccurred;
- (void)sleepModeExitedWithReason:(unsigned long long)a0;
- (void)startWakeDetectionOccurred;

@end
