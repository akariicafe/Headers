@interface TPSAnalyticsEventAppDeleted : TPSAnalyticsEvent

+ (BOOL)supportsSecureCoding;
+ (id)event;

- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (id)appLaunches;
- (id)desiredOutcomeTotal;
- (id)notificationsPosted;
- (double)timeSinceLastNotification;
- (id)tipViewTotal;

@end
