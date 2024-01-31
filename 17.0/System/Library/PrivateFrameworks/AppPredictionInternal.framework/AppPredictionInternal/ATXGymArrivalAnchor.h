@interface ATXGymArrivalAnchor : ATXAnchor

+ (id)longDescription;
+ (id)duetEventsPredicates;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (double)secondsOfInfluence;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)sampleEvent;
+ (BOOL)isActive;
+ (long long)anchorType;
+ (Class)supportedDuetDataProviderClass;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)a0;

@end
