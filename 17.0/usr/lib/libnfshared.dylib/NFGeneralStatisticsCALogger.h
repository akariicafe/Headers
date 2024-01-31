@interface NFGeneralStatisticsCALogger : NSObject

+ (void)_resetGeneralDeviceStatisticToDefaults;
+ (void)postGeneralDeviceStatistics;
+ (void)postAnalyticsSetupEndpoints:(unsigned int)a0 totalUnknowntoSE:(unsigned int)a1;
+ (void)updateGeneralDeviceStatistic:(id)a0;
+ (void)postAnalyticsGeneralTransactionStatistics;
+ (void)_setupInitValuesForGeneralTransactionStatistics;
+ (void)postPlasticCardEnableStatus:(BOOL)a0 aid:(id)a1;
+ (void)updateAnalyticsGeneralTransactionStatistics:(id)a0;

@end
