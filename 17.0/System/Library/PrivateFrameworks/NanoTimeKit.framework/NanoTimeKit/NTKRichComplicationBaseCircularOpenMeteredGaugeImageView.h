@class CDRichComplicationImageView, CDRichComplicationCurvedProgressView, CLKUIColoringLabel;

@interface NTKRichComplicationBaseCircularOpenMeteredGaugeImageView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) CDRichComplicationCurvedProgressView *progressView;
@property (retain, nonatomic) CDRichComplicationImageView *centerImageView;
@property (retain, nonatomic) CLKUIColoringLabel *smallLabel;

+ (long long)progressFillStyle;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFamily:(long long)a0;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;
- (long long)_innerFilterStyle;
- (struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; })_layoutConstraintsWithDevice:(id)a0 family:(long long)a1;
- (long long)_outerFilterStyle;
- (double)_smallLabelFontWeight;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
