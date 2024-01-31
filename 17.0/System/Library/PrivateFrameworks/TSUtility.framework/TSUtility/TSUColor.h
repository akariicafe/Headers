@interface TSUColor : NSObject <NSCopying>

@property (readonly) struct CGColor { } *CGColor;

+ (id)colorWithWhite:(double)a0 alpha:(double)a1;
+ (id)blueColor;
+ (id)grayColor;
+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)redColor;
+ (id)blackColor;
+ (id)cyanColor;
+ (id)purpleColor;
+ (id)magentaColor;
+ (id)yellowColor;
+ (id)clearColor;
+ (id)greenColor;
+ (id)whiteColor;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)orangeColor;
+ (id)brownColor;
+ (id)lightGrayColor;
+ (id)colorWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
+ (id)colorWithPatternImage:(id)a0;
+ (id)randomColor;
+ (id)colorWithPlatformColor:(id)a0;
+ (id)colorWithRGBAComponents:(const double *)a0;
+ (id)colorWithUIColor:(id)a0;

- (double)alphaComponent;
- (double)luminance;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)colorWithAlphaComponent:(double)a0;
- (BOOL)isOpaque;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithPatternImage:(id)a0;
- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)blueComponent;
- (double)greenComponent;
- (id)initWithUIColor:(id)a0;
- (double)redComponent;
- (id)UIColor;
- (id)initWithPlatformColor:(id)a0;
- (id)platformColor;
- (double)brightnessComponent;
- (double)hueComponent;
- (double)saturationComponent;
- (id)blendedColorWithFraction:(double)a0 ofColor:(id)a1;
- (id)darkenedColorByFactor:(double)a0;
- (void)getRGBAComponents:(double *)a0;
- (id)grayscaleColor;
- (id)invertedColor;
- (BOOL)isAlmostEqualToColor:(id)a0;
- (BOOL)isGrayscaleColor;
- (BOOL)isNearlyWhite;
- (id)lightenedColorByFactor:(double)a0;
- (id)newBlendedColorWithFraction:(double)a0 ofColor:(id)a1;
- (double)p_rgbComponentWithIndex:(unsigned char)a0;
- (void)paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;

@end
