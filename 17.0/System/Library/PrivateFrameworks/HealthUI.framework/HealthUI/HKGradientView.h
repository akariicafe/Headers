@class HKGradient;

@interface HKGradientView : UIView

@property (retain, nonatomic) HKGradient *gradient;

+ (Class)layerClass;
+ (id)hk_verticalWaveformMaskGradientWithInsetLocation:(double)a0;

- (void).cxx_destruct;
- (id)initWithGradient:(id)a0;
- (void)maskCorners:(unsigned long long)a0 radius:(double)a1;
- (void)_updateGradientLayer;
- (void)maskAllCornersWithRadius:(double)a0;

@end
