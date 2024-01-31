@interface PLTimeReferenceSystem : PLTimeReferenceDynamic

- (void)dealloc;
- (void)registerForDayChangedNotification;
- (void)dayChangedNotificationReceived:(id)a0;
- (void)timeChangedToMidnightLocalTime;
- (void)registerForTimeChangedNotification;
- (void)timeZoneChangedNotificationReceived:(id)a0;
- (void)registerForClockSetNotification;
- (id)currentTime;
- (void)registerForTimeZoneChangedNotification;

@end
