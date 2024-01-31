@protocol ATXShadowMetricsDataSource;

@interface ATXShadowMetricsComputer : NSObject

@property (readonly, nonatomic) id<ATXShadowMetricsDataSource> dataSource;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)computeResultAsTrendPlotFromStartDate:(id)a0 toEndDate:(id)a1 resultGranularity:(long long)a2;
- (id)computeResultFromStartDate:(id)a0 toEndDate:(id)a1;

@end
