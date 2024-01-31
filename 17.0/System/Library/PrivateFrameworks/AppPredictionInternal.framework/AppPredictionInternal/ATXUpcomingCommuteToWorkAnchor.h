@interface ATXUpcomingCommuteToWorkAnchor : ATXAnchor

+ (id)longDescription;
+ (id)duetEventsPredicates;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (id)anchorOccurenceDateFromDuetEvent:(id)a0;
+ (double)secondsOfInfluence;
+ (id)predicateForContextStoreRegistration;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)sampleEvent;
+ (id)keyPathForContextStore;
+ (id)candidateQueryStartDateFromDuetEvent:(id)a0;
+ (BOOL)isActive;
+ (long long)anchorType;
+ (Class)supportedDuetDataProviderClass;

@end
