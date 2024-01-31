@interface UIDeviceRGBColor : UIColor {
    double redComponent;
    double greenComponent;
    double blueComponent;
    double alphaComponent;
    _Atomic struct CGColor *_cachedColor;
}

- (void)setStroke;
- (struct CGColor { } *)CGColor;
- (double)alphaComponent;
- (BOOL)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (BOOL)_isDeepColor;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (id)colorSpaceName;
- (void)setFill;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (void)set;
- (id)colorWithAlphaComponent:(double)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
