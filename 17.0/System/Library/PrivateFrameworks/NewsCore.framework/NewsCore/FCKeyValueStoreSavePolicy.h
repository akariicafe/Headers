@interface FCKeyValueStoreSavePolicy : NSObject

+ (id)unthrottledPolicy;
+ (id)appBackgroundPolicyWithActivityMonitor:(id)a0 backgroundTaskable:(id)a1;
+ (id)throttlePolicyWithDelay:(double)a0;
+ (id)defaultPolicy;

- (void)scheduleSaveOnQueue:(id)a0 handler:(id /* block */)a1;

@end
