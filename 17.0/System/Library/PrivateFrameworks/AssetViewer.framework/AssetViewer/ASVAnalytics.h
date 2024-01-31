@interface ASVAnalytics : NSObject

+ (void)sendAnalyticsWithCategory:(id)a0 payloadDict:(id)a1;
+ (void)sendAnalyticsWithEvent:(unsigned long long)a0;
+ (void)sendAnalyticsWithEvent:(unsigned long long)a0 error:(id)a1;
+ (void)sendAnalyticsWithEvent:(unsigned long long)a0 payloadDict:(id)a1;

@end
