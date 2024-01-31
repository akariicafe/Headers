@class TSUColor;

@interface TSDColorFill : TSDFill <TSDMixing, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) struct CGColor { } *CGColor;
@property (readonly, copy, nonatomic) TSUColor *color;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) double hue;
@property (readonly, nonatomic) double saturation;
@property (readonly, nonatomic) double brightness;
@property (readonly, nonatomic) double luminance;

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
+ (id)randomColor;
+ (id)colorWithUIColor:(id)a0;
+ (id)colorWithColor:(id)a0;
+ (id)keyPathsForValuesAffectingBrightness;
+ (id)keyPathsForValuesAffectingCGColor;
+ (id)keyPathsForValuesAffectingHue;
+ (id)keyPathsForValuesAffectingLuminance;
+ (id)keyPathsForValuesAffectingOpacity;
+ (id)keyPathsForValuesAffectingSaturation;

- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (BOOL)isOpaque;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (id)initWithColor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUIColor:(id)a0;
- (id)referenceColor;
- (int)fillType;
- (id)UIColor;
- (BOOL)isClear;
- (id)grayscaleColor;
- (id)invertedColor;
- (BOOL)isNearlyWhite;
- (void)paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (void)applyToCALayer:(id)a0 withScale:(double)a1;
- (void)applyToCAShapeLayer:(id)a0 withScale:(double)a1;
- (BOOL)canApplyToCALayer;
- (BOOL)canApplyToCAShapeLayer;
- (BOOL)drawsInOneStep;
- (SEL)mapThemeAssetSelector;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;
- (double)p_hsbComponentWithIndex:(unsigned long long)a0;

@end
