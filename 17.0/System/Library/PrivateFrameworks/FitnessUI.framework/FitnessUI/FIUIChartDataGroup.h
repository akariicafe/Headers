@class NSArray, NSString;
@protocol FIUIChartDataGroupDataSource;

@interface FIUIChartDataGroup : NSObject <FIUIChartDataSetDataSource>

@property (retain, nonatomic) NSArray *dataSets;
@property (weak, nonatomic) id<FIUIChartDataGroupDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dataSetAtIndex:(unsigned long long)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)maxYValue;
- (id)minYValue;
- (id)_pointForSetAtIndex:(unsigned long long)a0 pointIndex:(unsigned long long)a1;
- (id)_dataSetAtIndexCreateIfNecessary:(unsigned long long)a0;
- (id)_labelsForSetAtIndex:(unsigned long long)a0;
- (unsigned long long)_numberOfDataPointsInSetAtIndex:(unsigned long long)a0;
- (unsigned long long)_numberOfDataSets;
- (id)dataSet:(id)a0 chartPointForIndex:(unsigned long long)a1;
- (id)labelsForSet:(id)a0;
- (id)maxXValue;
- (id)minXValue;
- (unsigned long long)numberOfDataPointsForDataSet:(id)a0;
- (unsigned long long)numberOfDataSets;

@end
