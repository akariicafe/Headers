@class UIColor, UIImageView, NUNIAstronomyLocationDotConfiguration, UIView;

@interface NUNIAstronomyLocationDot : UIView {
    UIView *_outerDot;
    UIImageView *_innerDotImageView;
    NUNIAstronomyLocationDotConfiguration *_configuration;
}

@property (retain, nonatomic) UIColor *outerDotColor;
@property (nonatomic) double outerDotDiameter;
@property (retain, nonatomic) UIColor *innerDotColor;
@property (nonatomic) double innerDotDiameter;
@property (nonatomic) double pulseDuration;
@property (nonatomic) double pulseAlphaDelay;
@property (nonatomic) BOOL animating;

+ (id)_defaultColor;
+ (double)defaultPulseAlphaDelay;
+ (double)defaultPulseDuration;

- (double)screenScale;
- (id)init;
- (void)startAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)layoutSubviews;
- (void)_generateInnerDotImage;
- (void)startAnimationWithCompletionBlock:(id /* block */)a0;

@end
