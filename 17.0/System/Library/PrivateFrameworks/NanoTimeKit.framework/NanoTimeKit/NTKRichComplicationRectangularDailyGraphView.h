@class UIColor, NSString, NSArray, CLKUIColoringLabel, UILabel;

@interface NTKRichComplicationRectangularDailyGraphView : NTKRichComplicationRectangularBaseView {
    double _timeLabelAndGridAlpha;
    double _noDataAlpha;
}

@property (class, readonly, nonatomic) NSString *dailyFormattedNoData;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } graphSize;

@property (readonly, nonatomic) double timeMarkerPadding;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } graphRect;
@property (readonly, nonatomic) UIColor *noDataTextColor;
@property (readonly, nonatomic) UIColor *graphLabelAndGridColor;
@property (readonly, nonatomic) NSArray *timeMarkerLabels;
@property (readonly, nonatomic) CLKUIColoringLabel *titleLabel;
@property (readonly, nonatomic) UILabel *dailyHighLabel;
@property (readonly, nonatomic) UILabel *dailyLowLabel;
@property (retain, nonatomic) UIColor *accentColor;
@property (retain, nonatomic) UIColor *nonAccentColor;

- (id)init;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_addConstraints;
- (void)_addSubviews;
- (void)drawGraph:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_applyPausedUpdate;
- (double)_calculateGraphXBasedOnRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 constants:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; })a1;
- (id)_datesForGraphInTimezone:(id)a0;
- (void)_drawVerticalHourLines:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 bottomLabelPadding:(double)a2;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (double)_lineStrokeWidthGivenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTimeMarkerLabelsForDates:(id)a0 timezone:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawableGraphRect;
- (void)loadWithMetadata:(id)a0;
- (void)resetToNoDataState:(id)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
