@class UIFont, NSCalendar, NSMutableArray, PKSpendingSummary;

@interface PKSpendingSummaryChartView : UIView {
    NSMutableArray *_valueLabels;
    NSMutableArray *_legendLabels;
    NSMutableArray *_horizontalAxis;
    NSMutableArray *_bars;
    UIFont *_fontForLabels;
    UIFont *_fontForValues;
    PKSpendingSummary *_summary;
    double _chartMaxAmount;
    double _groupsMaxAmount;
    unsigned long long _axisCount;
    unsigned long long _presentationStyle;
    NSCalendar *_currentCalendar;
    BOOL _isCompactUI;
}

@property (nonatomic) BOOL showLegendGraph;
@property (nonatomic) BOOL showPlaceholders;
@property (nonatomic) BOOL showLegendLabels;
@property (nonatomic) BOOL prioritizeLegendPlacement;
@property (nonatomic, getter=isBlurDisabled) BOOL blurDisabled;
@property (nonatomic, getter=isVisible) BOOL visible;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setPrioritizeLegendPlacementUI:(BOOL)a0;
- (void)_configureBarView:(id)a0 smallContext:(BOOL)a1;
- (void)configureWithSummary:(id)a0 presentationStyle:(unsigned long long)a1;

@end
