@class UIColor, NSString, NTKDigitalTimeLabelStyle;

@interface NTKDigitalTimeLabel : CLKUITimeLabel <CLKUIColoringView, NTKTimeView> {
    UIColor *_shadowColor;
}

@property (copy, nonatomic) NTKDigitalTimeLabelStyle *style;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isFrozen) BOOL frozen;

- (void)setTimeOffset:(double)a0;
- (void)setShadowColor:(id)a0;
- (void)setStyle:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTextColor:(id)a0;
- (id)_labelColorFromFaceColorPalette:(id)a0 device:(id)a1;
- (id)_newUnderlyingLabel:(BOOL)a0;
- (void)animateToStyle:(id)a0 duration:(double)a1 timingFunction:(id)a2 additionalAnimation:(id /* block */)a3 completion:(id /* block */)a4;
- (void)applyFaceColorPalette:(id)a0 device:(id)a1;
- (void)applyFaceFromColorPalette:(id)a0 toColorPalette:(id)a1 fraction:(float)a2 device:(id)a3;
- (id)initWithTimeLabelOptions:(unsigned long long)a0 forDevice:(id)a1;
- (void)setFrameUsingCurrentStyle;
- (void)setOverrideDate:(id)a0 duration:(double)a1;

@end
