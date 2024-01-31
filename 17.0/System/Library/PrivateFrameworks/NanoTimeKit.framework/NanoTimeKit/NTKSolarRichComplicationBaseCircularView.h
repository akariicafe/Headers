@class NTKSolarRichComplicationFullColorImageView;

@interface NTKSolarRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    NTKSolarRichComplicationFullColorImageView *_solarImageView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFamily:(long long)a0;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)a0;
- (void)_updateWithLocation:(id)a0 useIdealizedTime:(BOOL)a1 forceUpdate:(BOOL)a2 animated:(BOOL)a3;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
