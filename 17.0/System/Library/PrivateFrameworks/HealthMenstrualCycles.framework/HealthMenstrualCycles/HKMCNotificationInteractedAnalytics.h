@interface HKMCNotificationInteractedAnalytics : NSObject

+ (BOOL)shouldSubmit;
+ (BOOL)_isAllowed;
+ (BOOL)_isMetricEnabled;
+ (void)submitMetricForCategory:(id)a0 action:(id)a1;

@end
