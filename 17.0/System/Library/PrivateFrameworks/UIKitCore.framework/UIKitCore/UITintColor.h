@interface UITintColor : UIDynamicColor

- (void)setStroke;
- (struct CGColor { } *)CGColor;
- (double)alphaComponent;
- (BOOL)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (BOOL)_isDeepColor;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (id)colorSpaceName;
- (void)setFill;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (void)set;
- (id)init;
- (unsigned long long)hash;
- (BOOL)_isDynamicTintColor;
- (id)_resolvedColorWithTraitCollection:(id)a0;
- (BOOL)isPatternColor;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
