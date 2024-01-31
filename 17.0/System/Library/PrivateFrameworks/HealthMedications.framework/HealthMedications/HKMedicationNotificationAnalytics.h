@interface HKMedicationNotificationAnalytics : NSObject

+ (BOOL)shouldSubmit;
+ (BOOL)_isAllowed;
+ (BOOL)_isMetricEnabled;
+ (void)submitMetricForType:(long long)a0 areHealthNotificationsAuthorizedStatus:(id)a1 interactionType:(long long)a2 dataSource:(id)a3;
+ (void)submitNotificationInterationMetricForType:(long long)a0 withHealthNotificationsAuthorizedStatus:(id)a1 dataSource:(id)a2;
+ (void)submitNotificationSentMetricWithHealthNotificationsAuthorizedStatus:(BOOL)a0 dataSource:(id)a1;

@end
