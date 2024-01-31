@class NSDictionary;

@interface UIDynamicAppDefinedColor : UIDynamicColor {
    NSDictionary *_colorsByThemeKey;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)_initWithColorsByThemeKey:(id)a0;
- (id)_resolvedColorWithTraitCollection:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_generateColorsByTraitCollection;
- (id)description;
- (id)initWithColorsByTraitCollection:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
