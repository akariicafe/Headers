@class UIColor, NTKWorldClockGraphicCircularView;

@interface NTKWorldClockRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView <CDRichComplicationTintedPlatterColorOverridable> {
    NTKWorldClockGraphicCircularView *_worldClockCircularView;
}

@property (retain, nonatomic) UIColor *daytimeBackgroundColor;
@property (retain, nonatomic) UIColor *daytimeHandsColor;
@property (retain, nonatomic) UIColor *daytimeHandsDotColor;
@property (retain, nonatomic) UIColor *nighttimeBackgroundColor;
@property (retain, nonatomic) UIColor *nighttimeHandsColor;
@property (retain, nonatomic) UIColor *nighttimeHandsDotColor;

- (void)setPaused:(BOOL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFamily:(long long)a0;
- (void)_applyPaused;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)a0;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (void)makeBackgroundTransparent;
- (void)setFilterProvider:(id)a0;
- (void)setTintedFraction:(double)a0;
- (void)setTintedPlatterColor:(id)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
