@class NSDictionary, UIColor;

@interface UIDynamicSystemColor : UIDynamicColor {
    NSDictionary *_colorsByThemeKey;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedColorLock;
    UIColor *_cachedColor;
    unsigned long long _cachedThemeKey;
}

- (unsigned long long)hash;
- (id)_resolvedColorWithTraitCollection:(id)a0;
- (void)_setColorsByThemeKey:(id)a0;
- (id)initWithName:(id)a0 colorsByThemeKey:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)_colorsByThemeKey;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
