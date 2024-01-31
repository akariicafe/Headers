@class UIColor, NSArray, NSDictionary, NSMutableArray;

@interface FIUIChartFloatingBarSeries : FIUIChartSeries {
    NSArray *_barRects;
    NSMutableArray *_barLabelTopPoints;
    NSMutableArray *_barLabelBottomPoints;
    NSMutableArray *_barLabels;
}

@property (retain, nonatomic) UIColor *barColor;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSDictionary *labelAttributes;
@property (nonatomic) double outlineWidth;
@property (retain, nonatomic) UIColor *outlineColor;

- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_loadFromDataSet;

@end
