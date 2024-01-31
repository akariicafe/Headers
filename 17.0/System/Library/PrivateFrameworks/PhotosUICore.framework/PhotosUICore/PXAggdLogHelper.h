@interface PXAggdLogHelper : NSObject

+ (id)sharedInstance;

- (void)logAddValueForScalarKey:(long long)a0 forKey:(struct __CFString { } *)a1;
- (void)logSetValueForScalarKey:(long long)a0 forKey:(struct __CFString { } *)a1;
- (void)logPushValueForDistributionKey:(double)a0 forKey:(struct __CFString { } *)a1;

@end
