@interface HKStateOfMindChartDataSource : HKHealthQueryChartCacheDataSource {
    void /* unknown type, empty encoding */ debugIdentifier;
    void /* unknown type, empty encoding */ gregorianCalendar;
    void /* unknown type, empty encoding */ overlayPredicate;
}

- (id)init;
- (id)queryDescription;
- (void).cxx_destruct;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id /* block */)generateSharableQueryDataForRequest:(id)a0 healthStore:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1;
- (id)queriesForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsChartQueryDataGeneration;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1 overlayPredicate:(id)a2;
- (id /* block */)mappingFunctionForContext:(id)a0;

@end
