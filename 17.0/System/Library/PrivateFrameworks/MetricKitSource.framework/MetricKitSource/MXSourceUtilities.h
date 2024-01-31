@interface MXSourceUtilities : NSObject

+ (BOOL)isMetricKitClient:(id)a0 forUser:(unsigned int)a1;
+ (id)regionFormat;
+ (BOOL)isMetricKitClient:(id)a0;
+ (BOOL)anyClientsAvailable;
+ (id)getSignpostDataforPid:(int)a0 forClient:(id)a1 andEventTimestamp:(id)a2;
+ (BOOL)isAppAnalyticsEnabled;

@end
