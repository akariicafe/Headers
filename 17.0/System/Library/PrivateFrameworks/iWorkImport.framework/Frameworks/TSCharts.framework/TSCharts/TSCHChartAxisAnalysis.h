@class NSArray, NSDictionary;

@interface TSCHChartAxisAnalysis : NSObject

@property (nonatomic) double min;
@property (nonatomic) double max;
@property (nonatomic) double modelMin;
@property (nonatomic) double modelMax;
@property (nonatomic) double dataSetModelMin;
@property (nonatomic) double dataSetModelMax;
@property (nonatomic) double modelAverage;
@property (nonatomic) double modelMedian;
@property (copy, nonatomic) NSArray *majorGridLocations;
@property (copy, nonatomic) NSArray *minorGridLocations;
@property (copy, nonatomic) NSArray *totals;
@property (copy, nonatomic) NSDictionary *seriesIndexToValueIndexesWhereSeriesIsLastSeries;

- (void).cxx_destruct;

@end
