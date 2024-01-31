@class HKPopulationNormsAxisView;

@interface HKPopulationNormsChartGridView : UIView

@property (retain, nonatomic) HKPopulationNormsAxisView *yAxisView;
@property (retain, nonatomic) HKPopulationNormsAxisView *xAxisView;
@property (readonly, nonatomic) unsigned long long xAxisSegmentCount;
@property (readonly, nonatomic) unsigned long long yAxisSegmentCount;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_determineCanvasRectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 yAxisWidth:(double)a1 xAxisHeight:(double)a2;
- (double)_determineXAxisHeight;
- (double)_determineYAxisWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })determineCanvasRect;
- (id)initWithXAxisLabels:(id)a0 YAxisLabels:(id)a1;
- (void)relocalizeAxisLabels;

@end
