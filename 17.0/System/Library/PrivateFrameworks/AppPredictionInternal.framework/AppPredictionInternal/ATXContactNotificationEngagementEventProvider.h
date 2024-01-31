@class ATXModeEvent, NSCountedSet;
@protocol ATXModeEntityEventProviderProtocol;

@interface ATXContactNotificationEngagementEventProvider : NSObject {
    id<ATXModeEntityEventProviderProtocol> _modeEventProvider;
    NSCountedSet *_modeCountOfNotificationsCleared;
    NSCountedSet *_globalCountOfNotificationsCleared;
    NSCountedSet *_modeCountOfNotificationsReceived;
    NSCountedSet *_globalCountOfNotificationsReceived;
}

@property (readonly, nonatomic) ATXModeEvent *mostRecentModeEvent;

- (void).cxx_destruct;
- (unsigned long long)modeCountOfNotificationsCleared;
- (double)classConditionalOfNotificationsClearedForContactId:(id)a0;
- (double)classConditionalOfNotificationsReceivedForContactId:(id)a0;
- (id)dateIntervalFromNotificationEvent:(id)a0;
- (unsigned long long)globalCountOfNotificationsCleared;
- (unsigned long long)globalCountOfNotificationsClearedForContactId:(id)a0;
- (unsigned long long)globalCountOfNotificationsReceived;
- (unsigned long long)globalCountOfNotificationsReceivedForContactId:(id)a0;
- (double)globalNotificationsClearedRateForContactId:(id)a0;
- (double)globalPopularityOfNotificationsReceivedForContactId:(id)a0;
- (id)initWithModeEventProvider:(id)a0;
- (double)localNotificationsClearedRateForContactId:(id)a0;
- (double)localPopularityOfNotificationsReceivedForContactId:(id)a0;
- (unsigned long long)modeCountOfNotificationsClearedForContactId:(id)a0;
- (unsigned long long)modeCountOfNotificationsReceived;
- (unsigned long long)modeCountOfNotificationsReceivedForContactId:(id)a0;
- (BOOL)notificationEventOccurredWhileInMode:(id)a0 modeTransitionEvent:(id)a1;
- (double)ratioOfLocalToGlobalNotificationsClearedRateForContactId:(id)a0;
- (double)ratioOfLocalToGlobalPopularityOfNotificationsReceivedForContactId:(id)a0;
- (BOOL)successfullyCalculatedNotificationEvents;
- (void)trackNewModeEvent:(id)a0;
- (void)trackNewNotificationEvent:(id)a0;

@end
