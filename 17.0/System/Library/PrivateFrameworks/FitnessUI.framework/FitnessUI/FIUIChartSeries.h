@class NSNumber, FIUIChartDataSet, NSDate;
@protocol FIUIChartSeriesDataSource;

@interface FIUIChartSeries : UIView {
    NSDate *_minXValue;
    NSDate *_maxXValue;
}

@property (retain, nonatomic) NSNumber *minYValue;
@property (retain, nonatomic) NSNumber *maxYValue;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } insetBounds;
@property (weak, nonatomic) id<FIUIChartSeriesDataSource> dataSource;
@property (retain, nonatomic) FIUIChartDataSet *dataSet;
@property (nonatomic) BOOL displayAboveAxisLabels;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (float)_relativePositionForXPlaneValue:(id)a0;
- (float)_relativePositionForYPlaneValue:(id)a0;
- (void)_reloadMinMaxValues;
- (id)labelsFromDataSet;
- (double)xValueForPointFromChartPoint:(id)a0;
- (double)yValueForPointFromChartPointValue:(id)a0;

@end
