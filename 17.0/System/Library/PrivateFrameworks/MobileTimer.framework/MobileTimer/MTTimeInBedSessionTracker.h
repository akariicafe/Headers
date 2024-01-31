@interface MTTimeInBedSessionTracker : MTSleepSessionTracker

+ (BOOL)_shouldUseBedtimeDismissedDateForAlarm:(id)a0;
+ (BOOL)_trackingEnabledForSleepAlarm:(id)a0;

- (Class)sessionClass;
- (void)startSession;
- (id)processedSessionForSession:(id)a0;
- (id)_createSleepSessionWithUserWakeTime:(id)a0 endReason:(unsigned long long)a1;
- (void)endSessionWithDate:(id)a0 reason:(unsigned long long)a1;
- (void)sleepCoordinator:(id)a0 sleepModeManuallyExited:(id)a1 sleepAlarm:(id)a2;

@end
