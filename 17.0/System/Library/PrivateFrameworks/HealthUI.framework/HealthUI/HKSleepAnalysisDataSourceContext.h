@interface HKSleepAnalysisDataSourceContext : NSObject

@property (nonatomic) long long chartType;
@property (nonatomic) long long timeScope;

+ (id)sleepAnalysisDataSourceContextWithChartType:(long long)a0 timeScope:(long long)a1;

@end
