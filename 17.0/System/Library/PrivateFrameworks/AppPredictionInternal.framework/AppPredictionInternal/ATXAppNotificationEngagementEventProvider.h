@class ATXModeEvent, NSCountedSet;
@protocol ATXModeEntityEventProviderProtocol;

@interface ATXAppNotificationEngagementEventProvider : NSObject {
    id<ATXModeEntityEventProviderProtocol> _modeEventProvider;
    NSCountedSet *_modeCountOfNotificationsCleared;
    NSCountedSet *_globalCountOfNotificationsCleared;
    NSCountedSet *_modeCountOfNotificationsReceived;
    NSCountedSet *_globalCountOfNotificationsReceived;
}

@property (readonly, nonatomic) ATXModeEvent *mostRecentModeEvent;

- (void).cxx_destruct;
- (unsigned long long)modeCountOfNotificationsCleared;
- (double)classConditionalOfNotificationsClearedForBundleId:(id)a0;
- (double)classConditionalOfNotificationsReceivedForBundleId:(id)a0;
- (id)dateIntervalFromNotificationEvent:(id)a0;
- (unsigned long long)globalCountOfNotificationsCleared;
- (unsigned long long)globalCountOfNotificationsClearedForBundleId:(id)a0;
- (unsigned long long)globalCountOfNotificationsReceived;
- (unsigned long long)globalCountOfNotificationsReceivedForBundleId:(id)a0;
- (double)globalNotificationsClearedRateForBundleId:(id)a0;
- (double)globalPopularityOfNotificationsReceivedForBundleId:(id)a0;
- (id)initWithModeEventProvider:(id)a0;
- (double)localNotificationsClearedRateForBundleId:(id)a0;
- (double)localPopularityOfNotificationsReceivedForBundleId:(id)a0;
- (unsigned long long)modeCountOfNotificationsClearedForBundleId:(id)a0;
- (unsigned long long)modeCountOfNotificationsReceived;
- (unsigned long long)modeCountOfNotificationsReceivedForBundleId:(id)a0;
- (BOOL)notificationEventOccurredWhileInMode:(id)a0 modeTransitionEvent:(id)a1;
- (double)ratioOfLocalToGlobalNotificationsClearedRateForBundleId:(id)a0;
- (double)ratioOfLocalToGlobalPopularityOfNotificationsReceivedForBundleId:(id)a0;
- (BOOL)successfullyCalculatedNotificationEvents;
- (void)trackNewModeEvent:(id)a0;
- (void)trackNewNotificationEvent:(id)a0 forInstalledApps:(id)a1;

@end
