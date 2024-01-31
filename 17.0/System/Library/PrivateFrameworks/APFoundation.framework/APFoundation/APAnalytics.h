@interface APAnalytics : NSObject

+ (void)sendEventError:(long long)a0 message:(id)a1;
+ (BOOL)_validatePayload:(id)a0;
+ (void)_sendEvent:(id)a0 payload:(id)a1;
+ (void)sendEventTimed:(long long)a0 startDate:(id)a1 endDate:(id)a2 message:(id)a3;
+ (void)sendEvent:(id)a0;
+ (void)sendEvent:(id)a0 statusDetail:(id)a1 startDate:(id)a2 error:(id)a3;
+ (void)sendEvent:(id)a0 valueInt:(long long)a1;
+ (void)_analyticsSendEvent:(id)a0 eventPayload:(id)a1;
+ (void)sendEventTimed:(long long)a0 roundtrip:(double)a1 message:(id)a2;
+ (void)sendEvent:(id)a0 valueFloat:(float)a1;
+ (void)sendEvent:(id)a0 customPayload:(id)a1;
+ (void)sendEventLazy:(id)a0 eventPayloadBuilder:(id /* block */)a1;

@end
