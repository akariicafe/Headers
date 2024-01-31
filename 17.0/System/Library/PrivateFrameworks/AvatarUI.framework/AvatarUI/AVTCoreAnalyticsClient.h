@interface AVTCoreAnalyticsClient : NSObject <AVTCoreAnalyticsClient>

- (void)ADClientAddValueForScalarKey:(id)a0 :(long long)a1;
- (void)ADClientSetValueForScalarKey:(id)a0 :(long long)a1;
- (void)ADClientPushValueForDistributionKey:(id)a0 :(double)a1;
- (void)sendEventForKey:(id)a0 payload:(id)a1;

@end
