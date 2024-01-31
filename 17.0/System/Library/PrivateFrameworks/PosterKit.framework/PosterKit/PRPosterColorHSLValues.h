@interface PRPosterColorHSLValues : NSObject

@property (readonly, nonatomic) double hue;
@property (readonly, nonatomic) double saturation;
@property (readonly, nonatomic) double luminance;

- (id)hsbValues;
- (id)initWithHue:(double)a0 saturation:(double)a1 luminance:(double)a2;

@end
