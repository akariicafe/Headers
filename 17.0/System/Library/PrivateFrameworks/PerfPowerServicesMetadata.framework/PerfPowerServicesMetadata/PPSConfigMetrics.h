@class NSString;

@interface PPSConfigMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subsystem;
+ (id)allDeclMetrics;
+ (id)configMetrics;
+ (id)consoleModeEnabledMetrics;
+ (id)constructDeviceTypeMetric;
+ (id)deviceCapabilityMetrics;
+ (id)semEnabledMetrics;
+ (id)sysdiagnoseEventMetrics;


@end
