@class CDRichComplicationImageView;

@interface NTKRichComplicationBaseCircularImageView : NTKRichComplicationCircularBaseView <CDRichComplicationTintedPlatterColorOverridable>

@property (retain, nonatomic) CDRichComplicationImageView *imageView;

+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFamily:(long long)a0;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { BOOL x0; id x1; double x2; })a0;
- (void)setTintedFraction:(double)a0;
- (void)setTintedPlatterColor:(id)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
