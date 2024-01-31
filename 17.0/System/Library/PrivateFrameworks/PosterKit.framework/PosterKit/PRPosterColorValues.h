@class UIColor, NSString, PRPosterColorHSLValues, PRPosterColorHSBValues;

@interface PRPosterColorValues : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) PRPosterColorHSBValues *hsbValues;
@property (retain, nonatomic) PRPosterColorHSLValues *hslValues;
@property (copy, nonatomic) UIColor *color;
@property (nonatomic) double alpha;

- (unsigned long long)hash;
- (id)initWithHue:(double)a0 saturation:(double)a1 luminance:(double)a2 alpha:(double)a3;
- (id)initWithColor:(id)a0 hsbValues:(id)a1 hslValues:(id)a2 alpha:(double)a3;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0;
- (id)copyWithLuminance:(double)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithAlpha:(double)a0;

@end
