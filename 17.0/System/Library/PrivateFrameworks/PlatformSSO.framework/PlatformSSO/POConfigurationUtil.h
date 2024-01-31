@interface POConfigurationUtil : NSObject

+ (BOOL)appSSOEnabled;
+ (BOOL)platformSSOEnabled;
+ (BOOL)platformSSOEnabledForUsername:(id)a0;
+ (id)platformSSOTriggerFile;
+ (void)updateTriggerFile;

@end
