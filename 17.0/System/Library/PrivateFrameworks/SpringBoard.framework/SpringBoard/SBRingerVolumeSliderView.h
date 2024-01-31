@class UIViewFloatAnimatableProperty, UIView;

@interface SBRingerVolumeSliderView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *fillView;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *valueSpring;
@property (nonatomic) unsigned long long style;
@property (nonatomic) long long layoutAxis;
@property (nonatomic, getter=isRoundedStyle) BOOL roundedStyle;
@property (nonatomic) double value;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setValue:(double)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
