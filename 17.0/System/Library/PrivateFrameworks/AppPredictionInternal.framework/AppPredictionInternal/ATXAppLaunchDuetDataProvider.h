@interface ATXAppLaunchDuetDataProvider : ATXDuetDataProvider

+ (Class)supportedDuetEventClass;
+ (long long)supportedCoreDuetStream;
+ (id)biomePublisher:(id)a0 andEndDate:(id)a1 isIncluded:(id /* block */)a2;

@end
