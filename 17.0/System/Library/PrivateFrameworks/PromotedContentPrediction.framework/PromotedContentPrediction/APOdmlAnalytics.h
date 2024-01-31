@interface APOdmlAnalytics : NSObject

+ (id)eventName;
+ (void)_analyticsSendEvent:(id)a0 eventPayload:(id)a1;
+ (id)_versionAndIdentifiers;
+ (void)sendEvent:(id)a0 additionalDetails:(id)a1;
+ (void)sendTimedEvent:(id)a0 statusSuccess:(BOOL)a1 additionalDetails:(id)a2 startDate:(id)a3 endDate:(id)a4;

@end
