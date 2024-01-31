@class NSMutableDictionary;

@interface _HKRemoteDataSources : NSObject {
    NSMutableDictionary *_dataSources;
}

@property (nonatomic) BOOL supportsChartQueryDataGeneration;

- (id)init;
- (void).cxx_destruct;
- (id)allDataSources;
- (id)dataSourceForTimeScope:(long long)a0;
- (id)initSupportsChartQueryDataGeneration:(BOOL)a0;
- (void)setDataSource:(id)a0 forTimeScope:(long long)a1;

@end
