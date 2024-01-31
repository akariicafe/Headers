@interface HealthMedicationsUI.MedicationChartDataSource : HKHealthQueryChartCacheDataSource {
    void /* unknown type, empty encoding */ medication;
    void /* unknown type, empty encoding */ encoder;
    void /* unknown type, empty encoding */ decoder;
    void /* unknown type, empty encoding */ sortDescriptors;
}

- (id)init;
- (id)queryDescription;
- (void).cxx_destruct;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id /* block */)generateSharableQueryDataForRequest:(id)a0 healthStore:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1;
- (id)queriesForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsChartQueryDataGeneration;

@end
