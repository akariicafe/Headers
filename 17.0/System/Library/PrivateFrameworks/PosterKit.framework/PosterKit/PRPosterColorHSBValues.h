@interface PRPosterColorHSBValues : NSObject

@property (readonly, nonatomic) double hue;
@property (readonly, nonatomic) double saturation;
@property (readonly, nonatomic) double brightness;

- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2;
- (id)initWithColor:(id)a0;
- (id)hslValues;
- (id)colorWithAlpha:(double)a0;

@end
