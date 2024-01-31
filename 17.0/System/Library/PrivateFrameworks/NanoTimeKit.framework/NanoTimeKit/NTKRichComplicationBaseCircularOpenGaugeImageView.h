@class CDRichComplicationImageView;

@interface NTKRichComplicationBaseCircularOpenGaugeImageView : NTKRichComplicationCircularOpenGaugeContentView

@property (retain, nonatomic) CDRichComplicationImageView *bottomImageView;

- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (id)bottomView;
- (void)gaugeProvider:(id *)a0 andCenterTextProvider:(id *)a1 fromTemplate:(id)a2;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
