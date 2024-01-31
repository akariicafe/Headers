@class NSArray;

@interface PFParallaxColor : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _srgb;
    void /* unknown type, empty encoding */ _lhc;
    struct CGColor { } *_cgColor;
}

@property (class, readonly, nonatomic) PFParallaxColor *warmColor;
@property (class, readonly, nonatomic) PFParallaxColor *coolColor;
@property (class, readonly, nonatomic) PFParallaxColor *whiteColor;
@property (class, readonly, nonatomic) PFParallaxColor *blackColor;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isWarm;
@property (readonly, nonatomic) BOOL isCool;
@property (readonly, nonatomic) double luma;
@property (readonly, nonatomic) double hue;
@property (readonly, nonatomic) double chroma;
@property (readonly, nonatomic) double tone;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } pt;
@property (readonly, nonatomic) double red;
@property (readonly, nonatomic) double green;
@property (readonly, nonatomic) double blue;
@property (readonly, nonatomic) double luminance;
@property (readonly, nonatomic) NSArray *RGBValues;
@property (readonly, nonatomic) struct CGColor { } *CGColor;
@property (readonly, nonatomic) PFParallaxColor *complementaryColor;

+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithRGBValues:(id)a0 error:(id *)a1;
+ (id)colorWithTone:(double)a0 hue:(double)a1;

- (id)debugQuickLookObject;
- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2;
- (double)deltaE94DistanceToColor:(id)a0;
- (double)distanceToColor:(id)a0;
- (id)initWithHue:(double)a0 tone:(double)a1;
- (id)initWithLuma:(double)a0 hue:(double)a1 chroma:(double)a2;
- (BOOL)isEqualToParallaxColor:(id)a0;

@end
