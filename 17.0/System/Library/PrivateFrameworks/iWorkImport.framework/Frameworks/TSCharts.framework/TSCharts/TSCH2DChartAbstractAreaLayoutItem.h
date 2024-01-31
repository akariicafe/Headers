@class TSCHChartDataSetNameLayoutItem, TSCHChartBodyLayoutItem, TSCHChartTitleLayoutItem;

@interface TSCH2DChartAbstractAreaLayoutItem : TSCHChartAbstractAreaLayoutItem

@property (retain, nonatomic) TSCHChartTitleLayoutItem *titleElement;
@property (retain, nonatomic) TSCHChartDataSetNameLayoutItem *dataSetNameElement;
@property (retain, nonatomic) TSCHChartBodyLayoutItem *bodyLayoutItem;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })chartBodyLayoutRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })i_currentBufferAreaUnitRect;
- (void)setChartBodyLayoutSize:(struct CGSize { double x0; double x1; })a0;

@end
