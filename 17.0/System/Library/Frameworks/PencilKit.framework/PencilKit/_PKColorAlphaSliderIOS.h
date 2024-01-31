@class CAGradientLayer, UIColor, NSString, UIView, _PKCheckerGridView, _PKSliderKnobView;
@protocol _PKColorAlphaSliderDelegate;

@interface _PKColorAlphaSliderIOS : UIView <_PKColorAlphaSlider>

@property (retain, nonatomic) UIView *colorView;
@property (retain, nonatomic) CAGradientLayer *colorViewMaskLayer;
@property (retain, nonatomic) _PKCheckerGridView *alphaGridView;
@property (retain, nonatomic) CAGradientLayer *alphaGridViewMaskLayer;
@property (retain, nonatomic) _PKSliderKnobView *sliderKnobView;
@property (weak, nonatomic) id<_PKColorAlphaSliderDelegate> delegate;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (nonatomic) double minAlpha;
@property (nonatomic) double maxAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_layoutGradientMaskLayer:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isReversed:(BOOL)a2;
+ (double)_outputForResistanceFunction:(double)a0 factor:(double)a1;
+ (id)rgbaColorFromColorIfPossible:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setColor:(id)a0 animated:(BOOL)a1;
- (void)_colorViewTapGestureHandler:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_knobViewFrameForColorAlpha:(double)a0;
- (void)_setColorNoLayout:(id)a0;
- (double)_sliderKnobViewWidth;
- (long long)_uiColorUserInterfaceStyle;
- (double)colorAlphaForSliderKnobXPosition:(double)a0;
- (void)didPanSliderKnob:(id)a0;
- (double)sliderKnobXPositionForColorAlpha:(double)a0;

@end
