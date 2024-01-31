@interface AWDMetricManager : NSObject

+ (void)postMetricWithId:(unsigned long long)a0 integerValue:(long long)a1;
+ (void)postMetricWithId:(unsigned long long)a0;
+ (void)postMetricWithId:(unsigned long long)a0 boolValue:(BOOL)a1;
+ (void)postMetricWithId:(unsigned long long)a0 numberValue:(id)a1;
+ (void)postMetricWithId:(unsigned long long)a0 object:(id)a1;
+ (void)postMetricWithId:(unsigned long long)a0 stringValue:(id)a1;
+ (void)postMetricWithId:(unsigned long long)a0 unsignedIntegerValue:(unsigned long long)a1;

@end
