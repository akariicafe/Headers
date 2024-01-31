@class HKGraphSeriesDataBlock, HKHealthQueryChartCacheDataSource;

@interface _HKRemoteChartDataEntry : NSObject

@property (readonly, nonatomic) HKGraphSeriesDataBlock *seriesData;
@property (readonly, nonatomic) HKHealthQueryChartCacheDataSource *dataSourceForMapping;
@property (readonly, nonatomic) id seriesDataSourceContext;

- (void).cxx_destruct;
- (id)initWithSeriesData:(id)a0 dataSourceForMapping:(id)a1 seriesDataSourceContext:(id)a2;
- (id)seriesDataWithMappingApplied;

@end
