@class UIImageView, UIColor;

@interface FIUIChartMultiDashedBackgroundView : FIUIChartBackgroundView {
    UIImageView *_imageView;
    UIColor *_lineColor;
    UIColor *_subLineColor;
    double _previousWidth;
}

@property (nonatomic) double lineWidth;
@property (nonatomic) double sublineInset;
@property (nonatomic) unsigned long long numLines;
@property (nonatomic) unsigned long long sublineInterval;
@property (nonatomic) BOOL backgroundIsTransparent;

+ (id)calculateRoundedLinePositionsForTotalWidth:(double)a0 lineWidth:(double)a1 numberOfLines:(unsigned long long)a2 roundedInView:(id)a3;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setNeedsRegenerateBackgroundImage;
- (id)_stretchableLinesPatternImage;

@end
