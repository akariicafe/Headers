@interface APOdmlAnalyticsModelTraining : APOdmlAnalytics

+ (id)eventName;
+ (void)_analyticsSendEvent:(id)a0 eventPayload:(id)a1;
+ (id)_versionAndIdentifiersFromRecordInfo:(id)a0 isCounterfactual:(BOOL)a1;
+ (void)sendEvent:(id)a0 additionalDetails:(id)a1 info:(id)a2 isCounterfactual:(BOOL)a3 numOfRows:(unsigned long long)a4 normDelta:(double)a5;

@end
