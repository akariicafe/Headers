@interface ATXChargerConnectedAnchor : ATXAnchor

+ (id)longDescription;
+ (id)duetEventsPredicates;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (double)secondsOfInfluence;
+ (id)predicateForContextStoreRegistration;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)sampleEvent;
+ (id)keyPathForContextStore;
+ (BOOL)isActive;
+ (long long)anchorType;
+ (Class)supportedDuetDataProviderClass;

@end
