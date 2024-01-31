@interface HFAnalytics : NSObject

+ (void)sendEvent:(unsigned long long)a0;
+ (void)_sendEvent:(id)a0;
+ (void)sendEvent:(unsigned long long)a0 withData:(id)a1;
+ (Class)eventClassForEventType:(unsigned long long)a0;
+ (id)eventNameForEventType:(unsigned long long)a0;

@end
