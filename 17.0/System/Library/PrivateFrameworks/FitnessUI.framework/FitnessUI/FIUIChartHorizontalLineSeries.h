@class UIColor, NSArray;

@interface FIUIChartHorizontalLineSeries : FIUIChartNumericSeries {
    NSArray *_dataPoints;
}

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double lineWidth;
@property (nonatomic) double sidePadding;

- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
