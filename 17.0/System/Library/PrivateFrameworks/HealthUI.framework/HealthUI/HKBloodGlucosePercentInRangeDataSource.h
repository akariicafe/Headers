@class HKUnitPreferenceController;

@interface HKBloodGlucosePercentInRangeDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) HKUnitPreferenceController *unitController;

- (id)queryDescription;
- (void).cxx_destruct;
- (id)queriesForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)_dataBlockFromHistogramCollection:(id)a0 requiredSampleCountForHistogram:(long long)a1;
- (long long)_requiredSampleCountForHistogramForStatisticsInterval:(id)a0;
- (id)initWithHealthStore:(id)a0 unitController:(id)a1;

@end
