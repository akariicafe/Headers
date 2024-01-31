@interface BLSHTimeoutTimer : BLSHAssertionAttributeTimer

- (BOOL)reactivateIfPossible;
- (void)timerFired;
- (void)restartTimer;

@end
