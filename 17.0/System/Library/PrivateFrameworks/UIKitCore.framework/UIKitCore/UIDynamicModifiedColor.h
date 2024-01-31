@class UIDynamicColor;

@interface UIDynamicModifiedColor : UIDynamicColor {
    UIDynamicColor *_baseColor;
    double _alphaComponent;
    long long _contrast;
}

+ (BOOL)supportsSecureCoding;

- (id)colorWithAlphaComponent:(double)a0;
- (unsigned long long)hash;
- (BOOL)_isDynamicTintColor;
- (id)_resolvedColorWithTraitCollection:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithBaseColor:(id)a0 alphaComponent:(double)a1 contrast:(long long)a2;
- (id)_highContrastDynamicColor;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_resolvedMaterialWithTraitCollection:(id)a0;

@end
