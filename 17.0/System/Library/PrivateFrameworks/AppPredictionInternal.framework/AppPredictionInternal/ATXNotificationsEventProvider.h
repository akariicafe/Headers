@class NSDictionary, NSDate;

@interface ATXNotificationsEventProvider : NSObject {
    NSDate *_thresholdDateLastNDays;
    int _notificationsReceivedGloballyInLastNDays;
    int _notificationsReceivedGloballyInLast1Day;
    int _notificationsClearedGloballyInLastNDays;
    int _notificationsClearedGloballyInLast1Day;
    NSDictionary *_notificationsReceivedInModeInLastNDays;
    NSDictionary *_notificationsReceivedInModeInLast1Day;
    NSDictionary *_notificationsClearedInModeInLastNDays;
    NSDictionary *_notificationsClearedInModeInLast1Day;
}

- (void).cxx_destruct;
- (void)cacheGlobalNotificationStreamIfNecessary;
- (void)cacheModeNotificationStreamIfNecessary;
- (unsigned long long)globalCountOfNotificationsClearedWithinLast1Day;
- (unsigned long long)globalCountOfNotificationsClearedWithinLastNDays;
- (unsigned long long)globalCountOfNotificationsReceivedWithinLast1Day;
- (unsigned long long)globalCountOfNotificationsReceivedWithinLastNDays;
- (id)initWithLastNDays:(unsigned long long)a0;
- (unsigned long long)modeCountOfNotificationsClearedWithinLast1DayForMode:(unsigned long long)a0;
- (unsigned long long)modeCountOfNotificationsClearedWithinLastNDaysForMode:(unsigned long long)a0;
- (unsigned long long)modeCountOfNotificationsReceivedWithinLast1DayForMode:(unsigned long long)a0;
- (unsigned long long)modeCountOfNotificationsReceivedWithinLastNDaysForMode:(unsigned long long)a0;

@end
