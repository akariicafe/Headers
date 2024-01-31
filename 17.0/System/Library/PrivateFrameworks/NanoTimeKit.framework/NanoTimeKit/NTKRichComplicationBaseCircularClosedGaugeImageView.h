@class CDRichComplicationImageView;

@interface NTKRichComplicationBaseCircularClosedGaugeImageView : NTKRichComplicationCircularClosedGaugeContentView

@property (retain, nonatomic) CDRichComplicationImageView *imageView;

- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (id)gaugeProviderFromTemplate:(id)a0;
- (id)innerView;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
