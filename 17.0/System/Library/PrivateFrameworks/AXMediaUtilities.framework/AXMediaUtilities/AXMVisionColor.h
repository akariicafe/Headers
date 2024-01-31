@interface AXMVisionColor : NSObject <NSSecureCoding> {
    unsigned char _red;
    unsigned char _green;
    unsigned char _blue;
    unsigned char _hue;
    unsigned char _saturation;
    unsigned char _brightness;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double redFloat;
@property (readonly, nonatomic) double greenFloat;
@property (readonly, nonatomic) double blueFloat;
@property (readonly, nonatomic) double hueFloat;
@property (readonly, nonatomic) double saturationFloat;
@property (readonly, nonatomic) double brightnessFloat;

+ (id)colorWithRed:(unsigned char)a0 green:(unsigned char)a1 blue:(unsigned char)a2;
+ (id)colorWithHue:(unsigned char)a0 saturation:(unsigned char)a1 brightness:(unsigned char)a2;
+ (id)colorWithHueDegrees:(double)a0 saturation:(double)a1 brightness:(double)a2;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_getHue:(char *)a0 saturation:(char *)a1 brightness:(char *)a2;
- (void)_getRed:(char *)a0 green:(char *)a1 blue:(char *)a2;
- (double)euclidianDistanceHS:(id)a0;
- (double)euclidianDistanceHSV:(id)a0;
- (double)hueRadians;
- (BOOL)isEqualToAXMVisionColor:(id)a0;

@end
