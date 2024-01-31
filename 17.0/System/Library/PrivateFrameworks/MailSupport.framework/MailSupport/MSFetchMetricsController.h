@protocol MSFetchMetricsControllerDataSource;

@interface MSFetchMetricsController : NSObject {
    double _startTime;
}

@property (readonly, weak, nonatomic) id<MSFetchMetricsControllerDataSource> dataSource;

- (void)start;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)stopAndSubmitWithOptions:(unsigned long long)a0 fetchSize:(unsigned long long)a1;

@end
