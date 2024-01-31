@interface EKSuggestionsServiceLogger : NSObject

+ (void)logEventShowedTimeToLeaveNotificationWithUniqueKey:(id)a0;
+ (Class)_SGSuggestionsServiceClass;
+ (void)logEventConfirmedDetailsWithUniqueKey:(id)a0;
+ (void)logEventConfirmedInboxWithUniqueKey:(id)a0;
+ (void)logEventConfirmedNotificationWithUniqueKey:(id)a0;
+ (void)logEventDismissedNotificationWithUniqueKey:(id)a0;
+ (void)logEventEngagedNotificationWithUniqueKey:(id)a0;
+ (void)logEventRejectedDetailsWithUniqueKey:(id)a0;
+ (void)logEventRejectedInboxWithUniqueKey:(id)a0;
+ (void)logEventRejectedNotificationWithUniqueKey:(id)a0;
+ (void)logEventShowedDetailsWithUniqueKey:(id)a0;
+ (void)logEventShowedNotificationWithUniqueKey:(id)a0;

@end
