@interface ATXLocationEnterAnchor : ATXAnchor

+ (id)longDescription;
+ (id)duetEventsPredicates;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (double)secondsOfInfluence;
+ (id)predicateForContextStoreRegistration;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)sampleEvent;
+ (id)keyPathForContextStore;
+ (BOOL)isActive;
+ (long long)anchorType;
+ (Class)supportedDuetDataProviderClass;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)a0;

@end
