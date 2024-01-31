@interface CPAnalyticsCoreAnalyticsHelper : NSObject

+ (void)analyticsSendEventLazy:(id)a0 payload:(id /* block */)a1;
+ (void)sendCoreAnalyticsEvent:(id)a0 withPayload:(id)a1 shouldSanitize:(BOOL)a2;
+ (id)buildCACompatiblePayload:(id)a0;
+ (BOOL)isValidCoreAnalyticsValueType:(id)a0;
+ (id)caCompatiblePayloadKey:(id)a0;

@end
