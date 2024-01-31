@interface UIDynamicProviderColor : UIDynamicColor {
    id /* block */ _provider;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)_resolvedColorWithTraitCollection:(id)a0;
- (id)replacementObjectForCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProvider:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
