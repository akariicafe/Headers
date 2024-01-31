@class NSString;

@interface PPSLocaleMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subsystem;
+ (id)timezoneMetrics;
+ (id)allDeclMetrics;
+ (id)timezoneLoggingCadence;


@end
