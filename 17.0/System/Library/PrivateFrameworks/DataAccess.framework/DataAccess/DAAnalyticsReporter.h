@interface DAAnalyticsReporter : NSObject

+ (void)endDailyAnalyticsReporter;
+ (void)startDailyAnalyticsReporter;
+ (void)reportActiveExchangeOAuthAccountsCount;

@end
