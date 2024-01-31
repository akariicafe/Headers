@interface FBKSAnalytics : NSObject

+ (void)logFeedbackdLaunchedFeedbackWithForm:(id)a0 usedAlertPrompt:(BOOL)a1 usedNotificationPrompt:(BOOL)a2 usedHiddenApp:(BOOL)a3;
+ (void)logFeedbackdReceivedNotificationResponse:(id)a0 formIdentifier:(id)a1;

@end
