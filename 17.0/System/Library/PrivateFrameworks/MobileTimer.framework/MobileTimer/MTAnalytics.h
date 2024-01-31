@interface MTAnalytics : NSObject

+ (void)incrementEventCount:(id)a0;
+ (void)sendCriticalEvent:(id)a0;
+ (void)submitEvent:(id)a0 eventParameters:(id)a1;

@end
