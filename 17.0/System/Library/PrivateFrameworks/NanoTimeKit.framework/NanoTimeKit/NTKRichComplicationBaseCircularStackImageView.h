@class CDRichComplicationImageView;

@interface NTKRichComplicationBaseCircularStackImageView : NTKRichComplicationCircularStackContentTextView

@property (retain, nonatomic) CDRichComplicationImageView *line1ImageView;

- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (id)line1View;
- (id)line2TextProviderFromTemplate:(id)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
